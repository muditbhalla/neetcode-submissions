/*
class Solution {
    public boolean hasDuplicate(int[] nums) {
        Set<Integer> set = new HashSet<>(nums.length);
        for (int x: nums)
        {
            if (!set.add(x))
            {
                return true;
            }
        }
        return false;
    }
}
*/
//Solution 2 for hardware sensitive applications
class Solution {
    public boolean hasDuplicate(int[] nums) {
        Arrays.sort(nums);
        for (int i =1; i<nums.length; i++)
        {
            if (nums[i] == nums[i-1]) return true;
        }
        return false;
    }
}
