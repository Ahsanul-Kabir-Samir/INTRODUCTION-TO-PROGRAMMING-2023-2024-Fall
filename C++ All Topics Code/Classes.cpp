#include<iostream>
using namespace std;


class Student{

   public:


   int id;
   string name;


   void get_details(){

   cout<<"id is: "<<id<<endl;
   cout<<"Name is: "<<name<<endl;

   }


};

int main()
{

    Student s1;


    s1.id=1;
    s1.name="AHSANUL KABIR";

   s1.get_details();



return 0;
};
