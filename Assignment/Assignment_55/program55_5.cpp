#include<iostream>
using namespace std;

template <class T>
T Max(T a ,T b, T c, T d)
{
    T iMax;
    if(a > b )
    {
        a =iMax;
    }
    else if(b > c)
    {
        iMax = b;
    }
    else if(c > d)
    {
        iMax = c;
    }
    else
    {
        iMax = d;
    }
    return iMax;
}

int main()
{
    
    int iRet = Max(32,45,67,85); 
    cout<<iRet<<"\n";  

    
    return 0; 
}