// Sorting the elements of araay using bubble sort

#include<stdio.h>
int main()
{
    int n,a[30],i,j,swap;
    printf("Enter the no. of elements: ");
    scanf("%d", &n);
    printf("\nEnter the elements of array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    // Bubble sort
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap=a[j];
                a[j]=a[j+1];
                a[j+1]=swap;
            }
        }
    }
    printf("\nThe sorted lelements of array are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
