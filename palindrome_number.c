/*
Given an integer x, return true if x is a palindrome, and false otherwise.
Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
*/

bool isPalindrome(int x)
{
    char str[100];
    int flag=0;
    sprintf(str,"%d",x);
    int len=strlen(str);
    
    for(int i=0;i<len;i++)
    {
        if(str[i]!=str[len-i-1])
            flag=1; 
    }
    if(flag==0)
        return(true);
    else
        return(false);
}
