import java.util.Scanner;
import java.util.TreeSet;
class Chef
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0)
        {
            int n = sc.nextInt();
            TreeSet<Integer> al = new TreeSet<>();
            for(int i=0; i<n; i++)
            {
                int value = sc.nextInt();
                al.add(value);
            }
            System.out.println(al.last());
        }
    }
}