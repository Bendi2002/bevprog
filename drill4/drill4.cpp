#include "../std_lib_facilities.h"

int main() {

	vector<double> metered;
	double numberInput, numberMax, numberMin = 0, meterTemp = 0, sum = 0;
	int lc = 1, i;	string unit;
	
	
	while(true) {
		cout << "\nType in a length:\n";
		cin >> numberInput >> unit;
		
		if (unit == "m") 
			meterTemp = numberInput;
		else if (unit == "cm") 
			meterTemp = numberInput / 100;
		else if (unit == "in") 
			meterTemp = numberInput * 2.54 / 100;
		else if (unit == "ft") 
			meterTemp = numberInput * 12 * 2.54 / 100;
		else {	
			cout << "Error! Illegal unit!\n";
			return 1;
		}

		cout << "The number is " << numberInput << "\n";
		
		if (lc == 1){
			cout << "This number is the smallest so far.\n";
			numberMin = numberInput;
		}
		else if (numberInput < numberMax){
			cout << "This number is the smallest so far.\n";
			numberMin = numberInput;
		}
		if (numberInput > numberMax){
			cout << "This number is the largest so far.\n";
			numberMax = numberInput;
		}
		
		lc += 1;

		metered.push_back(meterTemp);
		sort(metered);
		
		sum = 0;

		for(i = 0; i < metered.size(); i++){
			sum += metered[i];
		}
		cout << "The smallest is " << numberMin << "\n";
		cout << "The largest is " << numberMax << "\n";
		cout << "\nThe sum is " << sum << " meters\n";
		cout << "Number of values: " << metered.size() << "\n";
		
		for(i = 0; i < metered.size(); i++){
			cout << metered[i] << " ";
		}
		
	}

	return 0;
}