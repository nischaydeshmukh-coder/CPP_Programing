#include<iostream>

using namespace std;

template <class T>

bool Search(T *arr, int iSize, T value)
{
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(arr[iCnt] == value)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[] = {10,20,30,40,50};

    int no = 10;

    if(Search(arr, 5 , no))
    {
        cout<<"Element Found in the array\n";
    }
    else
    {
        cout<<"Element not Found in the array\n";
    }
    return 0;
}