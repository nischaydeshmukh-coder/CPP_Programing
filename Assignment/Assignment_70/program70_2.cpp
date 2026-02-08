
#include<iostream>
using namespace std;

int Sum(int iNo)
{
    static int iSum = 0;
    if(iNo >= 1)
    {
        int iDigit = iNo%10;
        iNo = iNo/10;
        iSum = iSum + iDigit;
        Sum(iNo);
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : \n";
    cin >> iValue;

    iRet = Sum(iValue);

    cout<<"Sum is : "<<iRet;
    return 0;
}
