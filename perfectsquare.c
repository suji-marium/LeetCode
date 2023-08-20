//Return the number of perfect squares from an array of random numbers

#include <stdio.h>
#include <math.h>

int main()
{
    int arr[100],n,count=0;
    
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=arr[i];j++)
        
        {
            if(j*j==arr[i])
                count++;
        }
    }
    printf("Number of perfect square is %d",count);
}
