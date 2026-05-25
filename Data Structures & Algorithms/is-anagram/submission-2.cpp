class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mp_s, mp_t;
        for(char var_x : s){
            auto it = mp_s.find(var_x);
            if(it == mp_s.end())
                mp_s[var_x] = 1;
            else
                mp_s[var_x]++;
        }

        for(char var_x : t){
            auto it = mp_t.find(var_x);
            if(it == mp_t.end())
                mp_t[var_x] = 1;
            else
                mp_t[var_x]++;
        }

        if(mp_s == mp_t)
            return true;
        else
            return false;
    }
};
