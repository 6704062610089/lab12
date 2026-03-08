#include <stdio.h>

int fac(int);
int fib(int);

int main() {
    printf("Fac 5 : %d\n", fac(5));
    printf("Fib 7 : %d\n", fib(7));
    return 0;
}

int fac(int n) {
    if (n == 0) return 1;
    return n * fac(n - 1);
}

int fib(int n) {
    if (n <= 1) {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}