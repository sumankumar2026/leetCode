class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        int size = nums.size();
        for(int i = 0; i < size; i++){
            int remaining = target - nums[i];
            if(mp.find(remaining) != mp.end())
            return {mp[remaining],i};

            mp[nums[i]] = i;
        }
        return {};
    }
};