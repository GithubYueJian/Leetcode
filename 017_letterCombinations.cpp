class Solution {
public:
void backtracking(string& digits, unordered_map<char, string> phoneMap,
                   int layers,vector<string>& combinations,string& combination)
{
    if (layers == digits.size())
    {
        combinations.push_back(combination);
        
       // return;
    }
    else
    {
        char digit = digits[layers];
        string letters = phoneMap[digit];
        for (auto letter : letters)
        {
            combination += letter;
            backtracking(digits, phoneMap, layers + 1, combinations, combination);
            combination.pop_back();
        }
    }
    
}
vector<string> letterCombinations(string digits)
{
    vector<string> combinations;
    string combination;
    if(digits.size()==0)
    return combinations;
    unordered_map<char, string> phoneMap{
                {'2', "abc"},
                {'3', "def"},
                {'4', "ghi"},
                {'5', "jkl"},
                {'6', "mno"},
                {'7', "pqrs"},
                {'8', "tuv"},
                {'9', "wxyz"}
    };

    backtracking(digits, phoneMap, 0, combinations, combination);
    return combinations;

}
};
