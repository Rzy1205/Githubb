#include<iostream>
using namespace std;
int main(){
	int bilangan;
	//Menerima sebuah dari pengguna
	cout<<"Masukan sebuah bilangan: ";
	cin>>bilangan;
	//mengecek apakah bilangan tersebut ganjil atau tidak
	if(bilangan % 2 != 0){
		cout<<bilangan<<" adalah bilangan ganjil."<<endl;
	}else{
		cout<<bilangan<<" bukan bilangan ganjil."<<endl;	
	}
	return 0;
}

