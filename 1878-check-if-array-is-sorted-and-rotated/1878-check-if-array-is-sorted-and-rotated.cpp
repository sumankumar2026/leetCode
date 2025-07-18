class Solution {
public:
    bool check(vector<int>& nums) {
        int breakPoint = 0;
        int size = nums.size();
        for(int i = 0; i < size - 1; i++){
            if(nums[i] > nums[i + 1])
                breakPoint++;
        }
         if(nums[size - 1]  > nums[0])
                breakPoint++;
        return (breakPoint <= 1);
    }
};