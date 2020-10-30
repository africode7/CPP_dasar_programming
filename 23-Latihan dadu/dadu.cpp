#include <iostream>
#include <cstdlib> // mengandung fungsi random
using namespace std;
int main(){
char lanjut;
while(true){
cout << "Lempar dadu? (y/n)";
cin >> lanjut;
if(lanjut == 'y'){
cout << 1 + (rand() % 6) << endl;
}else if(lanjut == 'n'){
break;
}else{
cout << "Warning: hanya bisa y / n saja!!\n";
}
}
return 0;
}