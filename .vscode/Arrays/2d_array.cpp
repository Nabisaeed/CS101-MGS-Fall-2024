// C++ Program starts here
#include <iostream>
using namespace std;
    
    
int main()
{
    int arr[3][3]= {{1,2,4},{4,6,2},{1,0,3}};
    int arr1[3][3]= {{2,8,9},{7,4,2},{10,4,3}};

    int arr2[3][3];

    for(int i=0; i<=2; i++){

        for(int j=0; j<=2; j++){

      arr2[i][j]= arr[i][j]+arr1[i][j];

        }
    }
    
    
    for(int i=0; i<=2; i++){

        for(int j=0; j<=2; j++){

            cout<<arr2[i][j]<<" ";
        }

        cout<<endl;
    }

    cout<<endl;
    
     return 0;
    
}