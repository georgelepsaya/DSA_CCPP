#include <stdio.h>

struct Rectangle {
    int length;
    int breadth;
    char x;
};

int main(int argc, const char * argv[]) {
    
    struct Rectangle r1 = {10, 5};
    
    r1.length = 15;
    r1.breadth = 7;
    
    printf("sizeof: %lu\n", sizeof(r1));
    printf("length: %d\n", r1.length);
    printf("breadth: %d\n", r1.breadth);
    return 0;
}
