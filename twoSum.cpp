class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash_map;
        for(int index_i = 0;index_i<nums.size();++index_i)
        {
            auto it = hash_map.find(target-nums[index_i]);
            if(it!=hash_map.end())
            {
                return {it->second,index_i};
            }
            hash_map[nums[index_i]]=index_i;
        }

        return {};
    }
};
