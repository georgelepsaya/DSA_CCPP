#include <iostream>

int pow(int m, int n) {
    if (n == 0)
        return 1;
    if (n % 2 == 0)
        return pow(m*m, n/2);
    return m * pow(m*m, (n-1)/2);
}

int main() {
    
    std::cout << pow(2, 9) << std::endl;
    
    return 0;
}
