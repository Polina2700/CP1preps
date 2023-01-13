#include <stdio.h>

int main() {

char a[5]="Hello";
int b=23;
char c='d';
float d=1.25;

printf("a: %s\nb: %i\nc: %c\nd: %.2f\n", a,b,c,d);

printf("size a: %lu\n", sizeof(a));
printf("size b: %lu\n", sizeof(b));
printf("size c: %lu\n", sizeof(c));
printf("size d: %lu\n", sizeof(d));
return 0;
}
