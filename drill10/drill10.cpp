#include "../std_lib_facilities.h"

struct Point{
	vector<double> x,y;
};

int main(){
	Point original_points, processed_points;
	int i;
	double x,y;
	cout << "Type in 7 x,y pairs:\n";
	for(i = 0; i <= 6; ++i){
		cin >> x >> y;
		original_points.x.push_back(x);
		original_points.y.push_back(y);
	}

	for(i = 0; i <=6; ++i){
		cout << "x: " << original_points.x[i];
		cout << " y: " << original_points.y[i] << "\n";
	}

	ofstream writefile;
	writefile.open("mydata.txt");
	for(i = 0; i <= 6; ++i){
		writefile << original_points.x[i] << " " << original_points.y[i] << "\n";
	}
	writefile.close();

	ifstream readfile;
	readfile.open("mydata.txt");
	for(i = 0; i <= 6; ++i){
		readfile >> x >> y;
		processed_points.x.push_back(x);
		processed_points.y.push_back(y);
	}
	cout << "Processed points:\n";
	for(i = 0; i <= 6; ++i){
		cout << "x: " << processed_points.x[i];
		cout << " y: " << processed_points.y[i] << "\n";
	}

	for(i = 0; i <= 6; ++i){
		if(original_points.x[i] != processed_points.x[i]){
			cout << "Something's wrong!";
		}
		if(original_points.y[i] != processed_points.y[i]){
			cout << "Something's wrong!";
		}
	}
	return 0;
}