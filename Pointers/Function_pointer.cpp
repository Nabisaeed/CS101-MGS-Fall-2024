// C++ Program starts here
#include <iostream>
using namespace std;

void add(int a, int b){

    cout<<a+b<<endl;
}

void fun(void (*ptr)(int, int)){

    ptr(100,200);
}
    
    
int main()
{
    void (*p1) (int, int);
    p1=add;

    
fun(p1);
    
     return 0;
    
}