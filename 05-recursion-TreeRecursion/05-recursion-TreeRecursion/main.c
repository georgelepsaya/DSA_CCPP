#include <stdio.h>

void fun1(int n) {
    if (n > 0) {
        printf("%d ", n);
        fun1(n - 1);
        fun1(n - 1);
    }
}

int main() {
    fun1(3); // 3 2 1 1 2 1 1
    printf("\n");
    
    return 0;
}
