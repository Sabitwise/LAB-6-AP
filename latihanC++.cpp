#include<iostream>
#include<iomanip> //library untuk mengatur koma
using namespace std;

int main(){
    system("cls");
    string nama; 
    int nim;
    char kom;
    float ip; 

    cout <<"Hello World"<<endl;
    cout<<"Masukkan nama : ";
    //cin>>nama; only able to input one word in single input
    getline(cin, nama); //able to input multiple word in single input.
    

    cout<<"Masukkan NIM : ";
    cin>>nim;

    cout<<"Masukkan KOM : ";
    cin>>kom;

    cout<<"Masukkan IP : ";
    cin>>ip;

    //prinout

    cout<<"NAMA : "<<nama<<endl;
    cout<<"NIM : "<<nim<<endl;
    cout<<"KOM : "<<kom<<endl;

    cout<<fixed<<setprecision(2); //untuk mengatur angka dibelakang koma dan bisa diinput sebelum tipe data float di printout
    cout<<"IP : "<<ip<<endl;
    return 0;
}