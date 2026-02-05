#include<iostream>
#include<string>
using namespace std;
int main()
{

   string s1="AHSANUL KABIR";

   string *p=&s1;


   cout<<"the value in variable: "<<s1<<endl;

    cout<<"The address of variable: "<<&s1<<endl;

    cout<<"The address of variable: "<<p<<endl;

    return 0;
}
