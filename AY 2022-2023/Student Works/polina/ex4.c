#include <stdio.h>

int main() {

float t;
float s;

printf("Please enter a time: \n");
scanf("%f", &t);
printf("Please enter a length: \n");
scanf("%f", &s);
float v=s/t;
printf("Speed is: %.3f\n", v);


return 0;
}

