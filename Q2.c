#include <stdio.h>

void print(int arr[], int size);

int main()
{
    int len;
    printf("Enter length of array: ");
    scanf("%d", &len);
    int num[len];
    printf("Enter elements of array: ");
    for(int i=0; i<len; i++)
    scanf("%d", &num[i]);
    print(num, len);
}

void print(int arr[], int size)
{
    int sum=0;
    for (int i=0; i<size; i++)
    sum = sum + arr[i];
    int avg = sum/size;
    for (int j=0; j<size; j++)
    {
        if(arr[j]>avg)
        printf("%d ", arr[j]);
    }
}