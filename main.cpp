#include <iostream>
using namespace std;

int main() {
   
   int n = 0, somma = 0;
   
   cin >> n;
   
   while(n >= 2)
   {
      somma = somma + n;
      cout << somma << endl;
   }
   
   if(n < 2)
   {
      cout << "errore";
   }
     
   return 0;
}
