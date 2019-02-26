/*
Nama Program: Fizz Buzz
Nama        : Daniel Rama H.
NPM         : 140810180045
Tanggal     : 26-02-2019
Deskripsi   : Program Fizz Buzz
*/

#include <iostream>
using namespace std;

int FizzBuzz(int& a, int& b)
{
    for(int i=a;i<=b;i++)
    {
        if (i%15==0){cout<<"FizzBuzz"<<endl;}
        else if (i%5==0){cout<<"Buzz"<<endl;}
        else if (i%3==0){cout<<"Fizz"<<endl;}
        else cout<<i<<endl;
    }
}

int main()
{
    int a,b,c;
    cout<<"Masukkan angka awal  : ";cin>>a;
    cout<<"Masukkan angka akhir : ";cin>>b;
    FizzBuzz(a,b);
}
