#include <stdio.h>

int main() {

    int a = 3;
    int b = 32;
    int c;
    int d;
    
    a += 55;
    b -= 2;
    c = a / b;
    d = a % b;

    float e = a;
    float f = b;
    float g = e / f;

    printf("In an Euclidian division : %d/%d = %d * %d + %d\n", a, b, c, b, d);
    printf("In a normal division : %d/%d = %f\n", a, b, g);

    return 0;
}