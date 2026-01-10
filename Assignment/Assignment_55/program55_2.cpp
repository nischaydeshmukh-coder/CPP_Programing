#include<iostream>
using namespace std;

template <class T>
T Sub(T no1, T no2)
{
    T Sub = 0;
    Sub = no1 - no2;
    return Sub;
}

int main()
{
    int iRet = Sub(10, 20);
    cout<<"Substraction of integer is :"<<iRet<<"\n";

    float fRet = Sub(10.5f, 20.3f);
    cout<<"Substraction of float is :"<<fRet<<"\n";

    return 0;
}