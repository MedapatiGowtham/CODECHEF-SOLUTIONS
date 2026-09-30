import java.util.Scanner;
class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int bread = sc.nextInt();
        int ham = sc.nextInt();
        int cheese = sc.nextInt();
        System.out.println(Math.min(bread/2, ham+cheese));
    }
}