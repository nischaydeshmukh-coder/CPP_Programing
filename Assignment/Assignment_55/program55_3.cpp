#include<iostream>
using namespace std;

template <class T>
T Div(T no1, T no2)
{
    T Result = 0;
    Result = no1 / no2;
    return Result;
}

int main()
{
    int iRet = Div(10, 20);
    cout<<"Division of integer is :"<<iRet<<"\n";

    float fRet = Div(10.5f, 20.3f);
    cout<<"Division of float is :"<<fRet<<"\n";

    return 0;
}