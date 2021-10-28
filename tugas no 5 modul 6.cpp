#include<iostream>
using namespace std;

int main(){
	int i,j;
	string huruf[26] = {"A ", "B ", "C ", "D ", "E ", "F ", "G ", "H ", "I ", "J ", "K ", "L ", "M ", "N ", "O ", "P ", "Q ", "R ", "S ", "T ", "U ", "V ", "W ", "X ", "Y ", "Z "};
	
	for(i=0; i<=25; i++){
		for(j=i; j<=25; j++){
			cout<<huruf[j];
		}
		cout<<endl;
	}
}
