#include <stdio.h>
int main(){
int a = 12;
int b = 6;
int *p1 = &a;
int *p2 = &b;
printf("%d", *p1 + *p2);
printf("\n%d", *p1 - *p2);
printf("\n%d", (*p1)*(*p2));
printf("%d\n", (*p1) / (*p2));
printf("\n");
return 0;
}