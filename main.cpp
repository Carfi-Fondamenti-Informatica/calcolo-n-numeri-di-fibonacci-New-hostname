#include <iostream>
using namespace std;

int main() {
   
   int n = 0, primo = 1, secondo = 1, somma = 0;
   
   cin >> n;
   
   if(n >= 2)
   {
      cout << primo << endl;
      cout << secondo << endl;
   
      for(int i = 0; i < 8; i++)
      {
         somma = primo + secondo;
         primo = secondo;
         secondo = somma;
      
         cout << somma << endl;
      
         i++;
      }
   }
   else
   {
      cout << "errore" << endl;
   }
   
   
   
   return 0;
}
