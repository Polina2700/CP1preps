#include <stdio.h>

int main() {

int a;
int b, c;

a=1;
b=2;
c=12;

int d=185;

printf("num a: %i\n",a);
printf("num b: %i\n num d: %i\n",b,d);

printf("address a: %p\n address b: %p\n address c: %p\n ", &a, &b, &c);
return 0;
}
