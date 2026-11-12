class Solution {
public:
    bool isAnagram(string s, string t) {
         if (s.length() != t.length()) {
        return false;
    }

    unordered_map<char, int> m1;
    for (int i = 0; i < s.length(); i++) {
        m1[s[i]]++;
        m1[t[i]]--;
    }

    // return all_of(m1.begin(), m1.end(), [](const pair<char, int> &p) {
    //     return p.second == 0;
    // });
    for (auto const &[k,v]: m1) {
        if (v != 0) {
            return false;
        }
    }
    return true;
    }
};
