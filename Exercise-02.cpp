/*
Nama Program: Exercise 02
Nama        : Daniel Rama H.
NPM         : 140810180045
Tanggal     : 26-02-2019
Deskripsi   : konversi suhu
*/

#include <iostream>
using namespace std;

float konversi(float& c, float& f)
{
    return f=(c*9/5)+32;                    //konversi suhu
}
int main()
{
    float c,f;
    cout<<"Masukkan suhu celcius : ";cin>>c;
    konversi(c,f);
    cout<<"Suhu fahrenheit       : "<<f<<endl;
}
