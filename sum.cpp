#include<stdio.h>
int main(){
	int num1,num2;
	char operand;
	printf("Enter operator :");
	scanf("%s",& operand );
	printf("Enter two numbers :");
	scanf("%d""%d",& num1,&num2);


    switch(operand){
    	case'+':;
    	printf("%d + %d =%d",num1,num2,num1+num2);
    	break;
    	
    		case'-':;
    	printf("%d - %d =%d",num1,num2,num1-num2);
    	break;
    	
    		case '*':;
       	printf("%d * %d =%d",num1,num2,num1*num2);
    	break;
    	
    		case'/':;
  	   printf("%d / %d =%d",num1,num2,num1/num2);
    	break;
	
	   default :; 
	   printf("You gave undefined operator");
	   break;
	return 0 ;
	}
 
}
