
#include<iostream>
using namespace std;

int Strlen(char *str)
{
    static int iCount = 0;
    if(*str != '\0')
    {
       iCount++;
       str++;
       Strlen(str);
    }
    return iCount;
}

int main()
{
    char arr[20];
    int iRet = 0;

    cout<<"Enter the String : \n";
    cin >> arr;

    iRet = Strlen(arr);

    cout<<"Count of letters are : "<<iRet;
    return 0;
}
