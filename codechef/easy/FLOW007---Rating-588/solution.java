import java.util.Scanner;
class Chef
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0)
        {
            int n = sc.nextInt();
            int reversedNumber = 0;
            while(n>0)
            {
                int rem = n%10;
                reversedNumber = reversedNumber*10+rem;
                n = n/10;
            }
            System.out.println(reversedNumber);
        }
    }
}