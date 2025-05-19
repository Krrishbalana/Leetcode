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
