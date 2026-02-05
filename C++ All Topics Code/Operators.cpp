#include<iostream>
using namespace std;
int main ()
{

int a,b,c=0;
cout<<"Enter first number: "<<endl;
cin>>a;
cout<<"Enter second number: "<<endl;
cin>>b;

cout<<"unary operatrion(number++)and(++number): "<<++a<<" "<<b++<<endl;
cout<<"binary operation (number+number): "<<a+b<<" "<<endl;
cout<<"ternary operation: "<<((a>b)?a:b)<<" "<<endl;
cout<<"Relational operator: "<<(a<b)<<endl;
cout<<"Logical operation : "<<(true&&false)<<" "<<(true&&true)<<" "<<(true||false)<<endl;
cout<<"Assignment operation: sum : c= "<<(c+=a)<<endl;



return 0;

}


