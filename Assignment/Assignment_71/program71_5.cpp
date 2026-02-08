
#include<iostream>
using namespace std;

int Reverse(int iNo)
{
    static int rev = 0;
    if(iNo >= 1)
    {
        int iDigit = iNo % 10;
        rev = rev*10+iDigit;
        iNo = iNo / 10;
        Reverse(iNo);
    }
    return rev;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number:\n";
    cin>>iValue;

    iRet = Reverse(iValue);

    cout<<"Reverse number are:"<<iRet;
}
