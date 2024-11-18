// C++ Program starts here
#include <iostream>
#include <vector>
using namespace std;
    
    int add(int x, int y, int z);
    int add(int x, char y, int z);
int main()
{
   cout<< add(100, 'A', 200)<<endl;
     return 0;
    
}

int add(int x, int y, int z){

    return x+y+z;


}

int add(int x, char y, int z){

    return x+y+z;


}