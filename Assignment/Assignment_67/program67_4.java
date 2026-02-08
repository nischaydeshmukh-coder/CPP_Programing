import java.util.Scanner;

class program67_4
{
    public static boolean CheckBit(int iNo, int iPos1, int iPos2)
    {
        int iMask = 0,iMask1 = 0, iMask2 = 0;
        iMask1 = iMask1 << (iPos1 - 1);
        iMask2 = iMask2 << (iPos2 - 1);

        iMask = iMask1 | iMask2;

        if ((iNo & iMask) != 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number:");
        int No = sobj.nextInt();

        System.out.println("Enter first position:");
        int Pos1 = sobj.nextInt();

        System.out.println("Enter second position:");
        int Pos2 = sobj.nextInt();

        boolean bRet = CheckBit(No, Pos1, Pos2);

        if(bRet == true)
        {
            System.out.println("Bits are ON");
        }
        else
        {
            System.out.println("Bits are OFF");
        }
    }
}
