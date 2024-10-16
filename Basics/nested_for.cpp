// C++ Program starts here
#include <iostream>
#include <vector>
using namespace std;
    
    
int main()
{
    int row,col;

    cin>>row>>col;

    for(int i=0; i<=row; i++){

        for(int j=0; j<=col; j++){

            cout<<"This is internal loop"<<endl;
        }

        cout<<"This is external loop"<<endl;
    }
    
     return 0;
    
}