class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        long long diff=0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            diff+=abs(nums[0]-nums[i]);
        }
        return diff;
    }
};