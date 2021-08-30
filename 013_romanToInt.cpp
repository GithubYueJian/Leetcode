class Solution {
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> map = 
        {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000},
        }; 
    int j=s.size()-1;
    int temp = 0;
    int result = 0;
    while(j>=0)
    {
        if(temp>map[s[j]])
        {
            result -= map[s[j]];
            temp =map[s[j]];
        }
        else
        {
            result += map[s[j]];
            temp =map[s[j]];
        }
        j--;
    }
    return result;

    }
};
