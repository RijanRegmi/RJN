#include<stdio.h>
#include<conio.h>
void main()
 {
 		float a;
 		float b;
 		float result;
 		char op;
 		
 		printf("enter the first number: ");
 		scanf("%f",&a);
 		
 		printf("enter the operation: ");
 		scanf(" %c",&op);
 		
 		printf("enter the second number: ");
 		scanf("%f",&b);
 		
 		switch(op){
 			case '-':
 			result = a-b;
 			printf("%.2f",result);
 			break;
 			
 			case '+':
 			result = a+b;
 			printf("%.2f",result);
 			break;
 			
 			case '*':
 			result = a*b;
 			printf("%.2f",result);
 			break;
 			
 			case '/':
 			result = a/b;
 			printf("%.2f",result);
 			break;
 			
 			default :
 			printf("the operator is not valid");
 			getch();
		 }
 }
