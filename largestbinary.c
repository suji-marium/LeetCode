#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

    int m,n,a[100][100];
    printf("Enter number of rows: ");
    scanf("%d",&m);
    printf("Enter number of columns: ");
    scanf("%d",&n);
    
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
            
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    
    int l=m*n;
    int k=l-1,x=0;
    
    char s[l];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]==0)
            {
                s[k]='0';
                k--;
            }
            else 
            {
                s[x]='1';
                x++;
            }
        }
    }
    
    int val=atoi(s),b=0,rem,res=0;
    printf("%d\n",val);
    while(val!=0)
    {
        rem=val%10;
        res=res+pow(2,b)*rem;
        b++;
        val=val/10;
    }
    printf("%d\n",res);
    printf("%d",res%1000000007);
}
