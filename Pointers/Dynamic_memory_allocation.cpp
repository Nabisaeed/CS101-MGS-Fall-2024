// C++ Program starts here
#include <iostream>
using namespace std;
    
    
int main()
{
    int a=100;

    int *ptr= new int;

    *ptr=100;

   

 delete ptr;
    
cout<<*ptr<<endl;
     
     return 0;
    
}