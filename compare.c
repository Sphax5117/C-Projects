#include <stdio.h>

int main() {

    int a = 9;
    int b = 7;
    int c = 10;
    int res = 0;

    res = (a + 1 == c && c - 2 == b);

    printf("a = %d\n", a);
    printf("b = %d\n", b); 
    printf("c = %d\n", b);
    printf("res = %d\n", res);

}