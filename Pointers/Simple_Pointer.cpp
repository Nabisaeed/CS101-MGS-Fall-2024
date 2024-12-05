// C++ Program starts here
#include <iostream>
using namespace std;
    
    
int main()
{
    int a=20; 

    int *ptr;

    ptr=&a;

    int **ptr1;
    ptr1=&ptr;

    cout<<*ptr1<<endl;

    cout<<*(ptr+1)<<endl;
    
     return 0;
    
}