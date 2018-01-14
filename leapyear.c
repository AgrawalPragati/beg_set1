#include<stdio.h>
int main()
{int n;
	printf("Enter a no: ");
    scanf("%d",&n);
    if((n%4==0)||n%100!=0&&n%400==0)
	
    
        printf("Number is Leap year.");
        else
           printf("Not a leap year.");
        
}
 
