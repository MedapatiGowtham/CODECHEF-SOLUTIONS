import java.util.*;
class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0) {
            int coin = sc.nextInt();
            int y = sc.nextInt();
            int totalEarned = 0;
            int totalSpend = 0;
            int profit = 0;
            int gpu = 0;
            while(profit <= 0) {
                totalSpend = totalSpend+coin;
                totalEarned = y*gpu*gpu;
                profit = totalSpend-totalEarned;
                gpu++;
            }
            System.out.println(gpu);
        }
    }
}