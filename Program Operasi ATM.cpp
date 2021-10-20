#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

void header(){
	cout<<"\t\t____________________________________\n\n";
	cout<<"=======================SELAMAT DATANG DI BAKRUT=====================\n";
	cout<<"==============================BY PRATAMA==============================\n";
	cout<<"===============================121103021=============================\n";
	cout<<"\t\t____________________________________\n\n";
}
void footer(){
	cout<<"\n=============TERIMAKASIH TELAH BERTRANSAKSI DI BANKRUT=============\n";
	cout<<"==============================BY PRATAMA==============================\n";
	cout<<"===============================121103021=============================\n";
}
int main(){
	string pin;
	char salahpin;
	char ulang = 'Y';
	do{
	header();
	cout<<"Masukan Pin Anda ";cin>>pin;
	system("cls");
	if(pin!="121103021")
	{
		cout<<"Pin Yang Anda Masukan Salah\n";
		cout<<"Masukan Pin Ulang [Y/N]";cin>>ulang;
		salahpin='3';
		system("cls");
	}
	else
	{
		int saldo = 4500000;
		int pilihan = ulang;
		int setor = 0;
		int tarik = 0;
		char ulang = 'y';
		do {
			setor=0;
			tarik=0;
			salahpin='0';
			header();
			cout<<"\t\t____________________________________\n\n";
			cout<<"\t<-1 Setor Tunai			Cek Saldo->3\n";
			cout<<"\t<-2 Tarik Tunai			   Keluar->4\n";
			cout<<"\t\t____________________________________\n\n";
			cout<<"Masukan Pilihan "; cin>>pilihan;
			system("cls");
			cout<<endl;
			switch (pilihan){
				case 1 :
				header();
				cout<<"\t\t____________________________________\n\n";
				cout<<"Masukan Uang Anda :";cin>>setor;
				cout<<endl;
				saldo+=setor;
				cout<<"Sisa Saldo Anda Rp. "<<saldo<<endl;
				footer();
				cout<<"\t\t____________________________________\n\n";
				cout<<"Ada Transaksi Lain [y/n]";cin>>ulang;
				system ("cls");
				break;
				case 2 :
				header();
				cout<<"\t\t____________________________________\n\n";
				cout<<"Masukan Nominal Penarikan :";cin>>tarik;
				cout<<endl;
				if(tarik>saldo){
					cout<<"Jumlah Saldo Anda Tidak Mencukupi";
					cout<<"Ada Transaksi Lain [y\n]";cin>>ulang;
					system("cls");
				}
				else
				{
					cout<<"Proses Penarikan Berhasil"<<endl;
					saldo-=tarik;
					cout<<"Sisa Saldo Anda Rp. "<<saldo;
					cout<<endl;
					footer();
					cout<<"\t\t____________________________________\n\n";
					cout<<"Ada Transaksi Lain [y/n]";cin>>ulang;
					cout<<endl;
					system("cls");
				}
				break;
				case 3 :
				header();
				cout<<"\t\t____________________________________\n\n";
				cout<<"Jumlah Saldo Anda Rp. "<<saldo<<endl<<endl;
				footer();
				cout<<"\t\t____________________________________\n\n";
				cout<<"Ada Transaksi Lain [y/n]";cin>>ulang;
				cout<<endl;
				system("cls");
				break;
				case 4 :
				ulang='n';
				break;
				default :
				cout<<"Pilihan Tidak Ada Dalam Sistem\n\n";
				cout<<"Ada Transaksi Lain [y/n]";cin>>ulang;
				cout<<endl;
				system("cls");
			}
			cout<<ulang<<endl<<salahpin;
			if(ulang=='N')ulang='n';
		}while ((ulang!='n'));
	}
}	while(salahpin!='0');
	system("cls");
}
