class Shape {
    public int calculateArea() {
        return 0;
    }

    public int calculatePerimeter() {
        return 0;
    }
}

class Rectangle extends Shape {
    private int length;
    private int width;

    public Rectangle(int length, int width) {
        this.length = length;
        this.width = width;
    }

    @Override
    public int calculateArea() {
        return length * width;
    }

    @Override
    public int calculatePerimeter() {
        return 2 * (length + width);
    }
}

class Square extends Shape {
    private int side;

    public Square(int side) {
        this.side = side;
    }

    @Override
    public int calculateArea() {
        return side * side;
    }

    @Override
    public int calculatePerimeter() {
        return 4 * side;
    }
}

class Codechef {
    public static void main(String[] args) {
        Rectangle rectangle = new Rectangle(4, 6);
        Square square = new Square(5);

        int rectangleArea = rectangle.calculateArea();
        int rectanglePerimeter = rectangle.calculatePerimeter();

        int squareArea = square.calculateArea();
        int squarePerimeter = square.calculatePerimeter();

        System.out.println("Rectangle Area: " + rectangleArea);
        System.out.println("Rectangle Perimeter: " + rectanglePerimeter);
        System.out.println("Square Area: " + squareArea);
        System.out.println("Square Perimeter: " + squarePerimeter);
    }
}
