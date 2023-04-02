#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
<<<<<<< HEAD

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
=======
/* function to read number from standard input (keyboard) */ int getNumber();
/* function to calculate the sum of two numbers */
int calculateSum(int, int);
/* function to display details to the screen */
void displayDetails(void);
int main() {
	int num1 = 0; /* first number to be entered by user */
	int num2 = 0; /* second number to be entered by user */
	int sum = 0; /* stores sum of two numbers */
	displayDetails();

	/* prompt for and read first number */
	printf("Please enter first number : ");
	num1 = getNumber();

	/* prompt for and read second number */
	printf("Please enter second number: ");
	num2 = getNumber();

	/* add two numbers together and display to screen */
	sum = calculateSum(num1, num2);
	printf("\nSum of %d and %d is: %d\n\n", num1, num2, sum);

	return 0;
}
/* function to read number from standard input (keyboard) */
int getNumber() {
	int num;
	scanf("%d", &num);
	return num;
}
/* function to calculate the sum of two numbers */
int calculateSum(int number1, int number2) {
	return number1 + number2;
}
/* function to display details to the screen */
void displayDetails(void) {
	printf("Author : Your Name\n");
	printf("Stud ID : Your Student Id\n");
	printf("Email ID : Your Email Id\n");
	printf("This is my own work as defined by the\n"); printf("University's Academic Misconduct Policy.\n\n");
>>>>>>> a7cb0da44c4199186f245e304d73c8096d56f4c9
}/* end function displayDetails */
