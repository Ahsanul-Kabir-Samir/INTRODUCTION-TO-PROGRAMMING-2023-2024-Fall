
#include<iostream>
using namespace std;


double add(double x,double y)
{
  return x+y;

}



int add(int x,int y)
{

return x+y;
}


int main()
{
    double a,b;
cout<<"Enter a number: "<<endl;
cin>>a;
cout<<"Enter a number: "<<endl;
cin>>b;
cout<<"Add double: "<<add(a,b)<<endl;
cout<<"Add int: "<<add(a,b)<<endl;

return 0;


}
