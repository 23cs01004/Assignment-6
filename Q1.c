#include <stdio.h>

int check_prime(int num);

int main()
{
    int lowlim, uplim, temp=0;
    printf("Enter lower limit: ");
    scanf("%d", &lowlim); 
    printf("Enter upper limit: ");
    scanf("%d", &uplim); 
    printf("Prime numbers between %d-%d are:\n", lowlim, uplim);
    for (int i=lowlim+1; i<uplim; i++)
    {
        if(check_prime(i))
        {
            printf("%d ", i);
        }
        else
        {
            temp++;
        }
    }
    if (temp==uplim-lowlim-1)
    {
        printf("None");
    }
}

int check_prime(int num)
{
    if (num==1)
    return 0;

    for (int j=2; j<=num/2; j++)
    {
        if (num%j==0)
        {
            return 0;
        }
    }
    return 1;
}