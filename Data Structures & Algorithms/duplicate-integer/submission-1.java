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