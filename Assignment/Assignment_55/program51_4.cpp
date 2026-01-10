#include <iostream>
using namespace std;

template <class T>
int SearchLast(T Arr[], int iSize, T iNo)
{
    int iPos = -1, iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iPos = iCnt + 1;   
        }
    }
    return iPos;
}

int main() 
{
    int arr[]={10,20,30,10,30,40,10,40,10}; 
    int iRet = SearchLast(arr,9,30); 
    cout<<"Last Occurance is :"<<iRet<<"\n"; 
    return 0;
}
