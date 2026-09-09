import java.util.Scanner;
class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();
        int z = sc.nextInt();
        if((x*12+z) < (y*12+z)) {
            System.out.println(x*12);
        } else {
            System.out.println(y*12);
        }
    }
}