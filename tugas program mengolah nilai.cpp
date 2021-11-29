#include <iostream>
using namespace std;

void header() {
	cout << "Program Mengolah Nilai Mahasiswa\n";
	cout << "\t\tBy Tama\n";
	cout << "---------------------------------------\n";
}
struct mahasiswa {
	string nama;
	int nim;
	int nilai;
};
int main() {
	mahasiswa mhs[21] = {};
	int i;

	header();

	for (i = 0; i < 21; i++) {
		mahasiswa mhsw;
		cout << "Nama Mahasiswa " << i + 1 << " \t: ";
		cin >> mhsw.nama;
		cout << "Masukan NIM \t\t: ";
		cin >> mhsw.nim;
		cout << "Masukan Nilai Akhir \t: ";
		cin >> mhsw.nilai;
		if (mhsw.nilai >= 90) {
			cout << "Indeks Prestasi \t: A"<<endl<<endl;
		}
		else if (90 < mhsw.nilai <= 80) {
			cout << "Indeks Prestasi \t: B"<<endl<<endl;
		}
		else if (80 < mhsw.nilai <= 70) {
			cout << "Indeks Prestasi \t: C"<<endl<<endl;
		}
		else if (mhsw.nilai < 70) {
			cout<<"Indeks Prestasi \t: D"<<endl<<endl;
		}
	}
}
