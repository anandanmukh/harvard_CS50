// arithmetic operators
// shorthand operators , x *= 5
// boolean expressions, 1 is true and 0 is false
// logical operators, AND (&&), OR(||), NOT(!)
// relational operators, ==, !=, >, <, >=, <=

#include <stdio.h>

int main(void)
{
    int x, y, m;
    y = 5;
    x = y + 1;
    x = x * 5;
    m = 13%4; 
    printf("%d %d %d", x, y, m);
}