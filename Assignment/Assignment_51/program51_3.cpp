#include <iostream>
using namespace std;

template <class T>
int SearchFirst(T Arr[], int iSize, T iNo)
{
    int iCount = 1, iCnt = 0;

    for( iCnt = 0; iCnt <= iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCount;
        }
        iCount++;
    }
    return -1;
}

int main() 
{
    int arr[]={10,20,30,10,30,40,10,40,10}; 
    int iRet = SearchFirst(arr,9,30); 
    cout<<"First Occurance is :"<<iRet<<"\n"; 
    return 0;
}
