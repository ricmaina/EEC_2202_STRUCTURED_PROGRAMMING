#include <stdio.h>

int main(void) {
    //Variable declaration
    double radius;
    double pi = 3.142;
    double area;

    //Capture input from user
    printf("What is the radius of the circle: ");
    scanf("%d", &radius);
    area = pi * radius * radius;
    printf("Area : %f", area);

    return 0;
}

