import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            String s = sc.next();
            int a = Integer.parseInt(s.substring(0, 2));
            int b = Integer.parseInt(s.substring(3, 5));
            boolean ddmmyyyy = (a >= 1 && a <= 31) &&
                               (b >= 1 && b <= 12);

            boolean mmddyyyy = (a >= 1 && a <= 12) &&
                               (b >= 1 && b <= 31);
            if (ddmmyyyy && mmddyyyy) {
                System.out.println("BOTH");
            } else if (ddmmyyyy) {
                System.out.println("DD/MM/YYYY");
            } else {
                System.out.println("MM/DD/YYYY");
            }
        }
    }
}