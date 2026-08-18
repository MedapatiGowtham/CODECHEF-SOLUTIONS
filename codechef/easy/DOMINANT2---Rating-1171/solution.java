import java.util.Scanner;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
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
            for(int i=0; i<n; i++)
            {
                int value = sc.nextInt();
                al.add(value);
            }
            HashMap<Integer, Integer> hs = new HashMap<>();
            for(int x:al)
            {
                hs.put(x, hs.getOrDefault(x, 0)+1);
            }
            int maxFreq = 0;
            int freqCount = 0;
            for(Map.Entry<Integer, Integer> map : hs.entrySet())
            {
                int count = map.getValue();
                if(count > maxFreq)
                {
                    maxFreq = count;
                    freqCount = 1;
                }
                else if(count == maxFreq)
                {
                    freqCount++;
                }
            }
            System.out.println(freqCount==1?"YES":"NO");
        }
    }
}