class Solution {
private:
    string a;
    vector<string> aa;
public:

    string encode(vector<string>& strs) {
        for(auto x:strs){
            a+=x;
            aa.push_back(x);
        }
        return a;
    }

    vector<string> decode(string s) {
        return aa;
    }
};
