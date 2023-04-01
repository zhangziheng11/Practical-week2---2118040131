﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* The following are function declarations. They _declare_ that the functions exist but they do not _define_ what the functions actually do (the definitions appear after the main function). By declaring these functions here, they may be called in main before they are defined.

Note: function1 expects an int type, whereas function2 expects a pointer to an int */
void function1(int);
void function2(int*);

int main() {
    int number = 10;
    /* C1. display the contents of number to the screen */
    printf("The value of number is: %d\n", number);

    /* C2. display the address of variable number to the screen */
    printf("The address of number is: %p\n", (void*)&number);

    /* C3. call function1 */
    function1(number);

    /* C4. display the contents of number to the screen */
    printf("The value of number after calling function1 is: %d\n", number);

    /* C5. call function2 */
    function2(&number);

    /* C6. display the contents of number to the screen */
    printf("The value of number after calling function2 is: %d\n", number);
    return 0;
}

void function1(int number)
{
    /* C7. increment number by one */
    number++;

    /* C8. display the contents of number to the screen (should be 11) */
    printf("The value of number in function 1 is: %d\n", number);

    /* C9. display the address of number to the screen */
    printf("The address of number in function 1 is: %p\n", (void*)&number);
}

void function2(int* numberPtr)
{
    /* C10. display the address of number to the screen (should be the same address as you displayed first in main) */
    printf("The address of number in function2 is: %p\n", (void*)numberPtr);

    /* C11. display the value that the pointer numberPtr points to */
    printf("The value of number in function2 is: %d\n", *numberPtr);

    /* C12. increment the value stored in number */
    (*numberPtr)++;

    /* C13. display the contents of number to the screen */
    printf("The value of number after incrementing in function2 is: %d\n", *numberPtr);
}