/*
Loops allow programs to execute lines of code repeatedly, which reduces redundency in the code

while: if the bool-expr evaluates to true, all lines of code between the curly with execute repeatedly
----> use when you want a loop to repeat an unknown number of times, and possibly not at all

do-while: will execute the "do" code once and jump to the while code. Code will run atleast once
---> use when you want a loop to repeat an unknown number of times, but at least once

for loop: used to repeat the body of a loop specified number of times
---> use when you want a loop to repeat a known number of times, though you may not know the number at the moment the program is compiled
*/

#include <stdio.h>

int main()
{
    // simple while loop
    printf("Simple while loop: \n");
    int count = 0;
    while (count < 10)
    {
        printf("%d ", count);
        count++;
    }

    // do-while loop
    printf("\nSimple do-while loop: \n");
    int count_2 = 0;
    do
    {
        printf("%d ", count_2);
        count_2++;
    } while (count_2 < 10);

    // simple for loop
    printf("\nSimple for loop: \n");
    for (int i = 0; i < 10; i++)
    {

        printf("%d ", i);
    }

    return 0;
}
