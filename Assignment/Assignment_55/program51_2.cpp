#include <iostream>
using namespace std;

template <class T>
int Frequency(T Arr[], int iSize, T iNo)
{
    int iCount = 0, iCnt = 0;

    for( iCnt = 0; iCnt <= iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}

int main() 
{
    int arr[]={10,20,30,10,30,40,10,40,10}; 
    int iRet = Frequency(arr,9,10); 
    cout<<"Frequncy is :"<<iRet<<"\n"; 
    return 0;
}
