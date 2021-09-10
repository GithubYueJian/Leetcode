class Solution {
public:

void dfs(int n, string& path, vector<string>& res, int& open, int& close)
{
	if (open > n || close > open)
		return;
	if (path.size() == 2 * n)
	{
		res.push_back(path);
		return;
	}
	path += "(";
	open++;
	dfs(n, path, res, open, close);
	path.pop_back();
	open--;
	path += ")";
	close++;
	dfs(n, path, res, open, close);
	path.pop_back();
	close--;

}
vector<string> generateParenthesis(int n)
{

	string path;
	vector<string> res;
	int open{ 0 };
	int close{ 0 };
	dfs(n, path, res, open, close);
	return res;

}

//reference https://www.bilibili.com/video/BV1MA411L7h3?p=3&spm_id_from=pageDriver
};
