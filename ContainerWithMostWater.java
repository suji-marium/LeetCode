class Solution {
    public int maxArea(int[] height) {
        int left=0,right=height.length-1,currentHeight,currentWidth,currentArea,maxA=0;

        while(left<right){
            currentHeight=Math.min(height[left],height[right]);
            currentWidth=right-left;
            currentArea=currentHeight*currentWidth;
            maxA=Math.max(currentArea,maxA);

            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxA;
    }
}
