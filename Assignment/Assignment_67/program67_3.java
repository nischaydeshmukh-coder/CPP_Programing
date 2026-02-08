import java.util.Scanner;

class program67_3
{
    // Helper function
    public static boolean CheckBits(int iNo)
    {
        int iMask = (1 << 8) | (1 << 11);
        iNo = iNo & iMask;

        if (iNo == iMask)
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

        boolean bRet = CheckBits(No);

        if (bRet == true)
        {
            System.out.println("9th and 12th bits are ON");
        }
        else
        {
            System.out.println("9th and/or 12th bit is OFF");
        }
    }
}
