#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// function declarations
void getNumber(int*);
void calculateSum(int, int, int*);

int main() {
    int num1, num2, sum;

    printf("Enter the first number: ");
    getNumber(&num1);

    printf("Enter the second number: ");
    getNumber(&num2);

    calculateSum(num1, num2, &sum);
    printf("The sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}

// function definitions
void getNumber(int* numPtr) {
    scanf("%d", numPtr);
}

void calculateSum(int num1, int num2, int* sumPtr) {
    *sumPtr = num1 + num2;
}
/* function to display details to the screen */
void displayDetails (void){
  printf("Author : Your Name\n");
  printf("Stud ID : Your Student Id\n");
  printf("Email ID : Your Email Id\n");
  printf("This is my own work as defined by the\n"); printf("University's Academic Misconduct Policy.\n\n"); 
}/* end function displayDetails */
