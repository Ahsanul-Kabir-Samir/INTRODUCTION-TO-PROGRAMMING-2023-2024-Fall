#include<iostream>
using namespace std;
int main()
{
    int a[10];

    cout<<" Enter the value in this array: "<<endl;

    for(int i=0;i<10;i++){

        cin>>a[i];

    }

   cout<<" The value entered by you are: "<<endl;

   for(int i=0;i<10;i++)
    {

    cout<<a[i]<<" ";
   }



    return 0;
}
