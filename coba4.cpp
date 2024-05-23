#include <iostream>
using namespace std;
int main() {
   int batasAwal, batasAkhir;
   long long hasilPerkalian = 1;
   cout << "input the minimum limite number: ";
   cin >> batasAwal;
   cout << "input the maximum limite number: ";
   cin >> batasAkhir;
   if (batasAwal > batasAkhir) {
       cout << "the minimum number should not more than the maximum number." << endl;
       return 1;
   }
   for (int i = batasAwal; i <= batasAkhir; i++) {
       hasilPerkalian *= i;
   }
   cout << "multiplication number " << batasAwal << " to " << batasAkhir << " is: " << hasilPerkalian << endl;
   return 0;
}

