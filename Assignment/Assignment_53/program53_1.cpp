#include <iostream>
using namespace std;

template <class T>
void CopyArray(T *src, T *dest, int iSize)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        dest[iCnt] = src[iCnt];
    }
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int brr[5];

    CopyArray(arr, brr, 5);

    cout << "Copied array elements:\n";
    for(int i = 0; i < 5; i++)
    {
        cout << brr[i] << " ";
    }

    return 0;
}
