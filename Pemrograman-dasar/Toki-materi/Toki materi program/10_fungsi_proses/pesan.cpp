#include <iostream>
#include <string>

using namespace std;

// global variable
char buff[1001];
string pesan;

// Subprogram
void bacaPesan() {
cout<<"masukkan pesan: ";
cin>>buff;
pesan = buff;
}

// Program utama
int main() {
bacaPesan();
cout<<"pesan = "<<pesan<<endl;
}