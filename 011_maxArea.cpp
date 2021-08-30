class Solution {
public:
    int min(int a, int b) { return a < b ? a : b; }
    int max(int a, int b) { return a > b ? a : b; }
    int maxArea(vector<int>& height) 
    {
    	int max_valume = 0, curr_valume = 0;
	    int i = 0, j = height.size()-1;
	    while (i < j)
	    {
		    curr_valume = min(height[i], height[j])*(j - i);
		    max_valume = max(max_valume, curr_valume);
		    if (height[i] < height[j])
			    i++;
		    else
			    j--;
    	}
	return max_valume;

    }
};
