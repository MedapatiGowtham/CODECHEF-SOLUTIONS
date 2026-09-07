import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int T = sc.nextInt();

        while (T-- > 0) {
            String X = sc.next();
            String Y = sc.next();

            boolean match = true;

            for (int i = 0; i < X.length(); i++) {
                if (X.charAt(i) != Y.charAt(i)
                        && X.charAt(i) != '?'
                        && Y.charAt(i) != '?') {
                    match = false;
                    break;
                }
            }

            System.out.println(match ? "Yes" : "No");
        }
    }
}