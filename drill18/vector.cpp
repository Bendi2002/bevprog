#include "../std_lib_facilities.h"

vector<int> gv = {1,2,4,8,16,32,64,128,256,512};

void f(const vector<int> v){
	vector<int> lv;
	for(int i = 0;i < 10;++i){
		lv.push_back(v[i]);
	}
	for(int i = 0;i < 10;++i)	
		cout << lv[i] << "\n";
	
	vector<int> lv2;
	for(int i = 0;i < 10;++i){
		lv2.push_back(v[i]);
	}
	for(int i = 0;i < 10;++i)	
		cout << lv2[i] << "\n";
	
}

int main(){
	f(gv);
	vector<int> vv = {1,2,6,24,120,720,5040,40320,362880,3628800};
	f(vv);

	return 0;
}