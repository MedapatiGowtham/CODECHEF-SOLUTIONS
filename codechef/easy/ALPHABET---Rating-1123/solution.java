import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        int n = sc.nextInt();
        boolean[] known = new boolean[26];
        for (char c : s.toCharArray()) {
            known[c - 'a'] = true;
        }
        for (int i = 0; i < n; i++) {
            String word = sc.next();
            boolean canRead = true;
            for (char c : word.toCharArray()) {
                if (!known[c - 'a']) {
                    canRead = false;
                    break;
                }
            }
            if (canRead) {
                System.out.println("Yes");
            } else {
                System.out.println("No");
            }
        }
    }
}