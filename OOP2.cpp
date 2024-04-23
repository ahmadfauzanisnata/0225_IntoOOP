#include <iostream>
using namespace std;

class bangunDatar{
    private: //akses modifier
    float panjang, Lebar;
    public:
    float Luas;

    void input(){ // methode input persegi panjang

    cout << "Masukan panjangnya = ";
    cin >> panjang;
    cout << "Masukan Lebarnya = ";
    cin >> Lebar;
    }

    float hitungluas (){
        return panjang * Lebar;

    }
    void display() {
        cout << "Panjangnya" << panjang << endl;
        cout << "Lebarnya" << Lebar << endl;
        cout << "Luasnya" << hitungluas() << endl;
    }
}