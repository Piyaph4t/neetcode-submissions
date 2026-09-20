class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len=nums.size()-1;
        vector<int> ps(len+1,1); 
        
        int prod =1;

        for(int i=len-1;i>=0;i--){
        //    cout << nums[i+1] << " x " << ps[i+1] << endl;
            ps[i]=ps[i+1]*nums[i+1];
        }
        for(int i=0;i<len;i++){
            ps[i]*=prod;
            prod*=nums[i];
        }
        ps.back() = prod;
        //for(auto &x:ps) cout << x << " "; cout << endl;
        return ps;
    }
};
