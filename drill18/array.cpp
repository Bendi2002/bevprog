#include "../std_lib_facilities.h"

int ga[10] = {1,2,4,8,16,32,64,128,256,512};

void f(int la[10]){
	int* p = new int[10];
	for(int i = 1;i < 10;i++){
		la[i] = ga[i];
		cout << la[i] << "\n";
		p[i] = la[i];
	}
	for(int i = 1;i < 10;i++){
		cout << p[i];
	}
	delete[] p;
}

int main(){
	f(ga);
	int aa[10] = {1,2,6,24,120,720,5040,40320,362880,3628800};
	f(aa);

	return 0;
}