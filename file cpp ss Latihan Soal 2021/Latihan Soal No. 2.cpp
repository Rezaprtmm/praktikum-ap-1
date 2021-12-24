#include <iostream>

using namespace std;

int main() {
	string nama_karyawan;
	float jam_masuk = 08.00;
	float jam_keluar = 17.00;
	float jam_istirahat = 13.00 - 12.00;
	float tarif_lembur = /*Rp*/30000;
	float gaji_pokok = 200000 / 8 /*jam*/;
	float waktu_wajib_kerja = jam_keluar - jam_masuk - jam_istirahat;
	float total_gaji;
	float gaji_honor;
	float gaji_lembur;

	/*data karyawan*/
	struct karyawan {
		string nama_karyawan;
		float jam_kerja;
		float jam_masuk;
		float jam_keluar;
		float jumlah_hari_masuk;
		float total_kerja;
		float jam_lembur;
	};
	karyawan kry;

	cout << "Nama Karyawan \t\t: ";
	cin >> kry.nama_karyawan;
	cout << "Jam Masuk \t\t: ";
	cin >> kry.jam_masuk;
	cout << "Jam Keluar \t\t: ";
	cin >> kry.jam_keluar;
	kry.jam_kerja = kry.jam_keluar - kry.jam_masuk - jam_istirahat;
	cout << "Jam Kerja \t\t: " << kry.jam_kerja << endl;
	cout << "Jumlah Hari Masuk \t: ";
	cin >> kry.jumlah_hari_masuk;
	kry.total_kerja = kry.jam_kerja * kry.jumlah_hari_masuk;
	cout << "Total Hari Kerja \t: " << kry.total_kerja << endl;
	if (kry.total_kerja > 48) {
		kry.jam_lembur = kry.total_kerja - (waktu_wajib_kerja * 6);
		cout << "Total Jam Lembur \t: " << kry.jam_lembur << endl;
		gaji_honor = kry.total_kerja * gaji_pokok;
		cout << "Gaji Honor \t\t: " << fixed << gaji_honor << endl;
		gaji_lembur = kry.jam_lembur * tarif_lembur;
		cout << "Gaji Lembur \t\t: " << gaji_lembur << endl;
		total_gaji = gaji_honor + gaji_lembur;
		cout << "Total Gaji \t\t: " << fixed << total_gaji << endl;
	}
	else {
		kry.jam_lembur = kry.total_kerja - (waktu_wajib_kerja * 6);
		cout << "Total Jam Lembur \t: " << kry.jam_lembur << endl;
		gaji_honor = kry.total_kerja * gaji_pokok;
		cout << "Gaji Honor \t\t: " << fixed << gaji_honor;
	}

}