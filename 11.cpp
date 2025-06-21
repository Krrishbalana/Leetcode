//brute force approach

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater = 0;
        int n = height.size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                int base = j - i;
                int length = min(height[j], height[i]);
                int area = base * length;
                maxwater = max(area, maxwater);
            }
        }
        return maxwater;
    }
};
//2-pointer approach
class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp = 0, rp = height.size() - 1;
        int maxwater = 0;
        while(lp < rp){
            int base = rp - lp;
            int length = min(height[rp], height[lp]);
            int area = base * length;
            maxwater = max(maxwater, area);
            if(height[lp] < height[rp]){
                lp++;
            }else{
                rp--;
            }
        }
        return maxwater;
    }
};
