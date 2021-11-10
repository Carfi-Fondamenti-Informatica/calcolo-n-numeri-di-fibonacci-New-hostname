#include <iostream>
using namespace std;

int main() {
   
   int n = 0, primo = 1, secondo = 1, somma = 0;
   
   do{
      cin >> n;
   }while(n < 2);
   
   cout << primo << "\n" << secondo << endl;
   
   for(int i = 0; i < n; i++)
   {
      somma = primo + secondo;
      primo = secondo;
      somma = secondo;
      
      cout << "somma" << endl;
      
      i++;
   }
   
   return 0;
}
