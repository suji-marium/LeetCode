class Solution {
    public int lengthOfLongestSubstring(String s) {

        String longestSubString;
        int maxLen=0;

        Map<Character,Integer> map=new HashMap<>();
        char[] arr=s.toCharArray();

        for(int i=0;i<arr.length;i++){
            char ch=arr[i];
            if(!map.containsKey(ch)){
                map.put(ch,i);
            }
            else{
                i=map.get(ch);
                map.clear();
            }
            if(map.size() > maxLen ){
                maxLen=map.size();
                longestSubString=map.keySet().toString();
            }
        }
        return maxLen;
    }   
}
