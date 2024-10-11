// C++ Program starts here
#include <iostream>
#include <vector>
using namespace std;
    
    
int main()
{
    int age;
    bool licesne;

    cin>>age>>licesne;

    if(age>=18){


        if(licesne){

            cout<<"You can drive "<<endl;
        }

        else {

            cout<<"You can't drive without driving license"<<endl;
        }
    }
    else {

        cout<<"You are too small! you can't drive "<<endl;
    }
    
     return 0;
    
}