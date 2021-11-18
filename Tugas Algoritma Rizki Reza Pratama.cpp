#include <iostream>
using namespace std;
void header() {
	cout << "Program Menampilkan Array\n";
	cout << "\tBy Tama\n";
	cout << "--------------------------------\n";
}
int main() {
	string huruf[15] = { "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O" };
	int i, j, k=0, a, b, vk=0, ks=0;
	string temp;
	char pilih, ulang; 

	do {
		header();
		vk = 0; ks = 0;
		cout << "1. Tampilan Array Pertama" << endl;
		cout << "2. Tampilan Array Kedua" << endl;
		cout << "--------------------------------" << endl;
		cout << "Pilih (1,2) : ";  cin >> pilih;

		switch (pilih) {
		case '1' :
			for (i = 0; i < 15; i++)
			{
				temp = huruf[i];
				if (temp == "A" || temp == "I" || temp == "U" || temp == "E" || temp == "O")
				{
					vk++;
				}
				else
				{
					ks++;
				}
				cout << huruf[i];
				cout << " ";
				if ((i + 1) % 5 == 0) 
				{
					cout << endl; 
				}
				}
			cout <<"Huruf Vokal \t: "<< vk << endl;
			cout <<"Huruf Konsonan \t: "<< ks << endl;
			break;
		case '2' : 
				for (i = 0; i < 5; i++)
				{
					for (j = 0; j < 5 - i; j++)
					{
						cout << " ";
					}
					for (j = 0; j < i+1; j++)
					{
						temp = huruf[k];
						if (temp == "A" || temp == "I" || temp == "U" || temp == "E" || temp == "O")
						{
							vk++;
						}
						else
						{
							ks++;
						}
						cout << huruf[k];
						k++;
					}
					cout << endl;
				} 
				cout <<"Huruf Vokal \t: "<< vk << endl;
				cout <<"Huruf Konsonan \t: "<< ks << endl;
			break;
		default : 
			cout << "Pilihan Tidak Ada Dalam Sistem\n";
		}
		cout << "Kembali Ke Menu Utama? [y/n]";
		cin >> ulang; 
	} while (ulang == 'y' || ulang == 'Y');
}

