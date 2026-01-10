#include<iostream>
using namespace std;

template <class T>
T Min(T *arr, int iSize)
{
    T iMin = arr[0];
    int iCnt = 0;
    
    for(iCnt = 1; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] < iMin)
        {
            iMin = arr[iCnt];
        }
    }
    return iMin;
}

int main()
{
    int arr[]={10,20,30,40,50}; 
    float brr[] = {10.0,3.7,9.8,8.7};  
    
    int iRet = Min(arr,5); 
    cout<<iRet<<"\n";  
    
    return 0; 
}