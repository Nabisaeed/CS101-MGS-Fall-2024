// C++ Program starts here
#include <iostream>
#include <vector>
using namespace std;
    
    
int main()
{
    int fact=1;
    int num;

    cout<<"Enter the number "<<endl;
    cin>>num;

    for(int i=1;i<=num;i++){

        fact*=i;
    }

    cout<<"The factorial of the number is "<<fact<<endl;
     return 0;
    
}