#include <iostream>

int area(int *length, int *breadth) {
    return *length * *breadth;
}

int perimeter(int *length, int *breadth) {
    return 2 * (*length + *breadth);
}

int main() {
    
    int length, breadth = 0;
    printf("Enter numbers\n");
    std::cin >> length >> breadth;
    printf("Area = %d\nPerimeter = %d\n", area(&length, &breadth), perimeter(&length, &breadth));
    
    return 0;
}
