import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int T = sc.nextInt();

        while (T-- > 0) {
            String s = sc.next();

            boolean lower = false;
            boolean upper = false;
            boolean digit = false;
            boolean special = false;
            if (s.length() < 10) {
                System.out.println("NO");
                continue;
            }
            for (int i = 0; i < s.length(); i++) {
                char ch = s.charAt(i);
                if (ch >= 'a' && ch <= 'z') {
                    lower = true;
                }
                if (i > 0 && i < s.length() - 1) {

                    if (ch >= 'A' && ch <= 'Z') {
                        upper = true;
                    }

                    if (ch >= '0' && ch <= '9') {
                        digit = true;
                    }

                    if (ch == '@' || ch == '#' || ch == '%' ||
                        ch == '&' || ch == '?') {
                        special = true;
                    }
                }
            }

            if (lower && upper && digit && special) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }

        sc.close();
    }
}