#include <iostream>
using namespace std;

float phi = 3.14159
int r;

void input(){
    cout << "Masukkan jari jari : ";
    cin >> r;
}

float luasLingkaran (int b){
    return phi*b*b;
}

void output(){
    cout << "Hasilnya =" << luasLingkaran(r);
}
