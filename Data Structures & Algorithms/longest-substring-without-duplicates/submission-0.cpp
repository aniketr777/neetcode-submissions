class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size(),ans=0;
        unordered_map<char,int>mp;
        int j=0,i=0;
        while(i<n){
            mp[s[i]]++;
            if(mp[s[i]]>1){
                while(mp[s[i]]>1){
                    mp[s[j]]--;
                    j++;
                }
            }
            ans=max(ans,i-j+1);
            i++;
        }
        return ans;
    }
};
