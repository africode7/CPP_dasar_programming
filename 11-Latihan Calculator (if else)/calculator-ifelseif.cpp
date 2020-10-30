#include <iostream>
using namespace std;
int main() {
float a,b,hasil;
char aritmatika;
cout << "masukan angka pertama : ";
cin >> a;
cout << "masukan operator (+,-,*,/) : ";
cin >> aritmatika;
cout << "masukan angka kedua : ";
cin >> b;
if(aritmatika == '+'){
hasil = a + b;
cout << "hasil dari " << a << " + " << b << "= " << hasil << endl;
} else if (aritmatika == '-'){
hasil = a - b;
cout << "hasil dari " << a << " - " << b << "= " << hasil << endl;
} else if (aritmatika == '*'){
hasil = a * b;
cout << "hasil dari " << a << " x " << b << "= " << hasil << endl;
} else if (aritmatika == '/'){
if(b == 0){
cout << "tidak bisa dibagi dengan 0" << endl;
} else {
hasil = a / b;
cout << "hasil dari " << a << " / " << b << "= " << hasil << endl;
}
} else {
cout << "operator salah, silahkan masukan (+,-,*,/)" << endl;
}
return 0;
}