#include<iostream>
using namespace std;


class Vehicle{  //parent class

 public:

     int mileage=30;
     int cost=5000;

void put_vehicle_details(){

cout<<"I am a vehicle: "<<endl;
cout<<"The mileage of vehicle is : "<<mileage<<endl;
cout<<"the cost of vehicle is: "<<cost<<endl;

}
};



class Car:public Vehicle{  //Child class

public:

    string color="Blue";
    int tyers = 4;

void show_car_details(){

cout<<"Iam a car: "<<endl;
cout<<"The color of the car is : "<<color<<endl;
cout<<"the tyres of the car is : "<<tyers<<endl;

}
};
int main(){

           Car c1;

           c1.put_vehicle_details();
           c1.show_car_details();

return 0;
};

