class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return 0;
        vector<int> a(26,0),b(26,0);
        int i=s.length();
        while(i--) {
            a[s[i]-'a']++;
            b[t[i]-'a']++;
        }
        for(int j=0;j<26;j++)
            if(a[j]!=b[j]) return 0;
        
        return 1;
    }
};
