#include <iostream>
using namespace std;
int main(){
int a;
cout << "masukan input: ";
cin >> a;
if ( a == 7 ){
cout << "benar! angka yang anda masukan adalah 7" << endl;
} else if ( a == 1 ){
cout << "benar! angka yang anda masukan adalah 1" << endl;
} else {
cout << "angka yang anda masukkan bukan 7 ataupun 1" << endl;
}
cout << "program selesai.";
return 0;
}