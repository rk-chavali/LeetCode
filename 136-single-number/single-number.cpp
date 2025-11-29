class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int c=0;
        for(int v : nums){
            c=c ^ v;
        }

        return c;
    }
};