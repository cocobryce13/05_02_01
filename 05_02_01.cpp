#include<iostream>
#include<string>

class Figure
{
public:
    virtual void print() {}
};

class Triangle : public Figure // Треугольник
{
public:
    Triangle(int a, int b, int c, int A, int B, int C) : a(a), b(b), c(c), A(A), B(B), C(C) {}
    void print() override
    {
        std::cout << figure << std::endl;
        std::cout << side << a << " " << b << " " << c << std::endl;
        std::cout << angles << A << " " << B << " " << C << std::endl;
        std::cout << "\n\n";
    }

protected:
    std::string figure = "Triangle: ";
    std::string side = "Side: ";
    std::string angles = "Angles: ";
    int a, b, c;
    int A, B, C;
};

class Right_triangle : public Triangle // Прямоугольный треугольник
{
public:
    Right_triangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90) {}

    void print() override
    {
        std::cout << figure << std::endl;
        std::cout << side << a << " " << b << " " << c << std::endl;
        std::cout << angles << A << " " << B << " " << C << std::endl;
        std::cout << "\n\n";
    }

private:
    std::string figure = "Right_triangle: ";
    const int C = 90;
};

class Isosceles_triangle : public Triangle // Равнобедренный треугольник
{
public:
    Isosceles_triangle(int a, int b, int A, int B) : Triangle(a, b, a, A, B, A) {}

    void print() override
    {
        std::cout << figure << std::endl;
        std::cout << side << a << " " << b << " " << c << std::endl;
        std::cout << angles << A << " " << B << " " << C << std::endl;
        std::cout << "\n\n";
    }

private:
    std::string figure = "Isosceles_triangle: ";
};

class Equilateral_triangle : public Triangle // Равносторонний треугольник
{
public:
    Equilateral_triangle(int a) : Triangle(a, a, a, 60, 60, 60) {}

    void print() override
    {
        std::cout << figure << std::endl;
        std::cout << side << a << " " << b << " " << c << std::endl;
        std::cout << angles << A << " " << B << " " << C << std::endl;
        std::cout << "\n\n";
    }

private:
    std::string figure = "Equilateral_triangle: ";
};

class Quadrangle : public Figure // Четырёхугольник
{
public:
    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) : a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {}
    void print() override
    {
        std::cout << figure << std::endl;
        std::cout << side << a << " " << b << " " << c << " " << d << std::endl;
        std::cout << angles << A << " " << B << " " << C << " " << D << std::endl;
        std::cout << "\n\n";
    }

protected:
    std::string figure = "Quadrangle: ";
    std::string side = "Side: ";
    std::string angles = "Angles: ";
    int a, b, c, d;
    int A, B, C, D;
};

class Parallelogram : public Quadrangle // Параллелограмм
{
public:
    Parallelogram(int a, int b, int A, int B) : Quadrangle(a, b, a, b, A, B, A, B) {}

    void print() override
    {
        std::cout << figure << std::endl;
        std::cout << side << a << " " << b << " " << c << " " << d << std::endl;
        std::cout << angles << A << " " << B << " " << C << " " << D << std::endl;
        std::cout << "\n\n";
    }

private:
    std::string figure = "Parallelogram: ";
};

class Rectangle : public Parallelogram // Прямоугольник
{
public:
    Rectangle(int a, int b) : Parallelogram(a, b, 90, 90) {}

    void print() override
    {
        std::cout << figure << std::endl;
        std::cout << side << a << " " << b << " " << c << " " << d << std::endl;
        std::cout << angles << A << " " << B << " " << C << " " << D << std::endl;
        std::cout << "\n\n";
    }

private:
    std::string figure = "Rectangle: ";
};

class Rhombus : public Parallelogram // Ромб
{
public:
    Rhombus(int a, int A, int B) : Parallelogram(a, a, A, B) {}

    void print() override
    {
        std::cout << figure << std::endl;
        std::cout << side << a << " " << b << " " << c << " " << d << std::endl;
        std::cout << angles << A << " " << B << " " << C << " " << D << std::endl;
        std::cout << "\n\n";
    }

private:
    std::string figure = "Rhombus: ";
};

class Square : public Rhombus // Квадрат
{
public:
    Square(int a) : Rhombus(a, 90, 90) {}

    void print() override
    {
        std::cout << figure << std::endl;
        std::cout << side << a << " " << b << " " << c << " " << d << std::endl;
        std::cout << angles << A << " " << B << " " << C << " " << D << std::endl;
        std::cout << "\n\n";
    }

private:
    std::string figure = "Square: ";
};

int main()
{
    Triangle triangle(10, 20, 30, 30, 70, 80); // Треугольник
    triangle.print();

    Right_triangle right_triangle(10, 20, 30, 30, 50); // Прямоугольный треугольник
    right_triangle.print();

    Isosceles_triangle isosceles_triangle(60, 60, 60, 60); // Равнобедренный треугольник
    isosceles_triangle.print();

    Equilateral_triangle equilateral_triangle(60); // Равносторонний треугольник
    equilateral_triangle.print();

    Quadrangle quadrangle(70, 100, 70, 100, 70, 110, 70, 110); // Четырёхугольник
    quadrangle.print();

    Rectangle rectangle(30, 70); // Прямоугольник
    rectangle.print();

    Square square(10); // Квадрат
    square.print();

    Parallelogram parallelogram(10, 50, 60, 30); // Параллелограмм
    parallelogram.print();

    Rhombus rhombus(10, 60, 30); // Ромб
    rhombus.print();

    return 0;
}
