// C++ Program starts here
#include <iostream>
using namespace std;
    
    
int main()
{

    int arr[5]= {20, 21,12,56,11};

    int *ptr=arr;

    for( int i=0; i<=4; i++){

cout<<*(ptr+i)<<endl;
    }

    
    
     return 0;
    
}