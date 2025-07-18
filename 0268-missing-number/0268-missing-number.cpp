class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int missingNum = 0;
        int sumNum = 0;
        int size = nums.size();
        int totalSumNum = size * (size + 1)/2;
        for(int i = 0; i < size; i++){
            sumNum = sumNum + nums[i];
        }
        missingNum = totalSumNum - sumNum;
        return missingNum;
    }
};