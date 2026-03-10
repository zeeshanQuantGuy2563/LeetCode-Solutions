class Solution {
public:
    int maxArea(vector<int>& height) {
        int n= height.size();
        int area=0;
        int st=0;
        int end=n-1;
        while(st<end){
            int length=min(height[st],height[end]);
            int bredth=end-st;
            area=max(area,length*bredth);
            height[st]<height[end]? st++:end--;
        }
        return area;
    }
};