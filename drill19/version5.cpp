#include "../std_lib_facilities.h"

unique_ptr<vector<int>> suspicious(){
	auto p = make_unique<vector<int>>();

	for(int i = 0; cin >> i; ){
		if(i){
			p->push_back(i);
		}
		else{
			throw exception();
		}
	}

	return p;
}

void suspicious(int size, int x){
	int* p = new int[size];

	if(x == 0){
		throw exception();
	}

	delete p;
}

int main(){
	try{
		auto p = suspicious();

		for(int i = 0; i < p->size(); ++i){
			cout << p->at(i) << ' ';
		}
		cout << '\n';

		return 0;
	}
	catch(std::exception& e){
		cerr << "Error!\n";
		return 1;
	}
}