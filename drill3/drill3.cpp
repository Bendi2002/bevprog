#include "../std_lib_facilities.h"

int main() {

	string first_name;
	string last_name;
	string friend_name;
	char friend_sex = 0;
	int age;

	cout << "What is your first name? ";
	cin >> first_name;
	cout << "\nHello, " << first_name <<"\n";
	cout << "We have a nice day.\n";

	cout << "What is your friend's name? ";
	cin >> friend_name;
	
	cout << "\nIs your friend a male (m) or female (f)? ";
	cin >> friend_sex;
	if (friend_sex == 'm')
		cout << "If you see " << friend_name << " please ask him to call me\n";
	if (friend_sex == 'f')
		cout << "If you see " << friend_name << " please ask her to call me\n";

	cout << "How old are you? ";
	cin >> age;
	cout << "\nI heard you just had a birthday and you are " << age << " years old.\n";

	if (age < 12)
		cout << "Next year you will be " << age+1 << ".\n";
	if (age == 17)
		cout << "Next year you will be able to vote.\n";
	if (age > 70)
		cout << "I hope you are enjoying retirement.\n";

	cout << "Yours sincerely,\n\n\nBendegúz\n";

	return 0;
}