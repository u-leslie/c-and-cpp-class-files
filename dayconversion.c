#include<stdio.h>
int main()
{

	int days,weeks,years;
	printf("Enter the nbr of days to be converted");
	scanf("%d",& days);
	years=(days/365);
	weeks=(days%365)/7;
	days=days-((years*365)-(weeks*7));
	printf("Years:%d",& years);
	printf("Weeks:%d",&weeks);
	printf("Days:%d",&days);
	return 0,
	
 }
