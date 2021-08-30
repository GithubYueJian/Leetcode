class Solution {
public:
    int min(int a, int b) { return a < b ? a : b; }
    string get_CommonPrefix(string & str1, string & str2)
    {
	    int count = min(str1.size(), str2.size());
	    int i = 0;
	    while (i < count && str1[i] == str2[i])
	    {
	    	i++;
	    }
        return str1.substr(0, i );
    }
    string longestCommonPrefix(vector<string>& strs)
    {
	    if (strs.size() == 0)
		    return "";
	    if (strs.size() == 1)
	    	return strs[0];
	string CommonPrefix = strs[0];

	for (int i = 1; i  < strs.size(); i++)
	{
		CommonPrefix = get_CommonPrefix(CommonPrefix, strs[i]);
	}

	    return CommonPrefix;
    }
};
