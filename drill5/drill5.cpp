#include "../std_lib_facilities.h"
int main()
try {
 cout << "Success!\n";
 cout << "Success!\n";
 cout << "Success" << "!\n";
 cout << "Success" << "!\n";
 vector<int> v(10); int res = 7; v[5] = res; cout <<"Success!\n";
 vector<int> v1(10); v1[5] = 7; if (v1[5]=7) cout << "Success!\n";
 cout << "Success!\n";
 bool c = false; if (c == false) cout << "Success!\n"; else cout <<"Fail!\n";
 string s = "ape"; string cstring = "fool"; if (cstring != s) cout << "Success!\n";
 string s1 = "ape"; if (s1 != "fool") cout << "Success!\n";
 string s2 = "ape"; if (s2 != "fool") cout << "Success!\n";
 string s3 = "ape"; if (s3 != "fool") cout << "Success!\n";
 vector<char> u(5); for (int i=0; i<u.size(); ++i) ; cout <<"Success!\n";
 vector<char> w(5); for (int i=0; i<w.size(); ++i) ; cout <<"Success!\n";
 string s4 = "Success!\n"; for (int i=0; i<6; ++i); cout << s4;
 if (true) cout << "Success!\n"; else cout << "Fail!\n";
 int x = 2000; int c1 = x; if (c1==2000) cout << "Success!\n";
 string s5 = "Success!\n"; for (int i=0; i<10; ++i) ; cout << s4;
 vector<int> vv(5); for (int i=0; i<vv.size(); ++i) ; cout <<"Success!\n";
 int i1 = 0; int j = 9; while (i1<10) ++i1; if (j<i1) cout <<"Success!\n";
 int x1 = 3; double d = 5-x1; if (d==2) cout <<"Success!\n";
 return 0;
}
catch (exception& e) {
 cerr << "error: " << e.what() << '\n';
 return 1;
}
catch (...) {
 cerr << "Oops: unknown exception!\n";
 return 2;
}