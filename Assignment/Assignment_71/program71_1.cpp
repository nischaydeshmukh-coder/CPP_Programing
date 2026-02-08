
#include<iostream>
using namespace std;

int WhiteSpace(char *str)
{

    static int iCount = 0;
    if(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
            str++;
        }
        str++;
        WhiteSpace(str);
    }
    return iCount;
}

int main()
{
    char arr[20];
    int iRet = 0;

    cout<<"Enter the string:\n";
    cin.getline(arr, 20);

    iRet = WhiteSpace(arr);

    cout<<"Count of White Space are:"<<iRet;
}
