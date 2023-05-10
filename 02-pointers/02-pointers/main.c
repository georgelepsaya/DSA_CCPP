#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    int *p;
    p = (int*)malloc(5*sizeof(int));
    
    p[0] = 10; p[1] = 15; p[2] = 14; p[3] = 21; p[4] = 31;
    
    for (int i = 0; i < 5; i++) {
        printf("%d\n", p[i]);
    }
    
    free(p);
    
    return 0;
}
