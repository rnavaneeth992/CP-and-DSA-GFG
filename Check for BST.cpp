class Solution {
public:
    void median(vector<int> nums,vector<int> &r,int l,int h)
    {
        if(l<=h)
        {
            r.push_back(nums[l+(h-l)/2]);
        }
        else
        {
            return;
        }
        median(nums,r,l,l+(h-l)/2-1);
        median(nums,r,l+(h-l)/2+1,h);
    }
    vector<int> sortedArrayToBST(vector<int>& nums) {
        // Code here
        vector<int> result;
        median(nums,result,0,nums.size()-1);
        return result;
    }
};
