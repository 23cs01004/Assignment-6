#include <stdio.h>

int check(int arr1[], int arr2[], int l1, int l2);

int main()
{
    int len1, len2;

    printf("Enter length of arr1[]: ");
    scanf("%d", &len1);
    int arr1[len1];
    printf("arr1[]: ");
    for(int i=0; i<len1; i++)
    scanf("%d", &arr1[i]);

    printf("Enter length of arr2[]: ");
    scanf("%d", &len2);
    int arr2[len2];
    printf("arr2[]: ");
    for(int i=0; i<len2; i++)
    scanf("%d", &arr2[i]);
    if(check(arr1, arr2, len1, len2))
    {
        printf("arr2[] is a subset of arr1[]");
    }
    else
    {
        printf("arr2[] is not a subset of arr1[]");
    }
    return 0;
}

int check(int arr1[], int arr2[], int l1, int l2)
{
    for(int i=0; i<l2; i++)
    {
        int j;
        for (j=0; j<l1; j++)
        {
            if(arr2[i] != arr1[j])
            {
                continue;
            }
            else
            {
                break;
            }
        }
        if (j==l1)
        {
            return 0;
        }
    }
    return 1;
}