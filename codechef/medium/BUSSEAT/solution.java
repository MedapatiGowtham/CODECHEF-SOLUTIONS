import java.util.Scanner;
class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0) {
            int n = sc.nextInt();
            int k = sc.nextInt();
            if(n >= k) {
                System.out.println(0);
            } else {
                System.out.println((k-n)*2);
            }
        }
    }
}