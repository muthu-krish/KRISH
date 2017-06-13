#include <stdio.h>
void main()
{
    int num,t,c;
    printf("Enter a number: ");
    scanf("%d",&num);
    c=0;
    t=num;
    while(t>0){
        c++;
        t/=10;
    }
    printf("Total numbers of digits are: %d in number: %d.",c,num);
}
