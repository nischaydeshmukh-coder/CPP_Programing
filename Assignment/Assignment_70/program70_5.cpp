
#include<iostream>
using namespace std;

int Mult(int iNo)
{
    static int iMult = 1;
    if(iNo >= 1)
    {
        int iDigit = iNo%10;
        iNo = iNo/10;
        iMult = iMult * iDigit;
        Mult(iNo);
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : \n";
    cin >> iValue;

    iRet = Mult(iValue);

    cout<<"Multiplication of digits is: "<<iRet;
    return 0;
}
