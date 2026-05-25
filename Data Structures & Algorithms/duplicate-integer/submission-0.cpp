class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
         unordered_set<int> mp;
         for(int x : nums){
            auto it= mp.find(x);
            if(it != mp.end())
                return true;
            else
                mp.insert(x);
        }
        return false;
    }
};