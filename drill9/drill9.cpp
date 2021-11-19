#include "../std_lib_facilities.h"

namespace UDChrono
{
	class Year
	{
			static constexpr int min = 1800;
			static constexpr int max = 2200;
		public:
			class Invalid{}; //class-on belüli class, beágyazott osztály
			Year(int x): y{x} { if(x < min || x > max) throw Invalid{}; }
			int year() {return y; }
			void increment() {y++; }
		private:
			int y;
	};

	Year operator++(Year& year)
	{
		year.increment();
		return year;
	}

	ostream& operator<<(ostream& os, Year year)
	{
		return os << year.year();
	}

	const vector<string> months =
	{
		"January", 
		"February", 
		"March", 
		"April", 
		"May", 
		"June", 
		"July", 
		"August", 
		"September", 
		"October", 
		"November", 
		"December"
	};

	enum class Month
	{
		jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
	};

	Month operator++(Month& m)
	{
		m = (m == Month::dec) ? Month::jan : Month(int(m)+1);
		return m;
	}

	ostream& operator<<(ostream& os, Month m)
	{
		return os << months[int(m)];
	}

	class Date
	{
		private:
			Year year;
			Month month;
			int day;
		public:
			class Invalid{};

			Date(): year(Year{2001}), month(Month::jan), day(1) {} //default constructor
			Date(Year y, Month m, int d): year(y), month(m), day(d) {if (!is_valid()) throw Invalid{}; }
			void add_day(int n);

			bool is_valid();

			Year get_year() const {return year; } //const-tal jelöljük, hogy a függvény nem fogja módosítani az értékeket, csak return-öli
			Month get_month() const {return month; }
			int get_day() const {return day; }

			void set_year(Year y)
			{
				year = y;
			}

			void set_day(int d)
			{
				if (d > 0 && d <= 31)
				{
					day = d;
				}
				else
				{
					error("Invalid day in set_day().");
				}
			}
	};

	bool Date::is_valid()
	{
		if (day < 1 || day > 31)
		{
			return false;
		}
		return true;
	}

	void Date::add_day(int n)
	{
		day += n;
		if (day > 31)
		{
			++month;
			day -= 31;

			if (month == Month::jan)
			{	
				++year;
			}
		}
	}
}
// End of namespace

ostream& operator<<(ostream& os, const UDChrono::Date& d)
{
	return os << d.get_year() << ". " << d.get_month() << ' ' << d.get_day() << ".";
}

istream& operator>>(istream& is, UDChrono::Date& dd) //nincs const
{
	// 2021.10.31
	int y, m, d;
	char ch1, ch2;
	is >> y >> ch1 >> m >> ch2 >> d;

	if (!is)
	{
		return is;
	}

	if (ch1 != '.' || ch2 != '.') //Ha a két elválasztókarakter egyike nem pont
	{
		is.clear(ios_base::failbit); //dián vetített fail állapotot állítjuk be kézzel
	}

	dd = UDChrono::Date{UDChrono::Year{y}, UDChrono::Month(m-1), d};

	return is;
}

int main()
{
	try
	{	
		//Initializing a date called "Today" on 1978 June 25.
		UDChrono::Date today {UDChrono::Year{1978}, UDChrono::Month::jun, 25};

		cout << "Date: " << today << "\n";

		UDChrono::Date tomorrow = today;
		tomorrow.add_day(1);
		cout << "Date: " << tomorrow << "\n";


		return 0;
	}
	catch (UDChrono::Year::Invalid) //Year típusú Invalid-ot kapja el.
	{
		cerr << "Exception: Invalid year." << '\n';
		return 1;
	}
	catch (UDChrono::Date::Invalid) //Date típusú Invalid-ot kapja el.
	{
		cerr << "Exception: Invalid date." << '\n';
		return 2;
	}
	catch (exception& e)
	{
		cerr << e.what() << '\n';
		return 3;
	}
}