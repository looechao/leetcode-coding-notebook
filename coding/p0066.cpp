class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        add(digits,digits.size()-1);
        return digits;
    }
    void add(vector<int>& vec,int x){
        if(vec[x]<9)
        {
            vec[x]++;
        }
        else
        {
            if(x!=0){
                vec[x]=0;
                return add(vec,x-1);
            }
            if(x==0)
            {
                vec[x]=0;
                vec.insert(vec.begin(),1);
            }
        }
    }
};

