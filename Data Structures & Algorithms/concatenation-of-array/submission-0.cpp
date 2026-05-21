class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> nums_doubled(2*n);
        for(int i = 0; i < n; i++){
            nums_doubled[i]= nums[i];
            nums_doubled[i+n] = nums[i];
        }
    
    return nums_doubled;
    }
};