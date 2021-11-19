#include "../std_lib_facilities.h"

int birth_year = 2002;
int current_year = 2021;
int age;
int a,b,c,d;
const float fpoint = 1234567.89;
vector<string> fname, lname, phone, email;
string fn, ln, ph, em;

int main(){
	cout << "Birth year  in hexadecimal, in octal, in decimal: ";
	cout << showbase << hex << birth_year << "\t";
	cout << showbase << oct << birth_year << "\t";
	cout << dec << birth_year << "\t\n";

	age = current_year - birth_year; 
	cout << "Age: " << age << "\n";

	cout << "Type in 1234 four times:\n";
	cin >> a >> oct >> b >> hex >> c >> d;
	cout << a << '\t' << b << '\t' << c << '\t' << d << '\n';
	cout << defaultfloat << fpoint << '\t' << fixed << fpoint << '\t' << scientific << fpoint;

	cout << "\nType in your and five of your friends' last and first names, their phone numbers and their email addresses:\n"; 
	for(int i = 0; i <= 5; ++i){
		cin >> ln >> fn >> ph >> em;
		fname.push_back(fn);
		lname.push_back(ln);
		phone.push_back(ph);
		email.push_back(em); 
	}
	cout << "Last name\tFirst name\tPhone number\tEmail address\n";
	for(int i = 0; i <= 5; ++i){
		cout << lname[i] << '\t' << fname[i] << '\t' << phone[i] << '\t' << email[i];
	}

	return 0;
}