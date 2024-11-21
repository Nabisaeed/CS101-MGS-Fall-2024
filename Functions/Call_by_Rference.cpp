// C++ Program starts here
#include <iostream>
using namespace std; 

void fun(int &a){

    a=a+50;

    cout<<a<<endl;


 }

int main()
{

    int b=100;

    fun(b);

    cout<<b<<endl;
    
     return 0;
    
}