class Solution {
public:
    /*
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);
        for(int i=0;i<nums.size();++i)
        {
            for(int j=i+1;j<=nums.size()-1;++j)
            {
                if((nums[i]+nums[j])==target)
                {
                    ans[0]=i;
                    ans[1]=j;
                }
               
            }
        }
    return ans;
    }
    */
    
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
