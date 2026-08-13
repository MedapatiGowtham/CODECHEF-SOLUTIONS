import java.util.Scanner;
class Chef
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0)
        {
            int x = sc.nextInt();
            int count = 0;
            if(x%10==0)
            {
                System.out.println(x/10);
            }
            else if(x%5==0)
            {
                System.out.println((x/10)+1);
            }
            else
            {
                System.out.println(-1);
            }
        }
    }
}
