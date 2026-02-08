import java.util.Scanner;

class program66_3
{
    public static int ONNBit(int iNo, int iPos)
    {
        int iMask = 0x1;
        
        iMask = iMask << (iPos - 1);

        iNo = iNo | iMask;

        return iNo;
    }
    public static void main(String args[])
    {
        int No = 0, Pos = 0, iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number : ");
        No = sobj.nextInt();

        System.out.println("Enter the Position : ");
        Pos = sobj.nextInt();

        iRet = ONNBit(No, Pos);

        System.out.println("Updated Number : " +iRet);

    }
}
