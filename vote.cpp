#include<iostream>
using namespace std;
int main()
     {
       
       int age;
       cout<<"enter your age:";
       cin>>age;
       if(age>=18)
       {
       cout<<"you are eligible for voting"<<endl;
       }
       else
       {
       cout<<"you are non-eligible for voting:  ";
       cout<<"wait for   "<<18-age<<"   year's:";
       }
       return 0;
       }
