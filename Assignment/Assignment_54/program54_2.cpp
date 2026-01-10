#include<iostream>

using namespace std;

template <class T>

T SumEven(T *arr, int iSize)
{
    int iCnt = 0 , iCount = 0 ;

    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        if(arr[iCnt] % 2 == 0)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int arr[] = {11,20,30,40,50};

    int iRet = SumEven(arr, 5);
    cout<<iRet<<"\n";

    return 0;
}