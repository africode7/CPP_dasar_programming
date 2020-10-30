#include <iostream>
using namespace std;
void show(int input){
cout << "menampilkan dengan void\n";
cout << input << endl;
}
int main(){
int y;
cout << "masukan angka: ";
cin >> y;
show(y);
return 0;
}
// void adalah kosong