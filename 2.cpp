#include<iostream>
using namespace std;
int main(){
	int bilangan1, bilangan2;
	//Menerima masukan dari pengguna
	cout<<"Masukan bilangan pertama: ";
	cin>>bilangan1;
	cout<<"Masukan bilangan kedua: ";
	cin>>bilangan2;
	//memeriksa syarat dengan menggunakan percabangan if
	if(bilangan1 >= 3 && bilangan2 >= 4){
		cout<<"Syarat terpenuhi."<<endl;
	}else{
		cout<<"Syarat tidak terpenuhi."<<endl;
	}
	return 0;
}

