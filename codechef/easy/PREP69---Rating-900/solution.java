import java.util.Scanner;
import java.util.ArrayList;
class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0) {
            int n = sc.nextInt();
            int j = -1;
            ArrayList<Integer> al = new ArrayList<>();
            for(int i=0; i<n; i++) {
                int current = sc.nextInt();
                if(current != j) {
                    al.add(current);
                    j = current;
                }
            }
            System.out.println(al.size());
            for(int i=0; i<al.size(); i++) {
                System.out.print(al.get(i)+" ");
            }
            System.out.println();
        }
    }
}
