# include <stdio.h>
void fib()
{
  unsigned int im2th =0;
  unsigned int im1th=1;
  int num;unsigned int ith=0;
  printf("Enter the nth term of fibonacci series to be printed:\n");
  scanf("%d",&num);
  if(num<=0)
  {
    printf("Given no. %d is invalid\n",num);
    printf("Fibonacci series starts with 0 and 1, 0 being the first term and 1 the second and so on, so enter a positive no.\n");
    return 0;
  }
  for(int i=3;i<=num;i++)
  {
    ith=im2th+im1th;
    im2=im1;
im1=ith;
}
printf("nth term of the fibonnaci series is: %d",ith);
printf("\n");
}
