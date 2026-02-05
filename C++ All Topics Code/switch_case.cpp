#include <iostream>
using namespace std;
int main (){

int e=10;
switch(e){  // condition check and evaluated

case 1:
    cout<<"1 is stored in e"<<endl;
    break;
    case 2:
    cout<<"2 is stored in e"<<endl;
    break;
    case 3:
    cout<<"3 is stored in e"<<endl;
    break;
    case 4:
    cout<<"4 is stored in e"<<endl;
    break;
    case 5:
    cout<<"5 is stored in e"<<endl;
    break;
    case 6:
    cout<<"6 is stored in e"<<endl;
    break;
    default:                  // will be executed if e does not match any cases
        cout<<"None of the values match"<<endl;
        break;


}


return 0;
}
