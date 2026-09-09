import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int x = sc.nextInt();
            String s = sc.next();
            int carlsen = 0;
            int chef = 0;
            for (char c : s.toCharArray()) {
                if (c == 'C') {
                    carlsen += 2;
                } else if (c == 'N') {
                    chef += 2;
                } else {
                    carlsen++;
                    chef++;
                }
            }
            if (carlsen > chef) {
                System.out.println(60 * x);
            } else if (carlsen == chef) {
                System.out.println(55 * x);
            } else {
                System.out.println(40 * x);
            }
        }
    }
}