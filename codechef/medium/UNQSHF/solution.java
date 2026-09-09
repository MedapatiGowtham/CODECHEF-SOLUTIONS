import java.util.*;
class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t--> 0) {
            int n = sc.nextInt();
            String a = sc.next();
            String b = sc.next();
            int countOfa = 0;
            int countOfb = 0;
            for(int i=0; i<a.length(); i++) {
                if(a.charAt(i) == 'a') {
                    countOfa++;
                }
                if(b.charAt(i) == 'a') {
                    countOfb++;
                }
            }
            if(countOfa+countOfb == n) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}