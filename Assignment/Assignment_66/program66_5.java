import java.util.Scanner;

class ToggleNibble
{
    public static int toggleFirstLastNibble(int number)
    {
        int mask = 0xF000000F;  
        return number ^ mask;
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number:");
        int no = sobj.nextInt();

        int result = toggleFirstLastNibble(no);

        System.out.println("Modified number: " + result);
    }
}
