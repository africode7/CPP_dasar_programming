#include <iostream>
using namespace std;
int x = 10; // variabel global
int ambilGlobal(){
return x; // mengambil variabel global
}
int xLocal(){
int x = 5; // variabel local scopenya xLocal()
return x;
}
int main(){
cout << "1. variabel global : " << x << endl;
int x = 8; // variabel local untuk main
cout << "2. variabel local main : " << x << endl;
cout << "3. variabel ambilGlobal : " << ambilGlobal() << endl;
cout << "4. variabel local main : " << x << endl;
cout << "5. variabel xLocal : " << xLocal() << endl;
cout << "6. variabel local main : " << x << endl;
cout << "7. variabel local main : " << x << endl;
{
cout << "8. variabel local main : " << x << endl;
// block scope
int x = 7;
cout << "9. variabel local block : " << x << endl;
cout << "10. variabel global : " << ambilGlobal() << endl;
}
cout << "11. variabel local main : " << x << endl;
return 0;
}