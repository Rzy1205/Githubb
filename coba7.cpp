#include <iostream>
int main() {
	int i = 2; // mulai dari bilangan genap pertama, yaitu 2
	
	do {
		std:: cout << i << " ";
		i+= 2; // melengkapi bilangan genap selanjutnya 	
	}while (i <=1000);
	
	return 0;
}
