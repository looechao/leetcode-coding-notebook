#include<cstring>

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string lcp;
        int minimum_length = 200;
        for(int i=0;i<strs.size();i++)
        {
            if(strs[i].size()<=minimum_length){
                minimum_length=strs[i].size();
            }
        }
        if(strs.size()==1){
            return strs[0];
        }
        for(int i=0;i<minimum_length;i++){
            for(int j=1;j<strs.size();j++){
                if(strs[j].at(i)!=strs[j-1].at(i)){
                    return lcp;
                }
            }
            lcp.push_back(strs[0].at(i));
        }
        return lcp;
    }
};
