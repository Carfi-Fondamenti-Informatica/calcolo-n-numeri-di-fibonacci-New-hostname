#include <iostream>
using namespace std;

int main() {
   
   int n = 0, somma = 0;
   
   cin >> n;
   
   do{
      if(n >= 2)
      {
         somma = somma + n;
         cout << somma << endl;
      }
      else
      {
         cout << "errore";
      }
   }while(somma <= 20);
     
   return 0;
}
