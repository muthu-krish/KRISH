#include <stdio.h>
void main()
{
    int n1,n2,n3;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>=n2)
    {
    if(n1>=n3)
     printf("%d is the largest number.", n1);
    else
     printf("%d is the largest number.", n3);
    }
    else
    {
    if(n2>=n3)
     printf("%d is the largest number.", n2);
   else
     printf("%d is the largest number.",n3);
    }
} 
  
