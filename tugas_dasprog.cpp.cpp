#include <iostream>

using namespace std;

int main()
{
   float angka1, angka2, hasil;
   char operasi;

   cout << "angka1    =";
   cin >> angka1;
   cout << "angka2    =";
   cin >> angka2;
   cout << "operator  =";
   cin >> operasi;

   // Penjumlahan
   if (operasi == '+'){
    hasil = angka1 + angka2;
   }
   // Pengurangan
   else if (operasi == '-'){
        hasil = angka1 - angka2;
   }
   // Perkalian
   else if (operasi == '*'){
        hasil = angka1  * angka2;
   }
   cout << "\n";
   cout << "hasil     = " << hasil << endl;
   return 0;
}
