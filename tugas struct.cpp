#include<iostream>
using namespace std;
void header() {
    cout << "Program Menghitung Pecahan\n";
    cout << "\tBy Tama\n";
    cout << "---------------------------------\n";
}

struct bilangan {
    int pembilang;
    int penyebut;

};
int main() {
    int temp = 0;
    char pilih, ulang;
    bilangan a, b, hasil1, hasil2;

    a.pembilang = 2;
    a.penyebut = 4;
    b.pembilang = 3;
    b.penyebut = 5;

    do {
        header();
        cout << "1. Menjumlahkan dua pecahan\n";
        cout << "2. Mengurangi dua pecahan\n";
        cout << "3. Mengkali dua pecahan\n";
        cout << "4. Membagi dua pecahan\n";
        cout << "5. Keluar\n";
        cout << "Pilih : "; cin >> pilih;

        switch (pilih) {

        case '1' :
            cout << "Menjumlahkan dua pecahan\n";
            cout << "-------------------------------\n\n";
            cout << "(a/b) + (c/d)" << endl;
            cout << "(" << a.pembilang << "/" << a.penyebut << ")" << " + " << "(" << b.pembilang << "/" << b.penyebut << ")"<<endl;
            if (a.penyebut == b.penyebut) {
                hasil1.pembilang = a.pembilang + b.pembilang;
                hasil1.penyebut == b.penyebut;
            }
            else {
                temp += a.pembilang * b.penyebut;
                temp += b.pembilang * a.penyebut;

                hasil1.pembilang = temp;
                hasil1.penyebut = b.penyebut * a.penyebut;

            }
            cout << hasil1.pembilang << "/" << hasil1.penyebut<<endl;
            break;
        case '2' :
            cout << "Mengurangi dua pecahan\n";
            cout << "-------------------------------\n\n";
            cout << "(a/b) - (c/d)" << endl;
            cout << "(" << a.pembilang << "/" << a.penyebut << ")" << " - " << "(" << b.pembilang << "/" << b.penyebut << ")" << endl;
            if (a.penyebut == b.penyebut) {
                hasil1.pembilang = a.pembilang - b.pembilang;
                hasil1.penyebut == b.penyebut;
            }
            else {
                temp += a.pembilang * b.penyebut;
                temp -= b.pembilang * a.penyebut;

                hasil1.pembilang = temp;
                hasil1.penyebut = b.penyebut * a.penyebut;

            }
            cout << hasil1.pembilang << "/" << hasil1.penyebut<<endl;
            break;
        case '3' :
            cout << "Mengkali dua pecahan\n";
            cout << "-------------------------------\n\n";
            cout << "(a/b) x (c/d)" << endl;
            cout << "(" << a.pembilang << "/" << a.penyebut << ")" << " x " << "(" << b.pembilang << "/" << b.penyebut << ")" << endl;

            hasil1.pembilang = a.pembilang * b.pembilang;
            hasil1.penyebut = a.penyebut * b.penyebut;

            cout << hasil1.pembilang << "/" << hasil1.penyebut<<endl;
            break;
        case '4' :
            cout << "Membagi dua pecahan\n";
            cout << "-------------------------------\n\n";
            cout << "(a/b) : (c/d)" << endl;
            cout << "(" << a.pembilang << "/" << a.penyebut << ")" << " : " << "(" << b.pembilang << "/" << b.penyebut << ")" << endl;

            hasil1.pembilang = a.pembilang * b.penyebut;
            hasil1.penyebut = a.penyebut * b.pembilang;

            cout << hasil1.pembilang << "/" << hasil1.penyebut<<endl;
            break;
        case '5' :
            return 0;
            break;
        default :
            cout << "Pilihan Tidak Ada Dalam Sistem\n";
        }
        cout << "Kembali Ke Menu Utama? [y/n] : "; cin >> ulang;
    } while (ulang == 'y' || ulang == 'Y');
}