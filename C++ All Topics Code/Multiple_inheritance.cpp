#include<iostream>
using namespace std;

class Parent1{

public:

    void par1(){

    cout<<"This is parent 1 "<<endl;

    }

};

class Parent2{

public:

    void par2(){

    cout<<"This is parent 2"<<endl;

    }

};

class Child:public Parent1,public Parent2{

public:

    void show_child(){

cout<<"I am a child"<<endl;



    }

};



int main(){

Child c;



c.par1();
c.par2();
c.show_child();

return 0;
};
