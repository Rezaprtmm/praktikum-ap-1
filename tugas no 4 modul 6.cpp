#include<iostream>
using namespace std;

int main(){
	int a,b,i;
	
	cout<<"Masukan bilangan yang akan difaktorialkan :";
	cin>>a;
	
	b=a;
    cout<<a<<"! = ";
    for(int i=1;i<=b;i++){
        cout<<i;
        if(i==a){
            cout<<" =";
        }else{
            cout<<"*";
        }
    }
    for(int i=1;a>i;){
        a=a-1;
        b=b*a;
    }
    cout<<b;
}

