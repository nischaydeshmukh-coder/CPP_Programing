#include<iostream>
using namespace std;

template <class T>
T Max(T *arr, int iSize)
{
    T iMax = arr[0];
    int iCnt = 0;
    
    for(iCnt = 1; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] > iMax)
        {
            iMax = arr[iCnt];
        }
    }
    return iMax;
}

int main()
{
    int arr[]={10,20,30,40,50}; 
    float brr[] = {10.0,3.7,9.8,8.7};  
    
    int iRet = Max(arr,5); 
    cout<<iRet<<"\n"; // 50 

    float fRet = Max(brr,4); 
    cout<<fRet<<"\n"; // 10.00
    
    return 0; 
}