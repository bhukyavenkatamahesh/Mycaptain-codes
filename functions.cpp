#include<iostream>
using namespace std;

int checkprime(int number) {
   int i;
   int flag=1; 
   
   for(i=2;i<=number/2;i++) {
      if(number%i==0) {
         flag=0;
         break;
      }
   }
   return flag;
}

int main(){
   int i, number;
   cout << "Enter a Positive integer: "<<endl;
   cin >> number;
   
   for(i=2;i<=number/2;i++){
      if (checkprime(i)){
         if (checkprime(number-i)){
            cout<<number<<"="<<i<<"+"<<number-i<<endl;
         }
      }
   }
   return 0;
}
