#include<stdio.h>

int main(){
	char operator;
	double num1 , num2 , result;
	printf("Enter an operator (+,-,*,/): ");
	scanf("%c" , &operator);
	printf("Enter first number : ");
	scanf("%lf" , &num1);
	printf("Enter second number : ");
	scanf("%lf" , &num2);
	
	switch (operator) {
		case '+':
			result = num1 + num2;
			printf("%.2lf + %.2lf = %.2lf", num1 , num2 , result);
			break;
		case '-':
			result = num1 - num2;
			printf("%.2lf - %.2lf = %.2lf", num1 , num2 , result);
			break;
		case '*':
			result = num1 * num2;
			printf("%.2lf * %.2lf = %.2lf", num1 , num2 , result);
			break;
		case '/':
			if (num2 == 0){
				result = num1 / num2;
			    printf("%.2lf / %.2lf = %.2lf", num1 , num2 , result);
			}
			else 
			{
				printf("Error");
			}
			break;
			
		default : 
		    printf("Invalid operator. \n");
			
	}
}
