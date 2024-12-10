// C++ Program starts here
#include <iostream>
using namespace std;

void swap(int *p1, int *p2){

    int temp;

    temp=*p1;
    *p1=*p2;
    *p2=temp;

}
    
    
int main()
{
    int a=10, b=20;

cout<<"The value of a is "<<a<<endl;
cout<<"The value of b is "<<b<<endl;
    swap(&a,&b);

cout<<"The value of a is "<<a<<endl;
cout<<"The value of b is "<<b<<endl;
    
     return 0;
    
}