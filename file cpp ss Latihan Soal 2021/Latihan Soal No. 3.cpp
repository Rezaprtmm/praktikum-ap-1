#include <iostream>
using namespace std;

void header() {
	cout << "Program Mengolah Nilai Mahasiswa\n";
	cout << "\t\tBy Tama\n";
	cout << "---------------------------------------\n";
}
void nilai(int nilai_uts, int nilai_tugas, int nilai_uas) {
	float rerata = (nilai_uts * 03 + nilai_tugas * 0.3 + nilai_uas * 0.4) / 3;
	cout << "Nilai Akhir \t\t: " << rerata << endl;
	if (rerata >= 90) {
		cout << "Indeks Nilai Anda \t: A" << endl;
		cout << "Anda Dinyatakan Lulus" << endl<<endl;
	}
	else if (rerata >= 80) {
		cout << "Indeks Nilai Anda \t: B" << endl;
		cout << "Anda Dinyatakan Lulus" << endl<<endl;
	}
	else if (rerata >= 70) {
		cout << "Indeks Nilai Anda \t: C" << endl;
		cout << "Anda Dinyatakan Lulus" << endl<<endl;
	}
	else if (rerata >= 60) {
		cout << "Indeks Nilai Anda \t: D" << endl;
		cout << "Anda Dinyatakan Tidak Lulus" << endl<<endl;
	}
	else {
		cout << "Indeks Nilai Anda \t: E" << endl;
		cout << "Anda Dinyatakan Tidak Lulus" << endl<<endl;
	}
}
struct mahasiswa {
	string nama, nim;
	int uts, tugas, uas;
};

int main() {
	const int jml_mhs = 3;
	mahasiswa mhs[jml_mhs];
	int i;

	header();

	for (i = 0; i < jml_mhs; i++) {
		cout << "Nama Mahasiswa " << i + 1 << " \t: ";
		cin >> mhs[i].nama;
		cout << "Masukan NIM \t\t: ";
		cin >> mhs[i].nim;
		cout << "Masukan Nilai UTS \t: ";
		cin >> mhs[i].uts;
		cout << "Masukan Nilai Tugas \t: ";
		cin >> mhs[i].tugas;
		cout << "Masukan Nilai UAS \t: ";
		cin >> mhs[i].uas;
		nilai(mhs[i].uts, mhs[i].tugas, mhs[i].uas);
	}
	return 0;

}