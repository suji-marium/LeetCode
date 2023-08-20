// Given a number, if it is divisible by 5 divide it with 5 or if it is divisible by 3 divide it with 3 or if it is divisible by 2 divide it with 2 else subtract it with 1 and count the number of steps it takes to reach 0

#include <stdio.h>

int main()
{
    int num,count=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    
    while(num!=0)
    {
        if(num%5==0)
            num/=5;
            
        else if(num%3==0)
            num/=3;
        
        else if(num%2==0)
            num/=2;
        
        else
            num=num-1;
        printf("%d\n",num);
        count++;
    }
    
    printf("%d\n",count);
}
