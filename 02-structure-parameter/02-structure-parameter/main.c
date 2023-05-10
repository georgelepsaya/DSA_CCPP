#include <stdio.h>
#include <stdlib.h>

struct Rectangle {
    int length;
    int breadth;
};

struct Test {
    int arr[5];
    int n;
};

struct Test *extTest(struct Test *test) {
    struct Test *newTest = (struct Test*)malloc(sizeof(struct Test));
    *newTest = *test;
    for (int i = 0; i < 5; i++) {
        newTest->arr[i] = test->arr[i]*2;
    }
    newTest->n = test->n * 2;
    return newTest;
}

void printTest(struct Test *test) {
    printf("Test Object:\narr = { ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", test->arr[i]);
    }
    printf("}\nn = %d\n\n", test->n);
}

void fun(struct Rectangle *r) {
    r->length = 15;
    printf("Length - %d\nBreadth - %d\n\n", r->length, r->breadth);
}

int main(int argc, const char * argv[]) {
    
    struct Rectangle r = {10, 5};
    printf("Length - %d\nBreadth - %d\n\n", r.length, r.breadth);
    fun(&r);
    
    struct Test t = {{1, 2, 3, 4, 5}, 5};
    struct Test *modT = extTest(&t);
    printTest(&t);
    printTest(modT);
    
    free(modT);
    
    return 0;
}
