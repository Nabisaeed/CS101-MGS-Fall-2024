// C++ Program starts here
#include <iostream>
#include <vector>
using namespace std;
    
    
int main()
{
    int grade;
    cin>>grade;

    if(grade>=90){

        cout<<"Well Done! you have done a great job"<<endl;
    }

    else if(grade>=80 && grade<90){

        cout<<"Well Done! you have done a good job"<<endl;
    }

    else if(grade>=70 && grade<80){

        cout<<"Well Done! you have done a fair job"<<endl;
    }

    else if(grade>=60 && grade<70){

        cout<<"Well Done! you have just passed"<<endl;
    }

    else {

        cout<<"You are failled "<<endl;
    }
     return 0;
    
}