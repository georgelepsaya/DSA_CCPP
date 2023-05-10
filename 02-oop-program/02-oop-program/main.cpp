#include <iostream>

class Rectangle {
private:
    int length;
    int breadth;
public:
    int area() {
        return length * breadth;
    }
    int perimeter() {
        return 2 * (length + breadth);
    }
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }
};

int main() {
    int l, b;
    printf("Enter numebrs:\n");
    std::cin >> l >> b;
    Rectangle r(l, b);
    printf("Area: %d\nPerimeter: %d\n", r.area(), r.perimeter());
    
    return 0;
}
