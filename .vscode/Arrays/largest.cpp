// C++ Program starts here
#include <iostream>
using namespace std;
    
    int largest(int z[], int size){

        int largest=z[0];

        for(int i=0; i<=size-1; i++){

            if(z[i]>largest){

                largest=z[i];
            }
        }

        return largest;
    }
    
int main()
{

    int arr[]={12,5,100,56,34};

  cout<<"The largest value found is "<< largest(arr, 5)<<endl;
    
     return 0;
    
}