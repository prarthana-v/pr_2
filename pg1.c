#include<stdio.h>
#include<conio.h>
main(){
	
	int num;
	clrscr();
	
	printf("Enter any Number:");
	scanf("%d",&num);
	
	(num%2==0)?printf("Number is even.."):printf("Number is odd"); 	
	
	getch(); 
}
