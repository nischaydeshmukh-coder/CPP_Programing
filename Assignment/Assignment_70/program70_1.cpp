#include<iostream>
using namespace std;

void Display(int iNo)
{
    if(iNo >= 1)
    {
        cout<<iNo<<"\t"<<"*\t";
        iNo--;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter the number : \n";
    cin >> iValue;

    Display(iValue);
    return 0;
}