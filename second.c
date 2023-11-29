// include
#include <stdio.h>

// define constant
#define PI 3.14

// write funstions

float calArea(float radius) {
    return PI * radius * radius;
}

void helloWord () {
    printf("Hello world");
}

int main() {
    printf("Hello word!");
    printf("Size of char: %d ", sizeof(char));
    prinf("Size of float: %d", sizeof(float));
    return 0;
}