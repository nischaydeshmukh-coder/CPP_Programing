
import java.util.Scanner;

class program67_2
{
    public static void displayCommonBits(int iNo1, int iNo2)
    {
        int iResult = iNo1 & iNo2;
        int iPos = 1;

        System.out.println("Common ON bit positions are:");

        while (iResult != 0)
        {
            if ((iResult & 1) == 1)
            {
                System.out.println(iPos);
            }
            iResult = iResult >> 1;
            iPos++;
        }
    }

    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first number:");
        int No1 = sobj.nextInt();

        System.out.println("Enter second number:");
        int No2 = sobj.nextInt();

        displayCommonBits(No1, No2);
    }
}
