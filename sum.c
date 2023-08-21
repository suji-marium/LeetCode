// Given a string consisting of lowercase alphabet. Find the number equivalent of all these alphabets. Find the sum of lowest 6 such values. If there are less than 6 elememts, find the sum of all the number values of the characters.

#include <stdio.h>
#include <string.h>
int main()

{
    char a[100];
    int num[100],sum=0;
    
    printf("Enter the string: ");
    scanf("%s",a);
   
    for(int i=0;i<strlen(a);i++)
        num[i]=a[i]-96;
    
    if(strlen(a)>6)
    {
        for(int i=0;i<6;i++)
            sum+=num[i];
    }
    else
    {
        for(int i=0;i<strlen(a);i++)
            sum+=num[i];
    }
    
    printf("%d",sum);
}
