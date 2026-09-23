import java.util.Scanner;
import java.util.Arrays;
class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0) {
            int n = sc.nextInt();
            int a[] = new int[n];
            int b[] = new int[n];
            for(int i=0; i<n; i++) {
                a[i] = sc.nextInt();
            }
            for(int i=0; i<n; i++) {
                b[i] = sc.nextInt();
            }
            Arrays.sort(a);
            Arrays.sort(b);
            int h1 = n-1, h2 = n-1, ans = 0;
            while(h1>=0 && h2>=0) {
                if(a[h1] == b[h2]) {
                    ans++;
                }
                if(a[h1] > b[h2]) {
                    h1--;
                } else {
                    h2--;
                }
            }
            System.out.println(ans);
        }
    }
}