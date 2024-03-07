#include <stdio.h>


int swap(int num[], int size, int m);
int main()
{
    int len;
    
    
    printf("Enter length of array: ");
    scanf("%d", &len);
    int num[len];
    printf("Enter elements of array: ");
    for(int i=0; i<len; i++)
    scanf("%d", &num[i]);
    swap(num, len, 0);

    for (int i=0; i<len; i++)
    printf("%d ", num[i]);
    return 0;
}                   
    
int swap(int num[], int size, int m)
{  
    if(m == size/2)
    {
        return 0;
    }                 
    int temp = num[m];
    num[m]=num[size-1-m];
    num[size-1-m]=temp;
    m++;
    swap(num, size, m);
}  

    
