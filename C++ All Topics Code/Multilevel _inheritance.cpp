#include<iostream>
using namespace std;


class GrandParent{
public:

    string name;

    void get_name(string n){
      name=n;

    }

    void put_name(){

    cout<<"Name is : "<<name<<endl;


    }
};

class Parent:public GrandParent{

public:

    int age;


void get_age(int a){

age=a;

}
  void put_age(){

  cout<<"Age is: "<<age<<endl;
  }


};



class Child:public Parent{
public:
      string gender;


      void get_gender(string g){

      gender=g;
      }

      void put_gender(){

      cout<<"The gender is : "<<gender<<endl;
      }

};

int main(){

Child c1;
c1.get_name("ROHIJ ALI");
c1.get_age(80);
c1.get_gender("MALE");


c1.put_name();
c1.put_age();
c1.put_gender();

return 0;
};




