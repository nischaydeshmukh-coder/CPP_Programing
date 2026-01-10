#include <iostream>
using namespace std;

template <class T>
bool CheckSorted(T *arr, int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize - 1; iCnt++)
    {
        if(arr[iCnt] > arr[iCnt + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[] = {10, 60, 30, 40, 50};

    if(CheckSorted(arr, 5))
    {
        cout << "Array is sorted\n";
    }
    else
    {
        cout << "Array is not sorted\n";
    }

    return 0;
}
