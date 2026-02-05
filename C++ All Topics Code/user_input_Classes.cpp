#include<iostream>
using namespace std;


class Student{

   public:


   int id;
   string name;


   void put_details(int i,string n){

    id=i;
    name=n;


   }

   void get_details(){

   cout<<"id is: "<<id<<endl;
   cout<<"Name is: "<<name<<endl;

   }


};

int main()
{

    Student s1;

    int s_id;
    string s_name;


      cout<<"Please Enter your id number: "<<endl;
      cin>>s_id;

      cout<<"Please Enter your name: "<<endl;
      cin>>s_name;
   s1.put_details(s_id,s_name);
   cout<<endl;
   s1.get_details();



return 0;
};

