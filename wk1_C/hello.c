#include <stdio.h>

int main(void)
{
    char name[20];
    gets(name);
    printf("Hello %s", name);
}