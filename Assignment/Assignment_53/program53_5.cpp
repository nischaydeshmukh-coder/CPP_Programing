#include <iostream>
using namespace std;

template <class T>
void Replace(T *arr, int iSize, T oldval, T newval)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize - 1; iCnt++)
    {
        if(arr[iCnt] == oldval)
        {
            arr[iCnt] = newval ;
        }
    }
    
}

int main()
{
    int arr[] = {10, 20, 10, 40, 50};

    Replace(arr,5,10,11);

    for(int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";

    return 0;
}