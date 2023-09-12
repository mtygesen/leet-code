// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        
        int max = 0;
        int l = 0; 

        for (int r = 0; r < s.length(); ++r) {
            if (!mp.contains(s[r]) || mp[s[r]] < l) {
                mp[s[r]] = r;
                max = std::max(max, r - l + 1);
            }
            else {
                l = mp[s[r]] + 1;
                mp[s[r]] = r;
            }
        }

        return max;
    }
};
