class Solution {
public:
int abs(int a) { return a < 0 ? -a : a; }
int threeSumClosest(vector<int>& nums, int target) 
{
	if (nums.empty() || nums.size() < 3)
		return -1;
	int ans = nums[0]+ nums[1]+ nums[2];
	sort(nums.begin(), nums.end());
	for (int i = 0; i < nums.size() - 2; i++)
	{
		int left = i + 1, right = nums.size() - 1;
		while (left < right)
		{
			int sum = nums[i] + nums[left] + nums[right];
			if(abs(sum-target)<abs(ans-target))
				ans = sum;
			if (sum == target)
				return sum;
			else if (sum < target)
				left++;
			else if (sum > target)
				right--;
		}
	}
	return ans;
}
};
