#include <iostream>

struct Rectangle {
    int length;
    int breadth;
};

int area(struct Rectangle r) {
    return r.length * r.breadth;
}

int perimeter(Rectangle r) {
    return 2 * (r.length + r.breadth);
}

void initialize(struct Rectangle *r, int l, int b) {
    r->length = l;
    r->breadth = b;
}

int main() {
    
    Rectangle r;
    int l, b;
    
    printf("Enter numbers\n");
    std::cin >> l >> b;
    
    initialize(&r, l, b);
    
    printf("Area = %d\nPerimeter = %d\n", area(r), perimeter(r));
    
    return 0;
}
