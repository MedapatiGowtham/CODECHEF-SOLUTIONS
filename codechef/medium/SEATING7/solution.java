import java.util.Scanner;
class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0) {
            int n = sc.nextInt();
            int m = sc.nextInt();
            int k = sc.nextInt();
            boolean occupied[] = new boolean[n+1];
            for(int i=0; i<m; i++) {
                int seat = sc.nextInt();
                occupied[seat] = true;
            }
            for(int i=0; i<k; i++) {
                for(int j=1; j<=n; j++) {
                    if(!occupied[j]) {
                        System.out.print(j+" ");
                        occupied[j] = true;
                        break;
                    }
                }
            }
            System.out.println();
        }
    }
}