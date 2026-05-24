/* example.c
This example shows you about format.h
It'll demonstrate a few variable types
*/

/* This shell assumes you are in the parent directory
and E-Libc isn't installed on your host system
*/

/* Compile with elibc-gcc examples/example.c -o example */
/* Begin example.c */

#include "include/stdio.h"
#include "include/format.h"

int main()
{
    int age = 15;
    char grade = 'A';
    long population = 8500000;
    long long big_number = 9000000000000LL;
    char name[] = "E-Libc User";

    printf("=== E-Libc format.h demo ===\n");

    printf("Name: %char[]\n", name);
    printf("Age: %int\n", age);
    printf("Grade: %char\n", grade);

    printf("City population: %long\n", population);
    printf("Big number: %longlong\n", big_number);

    printf("\n--- Mixed line ---\n");
    printf("%char[] is %int years old and got grade %char\n",
            name, age, grade);

    printf("\n--- Edge values ---\n");
    printf("Max int: %int\n", 2147483647);
    printf("Min int: %int\n", -2147483648);

    return 0;
}

/* End example.c */
