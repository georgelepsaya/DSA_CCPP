#include <stdio.h>

int fun1(int n) {
    if (n > 0) {
        return fun1(n - 1) + n;
    }
    return 0;
}

int fun2(int n) {
    static int x = 0;
    if (n > 0) {
        x++;
        return fun2(n - 1) + x;
    }
    return 0;
}

int main() {
    
    int a = 5;
    printf("%d\n", fun1(a)); // 15
    printf("%d\n", fun2(a)); // 25 - first call (x=0...)
    printf("%d\n", fun2(a)); // 50 - second call (x=5...)
    
    return 0;
}
