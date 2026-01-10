#include<iostream>

using namespace std;

template <class T>
T SecondMax(T *arr, int iSize)
{
    T max1 = arr[0];
    T max2 = arr[0];

    for(int i = 1; i < iSize; i++)
    {
        if(arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] != max1)
        {
            max2 = arr[i];
        }
    }
    return max2;
}

int main()
{
    int arr[]={10,20,30,40,50}; 
    
    int iRet = SecondMax(arr,5); 
    cout<<iRet<<"\n"; 
    
    return 0; 
}