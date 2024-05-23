#include <iostream>

int main() {
   int bilangan = 1;
   
   do {
       std::cout << "Ini adalah iterasi ke-" << bilangan << std::endl;
bilangan++;
   } while (bilangan <= 5);

    return 0;
}

