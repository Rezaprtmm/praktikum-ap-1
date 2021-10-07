#include<iostream>
using namespace std;

int main(){
	cout<<"***** Program Menghitung Gaji Karyawan *****\n";
	cout<<"-------------------------------------------------\n\n";
	string nama;
	int jam_k,gaji,jam_lembur,upah_lembur,total_gaji,lembur;
	char golongan;
	
	cout<<"Masukan Nama \t\t:";
	cin>>nama;
	cout<<"Masukan Golongan  \t:";
	cin>>golongan;
	cout<<"Masukan Jumlah Jam \t:";
	cin>>jam_k;
	
	switch (golongan){
		case '1' :
			gaji=1000000;
			lembur=10000;
			break;
		case '2' :	
			gaji=2000000;
			lembur=20000;
			break;
		case '3' :
			gaji=3000000;
			lembur=30000;
			break;
		case '4' :
			gaji=4000000;
			lembur=40000;
			break;
		case '5' :
			gaji=5000000;
			lembur=50000;
			break;
	}
	{
		if(jam_k<=150){
			total_gaji=jam_k*lembur;
			jam_lembur=jam_k-150;
		}
		else{
			jam_lembur=0;
		}
		upah_lembur=jam_lembur*lembur;
		total_gaji=gaji+upah_lembur;
	}
	cout<<"Gaji Pokok \t\t:Rp. "<<gaji<<endl;
	cout<<"Upah Lembur \t\t:Rp. "<<upah_lembur<<endl;
	cout<<"Total Gaji "<<nama<<" \t\t:Rp. "<<total_gaji<<endl;
}

