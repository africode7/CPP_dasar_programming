#include <iostream>
using namespace std;
int main(){
float a,b,hasil;
char aritmatika;
cout << "masukan angka pertama: ";
cin >> a;
cout << "masukan operator (+,-,/,*) : ";
cin >> aritmatika;
cout << "masukan angka kedua: ";
cin >> b;
switch(aritmatika){
case '+':
hasil = a + b;
cout << "hasil dari " << a << " + " << b << "= " << hasil << endl;
break;
case '-':
hasil = a - b;
cout << "hasil dari " << a << " - " << b << "= " << hasil << endl;
break;
case '*':
hasil = a * b;
cout << "hasil dari " << a << " x " << b << "= " << hasil << endl;
break;
case '/':
if (a / 0){
cout << "tidak bisa di bagi dengan 0" << endl;
} else {
hasil = a / b;
cout << "hasil dari " << a << " / " << b << "= " << hasil << endl;
break;
default:
cout << "operator salah" << endl;
}
}
return 0;
}