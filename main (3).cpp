#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter Age of a user:";
    cin>>age;
    if(age>=18)
    {
        cout<<"\n you are eligible for voting";
    }
    else
    {
        cout<<"\n you are not eligible for voting";
        return 0;
    }
}
    
    

