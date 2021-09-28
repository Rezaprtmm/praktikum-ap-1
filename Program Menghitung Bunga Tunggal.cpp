#include<iostream>
using namespace std;

int main(){

	double n1,n2,n3;
	char pilih,ulang;
	
	do{
		cout<<"---------------------------------------\n";
		cout<<"Program Menghitung Bunga Tunggal\n\n";
		cout<<"1. Bunga Tunggal Pertahun\n";
		cout<<"2. Bunga Tunggal Persemester\n";
		cout<<"pilih(1,2) : ";cin>>pilih;
		cout<<"---------------------------------------\n";
		switch(pilih){
			case '1' :
			cout<<"***** Bunga Tunggal Pertahun *****\n";
			cout<<"Masukan Tabungan Akhir \t:";
			cin>>n1;
			cout<<"Masukan Bunga/tahun (%)\t:";
			cin>>n2;
			cout<<"Masukan Lama Menabung \t:";
			cin>>n3;
			cout<<fixed<<"Tabungan Awal \t\t:"<<1/(1+(n2/100)*1+(n2/100)*1+(n2/100))*n1;
			break;
			case '2' :
			cout<<"***** Bunga Tunggal Persemester *****\n";
			cout<<"Masukan Tabungan akhir \t:";
			cin>>n1;
			cout<<"Masukan Bunga/semester (%):";
			cin>>n2;
			cout<<"Masukan Lama Menabung \t:";
			cin>>n3;
			cout<<fixed<<"tabungan awal \t\t:"<<1/(1+(n2/100/2)*1+(n2/100/2)*1+(n2/100/2)*1+(n2/100/2)*1+(n2/100/2)*1+(n2/100/2))*n1;
			break;
		default : 
			cout<<"pilihan anda tidak ada dalam sistem\n";
		}
		cout<<"\n\nKembali Ke Menu Utama? (y/n) :";
		cin>>ulang;	
	}
	while(ulang=='y'||ulang=='Y');
}
