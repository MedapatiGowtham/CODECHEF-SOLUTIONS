import java.util.*;
class Codechef {
    static boolean checkSub(String m, String w) {
        int l1 = m.length();
        int l2 = w.length();
        int i = 0, j = 0;
        while (i < l1 && j < l2) {
            if (m.charAt(i) == w.charAt(j)) {
                i++;
            }
            j++;
        }
        return (i == l1);
    }
    public static void main(String[] args) throws java.lang.Exception {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            String m = sc.next(); 
            String w = sc.next();
            if (checkSub(m, w) || checkSub(w, m)) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}
