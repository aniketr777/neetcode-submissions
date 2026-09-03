class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>st;
        for(auto ele: nums){
            if(st.find(ele)!=st.end()){
                return true;
            }else st.insert(ele);
        }
        return 0;
    }
};