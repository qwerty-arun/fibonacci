# include <stdio.h>
int main()
{
int im2=0;
int im1=1;
int num,ith;
printf("Enter the nth term of fibonacci series to be printed: \n");
scanf("%d",num);
for(int i=3;i<num;i++)
{
ith=im2+im1;
im2=im1;
im1=ith;
}
printf("nth term of the fibonnaci series is: %d",ith);
printf("\n");
}
