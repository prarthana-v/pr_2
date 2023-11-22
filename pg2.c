#include<stdio.h>
main(){
	int units;
	float amount;
	
	printf("Enter Electricity units:");
	scanf("%d",&units);
	
	if(units<50) amount=units*0.50;
	else if(units<150) amount=(0.50*50) + (units-50)*0.75;
	else if(units<250) amount=25 + 75 + (units-150)*1.20;
	else if(units>250) amount=25 + 75 + 120 + (units-250)*1.50;
	
	amount+=(amount*0.20);
	printf("Electricity Bill:%0.2f",amount);
}
