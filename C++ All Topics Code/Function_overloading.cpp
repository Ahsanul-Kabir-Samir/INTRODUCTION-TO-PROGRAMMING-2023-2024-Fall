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

cout<<"Add double: "<<add(10.1,20.2)<<endl;
cout<<"Add int: "<<add(10,20)<<endl;

return 0;


}
