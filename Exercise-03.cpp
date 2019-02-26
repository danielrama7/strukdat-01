/*
Nama Program: Exercise-03
Nama        : Daniel Rama H.
NPM         : 140810180045
Tanggal     : 26-02-2019
Deskripsi   : Swap
*/

#include <iostream>
using namespace std;

void hasil(int& x, int& y)
{
    swap(x,y);
    cout<<"hasil swap : "<<"("<<x<<","<<y<<")"<<endl;
}
int main()
{
    int x,y;
    cout<<"Masukkan nilai x : ";cin>>x;
    cout<<"Masukkan nilai y : ";cin>>y;
    cout<<"(x,y) : "<<"("<<x<<","<<y<<")"<<endl;
    hasil(x,y);
}
