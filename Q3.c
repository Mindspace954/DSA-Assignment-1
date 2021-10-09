#include<stdio.h>

int main()
{
    int r, c;
    //Order of Matrix = Row X Column
    printf("Enter the order of 2D matrix: \n");
    scanf("%d %d", &r, &c);
    int a[r][c];
    printf("Enter the elements: \n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
            scanf("%d",&a[i][j]);
    }

    int n=r*c;
    int b[n];
    int m=0;
    printf("Input Array:\n");
    //Row-Major Order
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            b[m]=a[i][j];
            m++;
        }
    }
    printf("\n Final Array:\n");
    for(int i=0;i<n;i++)
        printf("%d ",b[i]);
}
