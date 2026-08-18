import java.util.Scanner;
import java.util.HashSet;
class Chef
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0)
        {
            int n = sc.nextInt();
            HashSet<Integer> hs = new HashSet<>();
            for(int i = 0;i < n;i++)
            {
                int value = sc.nextInt();
                hs.add(value);
            }
            System.out.println(hs.size());
        }
    }
}