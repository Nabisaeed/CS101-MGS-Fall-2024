// C++ Program starts here
#include <iostream>
using namespace std;
    
    
int main()
{

    int num;

    cin>>num;

    cout<<"The table of the number is"<<endl;

do {

    int i=1;

    do {

        cout<<i<<" *  "<<num<<" = "<<i*num<<endl;

        i++;


    } while(i<=15);


    num++;

} while(num<=15);

    
     return 0;
    
}