#include <stdio.h>
int main()
{
    int num = 8;
    int    *a;
    a = &num;

    
    printf("%p\n", a);
    printf("%p\n", &num);
    printf("%d\n", num);
    printf("%d\n", *a);

}