#include<iostream>
using namespace std;

template <class T>
T Maximum(T no1, T no2, T no3)
{
    
    T iMax = no1;
    
    if(iMax < no2)
    {
        iMax = no2;
    }
    if(no3 > iMax)
    {
        iMax = no3;
    }
    return iMax;
}

int main()
{
    int iRet = Maximum(10,20,90); 
    cout<<"Multiplication of integer :"<<iRet<<"\n";

    return 0;
}