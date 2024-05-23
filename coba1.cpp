#include <iostream>
using namespace std;
int main() {
   int angka;
   do {
       cout << "Enter a positive number: ";
       cin >> angka;
       if (angka <= 0) {
           cout << "the nummber should be positif.try againi" << endl;
       }
   } while (angka <= 0);
   cout << "You have entered a positif number: " << angka << endl;
   return 0;
}

