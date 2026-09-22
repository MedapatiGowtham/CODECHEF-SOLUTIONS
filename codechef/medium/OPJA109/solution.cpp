class Calculator {
    public int subtract(int a, int b) {
        return a - b;
    }

    public double subtract(double a, double b) {
        return a - b;
    }
}

class Codechef{
    public static void main(String[] args) {
        Calculator calculator = new Calculator();

        int intDifference = calculator.subtract(10, 4); 
        double doubleDifference = calculator.subtract(5.5, 2.0); 

        System.out.println("Integer Difference: " + intDifference);
        System.out.println("Double Difference: " + doubleDifference);
    }
}