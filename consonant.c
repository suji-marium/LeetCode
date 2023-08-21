// qn 8

#include <stdio.h>
#include <string.h>
int main()
{
    char s[100][100];
    int count[10]={0},c=0;
    int n;
    
    printf("Enter number of strings in the array: ");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
        scanf("%s",s[i]);
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<strlen(s[i]);j++)
        {
            if(s[i][j]=='A' || s[i][j]=='E'|| s[i][j]=='I'|| s[i][j]=='O' || s[i][j]=='U' || s[i][j]=='a' || s[i][j]=='e' || s[i][j]=='i' || s[i][j]=='o' || s[i][j]=='u')
                count[i]=1;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        if(count[i]==0)
            c++;
    }
    
    printf("No of strings containing only consonants is %d",c);
}
