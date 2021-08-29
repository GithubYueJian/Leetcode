class Solution {
public:
    string convert(string s, int numRows) 
    {
    if (int(s.size()) <= numRows || numRows==1)
		return s;
	vector<string> rows(numRows);
	
	int curRow = 0;
	bool UpDown = false;
	for (auto c : s)
	{
		rows[curRow].push_back(c);
		if (curRow == 0 || curRow == numRows - 1) UpDown = !UpDown;
		curRow += UpDown ? 1 : -1;
	}

	
	string ret;
	for (auto str : rows)
	{
		ret += str;
	}
	
	return ret;



    }
};
