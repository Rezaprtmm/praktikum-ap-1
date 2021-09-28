#include <iostream>
using namespace std;

int main() {
	float n1;
	float n2;
	float n3;
    
    cout<<" Menghitung rata-rata nilai Mahasiswa "<<endl;
    cout<<endl;
    
    cout<<"Nilai Tugas \t:";
    cin>>n1;
    
    cout<<"Nilai UTS \t:";
    cin>>n2;
    
    cout<<"Nilai UAS \t:";
    cin>>n3;
    
    cout<<"Rata rata nilai \t:"<<(n1+n2+n3)/3<<endl;
}
