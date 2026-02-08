
#include<iostream>
using namespace std;

int Max(int iNo)
{
    static int iMax = 0;
    if(iNo >= 1)
    {
        int iDigit = iNo % 10;
        if(iMax < iDigit)
        {
            iMax = iDigit;
        }
        iNo = iNo / 10;
        Max(iNo);
    }
    return iMax;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number:\n";
    cin>>iValue;

    iRet = Max(iValue);

    cout<<"Max digit are:"<<iRet;
}
