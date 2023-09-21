#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[100],temp,n;
    printf("Enter array size: ");
    scanf("%d",&n);
    
    printf("Enter array elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    
        
    int M,m;    
    M=abs(a[0]-a[n-1]);
    
    m=abs(a[0]-a[1]);
    for(int i=0;i<n;i++)
    {
        if(abs(a[i]-a[i+1]) <m)
            m=abs(a[i]-a[i+1]);
    }
    printf("\n%d",M);
    printf("\n%d",m);
    printf("\n%d",5*M-m);
}
