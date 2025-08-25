void ft_swap(int *a, int *b)
{
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

#include <stdio.h>

int main()
{
    int a = 3;
    int b = 1;
    ft_swap(&a, &b);
    printf("%d",a);
    printf("%d",b);
}