#include <iostream>
using namespace std;

int main() {
   
   int n = 0, somma = 0, risultato = 0;
   
   cin >> n;
   
   while(n >= 2 && risultato <= 8)
   {
      risultato = somma + n;
      somma = n;
      n = risultato;
      
      cout << risultato << endl;
   }
   
   if(n < 2)
   {
      cout << "errore";
   }
     
   return 0;
}
