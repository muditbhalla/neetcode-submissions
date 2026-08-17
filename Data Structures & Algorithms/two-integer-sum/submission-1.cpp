class Solution {
public:
    
    vector<int> twoSum(vector<int>& nums, int target) {
        int localbuffer;
        for(int i = 0; i<nums.size()-1; i++)
        {
            localbuffer = nums[i];
            vector<int> retnums = {0, 0};
            for (int j=i+1; j<nums.size(); j++)
            {
                if(localbuffer + nums[j] == target) return retnums = {i,j};
            }
        }
    }
};
