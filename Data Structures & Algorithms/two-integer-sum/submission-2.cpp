class Solution {
public:
    
    vector<int> twoSum(vector<int>& nums, int target) {
        int localbuffer1, localbuffer2;
        
        for(int i = 0; i<nums.size()-1; i++)
        {
            localbuffer1 = nums[i];
            vector<int> retnums = {0, 0};
            for (int j=i+1; j<nums.size(); j++)
            {
                localbuffer2 = nums[j];

                if(localbuffer1 + localbuffer2 == target) return retnums = {i,j};
            }
        }
    }
};
