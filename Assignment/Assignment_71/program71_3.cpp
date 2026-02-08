#include<iostream>
using namespace std;

int Small(char *str)
{
    static int iCount = 0;
    if(*str != '\0')
    {
        if(*str <= 'z' & *str >= 'a')
        {
            iCount++;
        }
        str++;
        Small(str);
    }
    return iCount;
}

int main()
{
    char arr[20];
    int iRet = 0;

    cout<<"Enter the string:\n";
    cin.getline(arr, 20);

    iRet = Small(arr);

    cout<<"Count of small characters are:"<<iRet;
}