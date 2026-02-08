#include<iostream>
using namespace std;

int Min(int iNo)
{
    static int iMin = 9;
    if(iNo >= 1)
    {
        int iDigit = iNo % 10;
        if(iMin > iDigit)
        {
            iMin = iDigit;
        }
        iNo = iNo / 10;
        Min(iNo);
    }
    return iMin;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number:\n";
    cin>>iValue;

    iRet = Min(iValue);

    cout<<"Min digit are:"<<iRet;
}