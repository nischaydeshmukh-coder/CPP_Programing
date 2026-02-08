import java.util.Scanner;

class CheckBit
{
    public static boolean isBitOn(int iNo, int iPos)
    {
        int mask = 1 << (iPos - 1);

        if ((iNo & mask) != 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number:");
        int no = sobj.nextInt();

        System.out.println("Enter bit position:");
        int pos = sobj.nextInt();

        boolean result = isBitOn(no, pos);

        System.out.println("Bit at position " + pos + " is ON: " + result);
    }
}
