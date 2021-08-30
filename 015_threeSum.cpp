class Solution {
public:
vector<vector<int>> threeSum(vector<int>& nums) {
	vector<vector<int>> ans;
	if (nums.size() < 3 || nums.empty())
		return ans;
	sort(nums.begin(), nums.end());
	int i = 0;
	while (i < nums.size())
	{
		if (nums[i] > 0)
			break;
		int left = i + 1, right = nums.size() - 1;
		while (left < right)
		{
			if ((nums[left] + nums[right]) > (0 - nums[i]))
				right--;
			else if ((nums[left] + nums[right]) < (0 - nums[i]))
				left++;
			else
			{
				ans.push_back({ nums[i],nums[left] ,nums[right] });
				while (left < right && nums[left] == nums[left + 1])
					left++;
				while (left < right && nums[right] == nums[right - 1])
					right--;
				left++;
				right--;
			}
		}
		while (i + 1 < nums.size() && nums[i] == nums[i + 1])
			i++;
		i++;
	}
	return ans;

}
};
