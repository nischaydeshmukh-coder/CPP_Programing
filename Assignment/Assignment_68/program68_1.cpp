#include<iostream>
using namespace std;

void Display(int iNo)
{
    static int i = 1;
    
    if(i <= iNo)
    {
        i++;
        Display(iNo);
        cout<<"*"<<"\t";
    }
}

int main()
{
    Display(5);

    return 0;
}