#include <stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
    printf("alpahabet is %c",c);
    else
     printf("alphabet is not %c",c);
    return 0;
}
