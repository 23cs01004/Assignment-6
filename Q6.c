#include <stdio.h>

void input(float temp[][7], int m);

int main()
{
    
    int cities;
    printf("No. of cities: ");
    scanf("%d", &cities);
    float temp[cities][7];

    input(temp, cities);
    return 0;

}

void input(float temp[][7], int m)
{
    float avg[m];
    
    for (int i=0; i<m; i++)
    {
        float sum=0;
        for (int j=0; j<7; j++)
        {
            scanf("%f", &temp[i][j]);
            sum += temp[i][j];
        }
        avg[i]=sum/7.0;  
    }
    for (int i=0; i<m; i++)
    printf("%.2f ", avg[i]);
}