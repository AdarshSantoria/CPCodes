class Solution {
public:
    bool isIsomorphic(string s, string t) {
    vector<int> tr(128, 0),ta(128, 0);
    for (int i = 0; i < s.size(); i++)
    {
        if (tr[s[i]] == 0)
            tr[s[i]] = t[i];
        if (ta[t[i]] == 0)
            ta[t[i]] = s[i];
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (tr[s[i]] != t[i] || ta[t[i]]!=s[i])
            return false;
    }
    return true;
    }
};
