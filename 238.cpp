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


// approach with better time and space complexity
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);
        // vector<int> prefix(n, 1);
        // vector<int> suffix(n, 1);
        int prefix = 1;
        int suffix = 1;
        //prefix => ans
        for(int i = 1; i < n; i++){
            ans[i] = ans[i-1] * nums[i-1]; 
        }

        //suffix
        for(int i = n-2; i >= 0; i--){
            suffix *= nums[i+1];
            ans[i] = suffix * ans[i];
        }


        return ans;
    }
};
