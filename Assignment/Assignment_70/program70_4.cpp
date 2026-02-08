
#include<iostream>
using namespace std;

int Fact(int iNo)
{
    static int iFact = 1;
    if(iNo >= 1)
    {
       iFact = iFact * iNo;
       iNo--;
       Fact(iNo);
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : \n";
    cin >> iValue;

    iRet = Fact(iValue);

    cout<<"Fact is : "<<iRet;
    return 0;
}
