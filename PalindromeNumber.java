class Solution {
    public boolean isPalindrome(int x) {
        int res=0,rem,temp=x;
        String s=Integer.toString(x);
        int len=s.length();

        if(x<0)
            return false;
        else{
            while(temp>0){
                rem=temp%10;
                res=res*10+rem;
                temp=temp/10;
            }
            if(res==x){
                return true;
            }
            return false;
        }
    }
}
