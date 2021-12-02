#include <iostream>
using namespace std;

void header() {
	cout << "Program Mengolah Nilai Mahasiswa\n";
	cout << "\t\tBy Tama\n";
	cout << "---------------------------------------\n";
}
struct mahasiswa {
	string nama, nim;
	int nilai;
};
/*float nilai_tertinggi ( int jml, mahasiswa mhs[]){
	int max = 0;
	int min = 0;
	for (int i = 0; i < jml; i++){
		if (max < mhs[i].nilai){
			max = mhs[i].nilai;
		}
		else{
			min = mhs[i].nilai;
		}
	}
	cout<<max;
	cout<<min;
}*/
int main() {
	const int jml_mhs = 21;
	mahasiswa mhs[jml_mhs];
	int i, besar = 0, kecil = 0;

	header();

	for (i = 0; i < jml_mhs; i++) {
		cout << "Nama Mahasiswa " << i + 1 << " \t: ";
		cin >> mhs[i].nama;
		cout << "Masukan NIM \t\t: ";
		cin >> mhs[i].nim;
		cout << "Masukan Nilai Akhir \t: ";
		cin >> mhs[i].nilai;
		if (mhs[i].nilai >= 90) {
			cout << "Indeks Prestasi \t: A" << endl << endl;
		}
		else if (mhs[i].nilai >= 80) {
			cout << "Indeks Prestasi \t: B" << endl << endl;
		}
		else if (mhs[i].nilai >= 70) {
			cout << "Indeks Prestasi \t: C" << endl << endl;
		}
		else {
			cout << "Indeks Prestasi \t: D" << endl << endl;
		}
	}
	for (i = 0; i < jml_mhs; i++) {
		if (mhs[i].nilai > besar) {
			besar = mhs[i].nilai;
		}
		else {
			kecil = mhs[i].nilai;
		}

	}
	cout << "Nilai Tertinggi : " << besar << endl;
	cout << "Nilai Terkecil : " << kecil;

}