// C++ Program starts here
#include <iostream>
using namespace std;
    
    
int main()
{

    int secret=11;
    int guess;

    int counter=1;

    cin>>guess;

while(guess!=secret){

    cin>>guess;

    if(guess>secret){

        cout<<"Your value is too high please try lower value"<<endl;
    }

    else if(guess<secret){

        cout<<"Your value is too low please try higher value"<<endl;
    }

counter++;
}

cout<<"Your guess is correct, You have found the correct number in"<<counter<<"turns"<<endl;


    
     return 0;
    
}