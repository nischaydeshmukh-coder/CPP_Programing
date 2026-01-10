#include <iostream>
using namespace std;

template <class T>
T SecondMin(T *arr, int iSize)
{
    T min1, min2;

    if(arr[0] < arr[1])
    {
        min1 = arr[0];
        min2 = arr[1];
    }
    else
    {
        min1 = arr[1];
        min2 = arr[0];
    }

    for(int i = 2; i < iSize; i++)
    {
        if(arr[i] < min1)
        {
            min2 = min1;
            min1 = arr[i];
        }
        else if(arr[i] < min2 && arr[i] != min1)
        {
            min2 = arr[i];
        }
    }
    return min2;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50}; 
    
    int iRet = SecondMin(arr, 5); 
    cout << iRet << "\n";   // Output: 20
    
    return 0; 
}
