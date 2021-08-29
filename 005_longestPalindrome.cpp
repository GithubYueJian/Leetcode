class Solution {
public:
/*    
    bool isPalindrome(string s) {
	int i = 0, j = s.size() - 1;
	while (i < j)
	{
		if (s[i] != s[j])
			return false;
		j--;
		i++;
	}
	return true;
}

    string longestPalindrome(string s) {
        if(s.size()<2)
        return s;
    string substring;
	string temp;
	for (int i = 0; i < s.size(); i++)
	{
		for (int j = i; j < s.size(); j++)
		{
			temp = s.substr(i, j - i+1);
            if(temp.size()<substring.size())
                continue;
			if (isPalindrome(temp))
				substring =  temp.size()> substring.size() ? temp : substring;
		}
	}
	return substring;

    }

*/

   int expandcenter(string s, int left, int right)
{
	int L = left, R = right;
	while (L >= 0 && R < s.size() && s[L] == s[R])
	{
			L--;
			R++;
	}
	return R - L - 1;
}

string longestPalindrome(string s)
{
	if (s.size() < 2)
		return s;
	int len = 0;
	int start = 0, end = 0;
	for (int i = 0; i < s.size(); i++)
	{

		int len1 = expandcenter(s, i, i);
		int len2 = expandcenter(s, i, i+1);
		len = max(len, max(len1, len2));
		if (len > (end - start + 1))
		{
			start = i - (len-1) / 2;
			end = i + len / 2;
		}

	}
	return s.substr(start, len);
}
};
