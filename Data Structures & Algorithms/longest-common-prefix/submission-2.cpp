class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s;
        int j ;
        for(int i =0; i< strs[0].size(); i++){
            for( j=1; j< strs.size(); j++){
                if(strs[j][i]!= strs[0][i])
                    return s;
            }
            if(j==strs.size())
                s += strs[0][i];
        }
        return s;
    }
};