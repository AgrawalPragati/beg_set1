#include<stdio.h>
int main()
{char n;
	printf("Enter a no: ");
    scanf("%c",&n);
    if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u'||n=='A'||n=='E'||n=='I'||n=='O'||n=='U')
     printf("Number is Vowel.");
     else
     printf("Number is consonant.");
     return 0;
 }  										
