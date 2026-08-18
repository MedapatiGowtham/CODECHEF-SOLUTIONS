import java.util.Scanner;
import java.util.ArrayList;
import java.util.HashMap;
class Chef
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0)
        {
            int n = sc.nextInt();
            ArrayList<Integer> al = new ArrayList<>();
            for(int i = 0;i < n;i++)
            {
                int value = sc.nextInt();
                al.add(value);
            }
            HashMap<Integer, Integer> hs = new HashMap<>();
            for(int x: al)
            {
                hs.put(x, hs.getOrDefault(x, 0)+1);
            }
            int maxFrequency = 0;
            for(int freq:hs.values())
            {
                if(freq > maxFrequency)
                {
                    maxFrequency = freq;
                }
            }
            System.out.println(n-maxFrequency);
        }
    }
}