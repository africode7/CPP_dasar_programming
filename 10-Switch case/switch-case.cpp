#include <iostream>
using namespace std;
int main(){
int a;
cout << "masukan input: " << endl;
cin >> a;
switch(a){
case 1:
cout << "input yang anda masukan 1" << endl;
break;
case 2:
cout << "input yang anda masukan 2" << endl;
break;
case 3:
cout << "input yang anda masukan 3" << endl;
break;
default:
cout << "input yang anda masukan bukan 1 , 2 ataupun 3" << endl;
}
return 0;
}