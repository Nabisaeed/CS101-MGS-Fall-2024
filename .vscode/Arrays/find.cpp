// C++ Program starts here
#include <iostream>
using namespace std;
    
    void find(int z[], int size, int target){

        for(int i=0; i<=size-1; i++){

            if(z[i]==target){

                cout<<"The value is found at index "<<i<<endl;
            }
        }
    }
    
int main()
{

    int arr[]={12,5,100,56,34};

   find(arr, 5, 56);
    
     return 0;
    
}