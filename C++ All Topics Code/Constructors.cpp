#include<iostream>
using namespace std;

class MyClass{
public:
int a;
int b;


MyClass(int x,int y){
     a=x;
     b=y;
}


void print(){
    cout<<"a is: "<<a<<endl;
    cout<<"b is: "<<b<<endl;

}

};

int main(){


MyClass m1(10,20);

m1.print();



return 0;

};
