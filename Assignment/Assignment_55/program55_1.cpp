#include<iostream>
using namespace std;

template <class T>
T Add(T no1, T no2)
{
    T Sum = 0;
    Sum = no1 + no2;
    return Sum;
}

int main()
{
    int iRet = Add(10, 20);
    cout<<"Addititon of integer is :"<<iRet<<"\n";

    float fRet = Add(10.5f, 20.3f);
    cout<<"Addititon of Float is :"<<fRet<<"\n";

    return 0;
}