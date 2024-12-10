// C++ Program starts here
#include <iostream>
using namespace std;
    
    
int main()
{
    // int arr[100000000000];

    // arr[100]= 112;

    int *ptr= new int[100000000000];

    *(ptr+100)= 112;

    cout<<(ptr+100)<<endl;
     return 0;
    
}