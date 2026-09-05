import java.util.Scanner;
import java.util.Stack;
class EvaExp {
    static int[] stack = new int[1000];
    static int top = -1;
    static void push(int x) {
        stack[++top] = x;
    }
    static int pop() {
        return stack[top--];
    }
    static int evaluate(String s) {
        for(int i=0; i<s.length(); i++) {
            char ch = s.charAt(i);
            if(Character.isDigit(ch)) {
                push(ch -'0');
            } else {
                int b = pop();
                int a = pop();
                if(ch == '+') {
                    push(a+b);
                } else if(ch == '-') {
                    push(a-b);
                }else if(ch == '*') {
                    push(a*b);
                } else if(ch == '/') {
                    push(a/b);
                }
            }
        }
        return pop();
    }
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0) {
            int n = sc.nextInt();
            String expression = sc.next();
            System.out.println(evaluate(expression));
        }
    }
}