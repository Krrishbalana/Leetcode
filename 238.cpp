//brute force approach
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n , 1);
        for(int i = 0; i < n; i++){
            int product = 1;
            for(int j = 0; j < n; j++){
                if(i != j){
                    product = product * nums[j];
                }
            }
            ans[i] = product;
        }
        return ans;
    }
};

//approach with better time complexity
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);
        vector<int> prefix(n, 1);
        vector<int> suffix(n, 1);


        //prefix
…        //ans
        for(int i = 0; i < n; i++){
            ans[i] = prefix[i] * suffix[i];
        }


        return ans;
    }
};
