#include <stdio.h>
int main(){
int a = 4, *p, *p1;
p=&a;
p1=p;
printf("%d\n", a);
printf("%d\n", *p1);
return 0;
}