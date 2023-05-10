#include <iostream>

int main() {
    
    int length, breadth = 0;
    
    printf("Enter Length and Breadth\n");
    std::cin >> length >> breadth;
    
    int area = length * breadth;
    int peri = 2 * (length + breadth);
    
    printf("Area = %d\nPerimeter = %d\n", area, peri);
    
    return 0;
}
