import java.util.Scanner;

class program66_2
{
    public static int OFFBit(int iNo, int iPos)
    {
        int iMask = 0x1;

        iMask = iMask << (iPos - 1);

        iMask = ~iMask;

        iNo = iNo & iMask;

        return iNo;
    }
    public static void main(String args[])
    {
        int no = 0 , pos = 0 ,iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number : ");
        no = sobj.nextInt();

        System.out.println("Enter the Position : ");
        pos = sobj.nextInt();

        iRet = OFFBit(no, pos);

        System.out.println("Updated Number :" +iRet);

    }
}
