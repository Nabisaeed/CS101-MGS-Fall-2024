// C++ Program starts here
#include <iostream>
#include <vector>
using namespace std;
    
    
int main()
{

    int sum=0;
    int num;

    cout<<"Enter the number"<<endl;
    cin>>num;

    for(int i=0; i<=num; i++){

        sum+=i;
    }

    cout<<"The sum of all numbers is "<<sum<<endl;
    
     return 0;
    
}