#include<stdio.h>

int evenodd(x)
{
    if(x%2==0)
      printf("Num is Even");
    else
      printf("Num is odd");
}
void main()
{
    int num;
    printf("Enter the Num : ");
    scanf("%d",&num);
    evenodd(num);
}