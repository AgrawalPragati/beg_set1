#include<stdio.h>
int main()
{char n;
	printf("Enter a no: ");
    scanf("%c",&n);
    if((n>='a' && n<='z')|(n>='A' && n<='Z'))
     printf("Alphabet");
     else
     printf("No");
     return 0;
 }
