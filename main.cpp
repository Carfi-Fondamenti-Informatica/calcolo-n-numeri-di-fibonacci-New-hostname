#include <iostream>
using namespace std;

int main() {
   
   int n = 0, somma = 0;
   
   cin >> n;
   
   if(n >= 2)
   {
      do{
         somma = somma + n;
         
         cout << somma << endl;
      }while(somma <= 20);
   }
   else
   {
      cout << "errore";
   }
      
   return 0;
}
