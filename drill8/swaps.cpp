#include "../std_lib_facilities.h"

void swap_v(int a,int b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swap_r(int& a,int& b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}

/*void swap_cr(const int& a,const int& b){
	int temp;
	temp = a;
	a = b;
	b = temp;
} Nem fog működni, mivel egy konstansnak próbálunk értéket adni*/

int main(){

}
void vtype(){
	int x = 7;
	int y = 9;
	const int cx = 7;
	const int cy = 9;
	double dx = 7;
	double dy = 9;
	
	swap_v(cx,cy);
	cout << "v-swapped x: " << cx << "\n";
	cout << "v-swapped y: " << cy << "\n";

	swap_r(dx,dy);
	cout << "r-swapped x: " << dx << "\n";
	cout << "r-swapped y: " << dy << "\n";
	
	
	/*swap_cr(cx,cy);
	cout << "cr-swapped x: " << cx << "\n";
	cout << "cr-swapped y: " << cy << "\n";
	return 0;*/
