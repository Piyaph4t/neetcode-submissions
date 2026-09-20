class Solution {
private :
public:
    bool hasDuplicate(vector<int>& nums) {
    
        unordered_set<int> mem; 
        
        for(auto &x:nums){
            if(mem.find(x) != mem.end()) return true;
            mem.insert(x);
        }

        return false;

    }
};
