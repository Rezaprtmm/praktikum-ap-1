#include <iostream>
using namespace std;
void header() {
	cout << "Program Array Sorting\n";
	cout << "\tBy Tama\n";
	cout << "----------------------------" << endl;
}

int main() {
	int angka[5] = {};
	int i, temp, j, n;
	char pilih, ulang;

	do {
		header();
		cout << "Menu Sorting\n";
		cout << "1. Isi Array\n";
		cout << "2. Insertion Sort\n";
		cout << "3. Maximum Sort\n";
		cout << "4. Buble Sort\n";
		cout << "5. Keluar\n";
		cout << "Pilih Menu : "; cin >> pilih;

		switch (pilih) {

		case '1':
			cout << "Masukan Indeks Yang di Inginkan : ";
			cin >> n;
			for (i = 0; i < n; i++) {
				cout << "Masukan Indeks Ke " << i + 1 << ": ";
				cin >> angka[i];
			}
			break;
		case '2':
			for (i = 1; i < n; i++)
			{
				temp = angka[i];
				j = i - 1;
				while (j >= 0 && angka[j] > temp)
				{
					angka[j + 1] = angka[j];
					j--;
				}
				angka[j + 1] = temp;
			}
			for (int i = 0; i < n; i++)
			{
				cout << angka[i] << " ";
			}
			break;
		case '3':
			for (i = n; i >= 0; --i)
			{
				int max = 0;
				for (j = 0; j <= i; ++j) {
					if (angka[i] > angka[max])
					{
						max = j;
					}
				}
				temp = angka[i];
				angka[i] = angka[max];
				angka[max] = temp;
			}
			for (int i = 0; i < n; i++)
			{
				cout << angka[i] << " ";
			}
			break;
		case '4':
			for (i = 0; i < n - 1; i++)
			{
				for (j = 0; j < n + 1; j++)
				{
					if (angka[j] > angka[j + 1])
					{
						temp = angka[j + 1];
						angka[j + 1] = angka[j];
						angka[j] = temp;
					}
				}
			}
			for (int i = 0; i < n; i++)
			{
				cout << angka[i] << " ";
			}
			break;
		case '5':
			return 0;
			break;
		default:
			cout << "Pilihan Tidak Ada Dalam Sistem\n";
		}
		cout << "Kembali Ke Menu Utama? [y/n] : ";
		cin >> ulang;
	} while (ulang == 'y' || ulang == 'Y');
}