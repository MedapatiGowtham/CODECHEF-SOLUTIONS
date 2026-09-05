import java.util.Scanner;
import java.util.Stack;
class StackProb{
static int precedence(char op) {
    if(op == '^')
        return 3;
    if(op == '*' || op == '/')
        return 2;
    if(op == '+' || op == '-')
        return 1;
    return 0;
}
static String infixToPostfix(String expression) {
    Stack<Character> stack = new Stack<>();
    StringBuilder result = new StringBuilder();
    for(int i=0; i<expression.length(); i++) {
        char ch = expression.charAt(i);
        if(Character.isLetter(ch)) {
            result.append(ch);
        } else if(ch == '(') {
            stack.push(ch);
        } else if(ch == ')') {
            while(!stack.isEmpty() && stack.peek() != '(') {
                result.append(stack.pop());
            }
            stack.pop();
        } else {
            while(!stack.isEmpty() && stack.peek() != '(' && precedence(stack.peek()) >= precedence(ch)) {
                result.append(stack.pop());
            }
            stack.push(ch);
        }
    }
    while(!stack.isEmpty()) {
        result.append(stack.pop());
    }
    return result.toString();
}
public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();
    while(t-->0) {
        String expression = sc.next();
        System.out.println(infixToPostfix(expression));
    }
}
}