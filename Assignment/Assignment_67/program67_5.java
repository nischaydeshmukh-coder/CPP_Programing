import java.util.Scanner;

class program67_5
{
    public static int ToggleRange(int iNo, int iStart, int iEnd)
    {
        int iMask = 0;

        for (int i = iStart; i <= iEnd; i++)
        {
            iMask = iMask | (1 << (i - 1));
        }

        return iNo ^ iMask;
    }

    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number:");
        int No = sobj.nextInt();

        System.out.println("Enter start position:");
        int Start = sobj.nextInt();

        System.out.println("Enter end position:");
        int End = sobj.nextInt();

        int iRet = ToggleRange(No, Start, End);

        System.out.println("Updated number: " + iRet);
    }
}
