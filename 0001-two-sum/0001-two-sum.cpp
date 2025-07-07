class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    int complement = 0;
    unordered_map<int,int> umap;
    for(int i = 0; i < nums.size(); i++){
        complement = target - nums[i];

        if(umap.find(complement) != umap.end()){
            return {umap[complement] , i};
        }

        umap[nums[i]] = i;
    }
    return {};      
    }
};