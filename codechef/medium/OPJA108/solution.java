import java.util.Scanner;

class ShapeCalculator {
    // Calculate the area of a square
    static int calculateArea(int sideLength) {
        return sideLength * sideLength;
    }

    // Calculate the area of a rectangle
    static int calculateArea(int length, int width) {
        return length * width;
    }
}

class Codechef {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int squareSide, length, width;
        squareSide = scanner.nextInt();
        length = scanner.nextInt();
        width = scanner.nextInt();

        // Calculate the area of a square
        int squareArea = ShapeCalculator.calculateArea(squareSide);

        // Calculate the area of a rectangle
        int rectangleArea = ShapeCalculator.calculateArea(length, width);

        System.out.println(squareArea);
        System.out.println(rectangleArea);
    }
}
