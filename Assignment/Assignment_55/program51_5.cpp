#include <iostream>
using namespace std;

template <class T>
void Reverse(T Arr[], int iSize)
{
    T temp;
    int start = 0;
    int end = iSize - 1;

    while(start < end)
    {
        temp = Arr[start];
        Arr[start] = Arr[end];
        Arr[end] = temp;

        start++;
        end--;
    }
}

int main() 
{
    int arr[]={10,20,30,10,30,40,10,40,10}; 
    
    cout<<"Original Array :";
    for(int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
    Reverse(arr,9); 

    cout<<"Reversed Array :";
    for(int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}
