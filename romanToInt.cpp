class Solution {
private:
    unordered_map<char,int> roman_map=
    {
        {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000},
    };
public:
    int romanToInt(string s) 
    {
        int y =0;
        for(int i=0;i<s.size();++i)
        {
           if((i!=(s.size()-1))&&(roman_map[s[i]]<roman_map[s[i+1]]))
           {
               y=y-roman_map[s[i]];
           }
           else
           {
               y=y+roman_map[s[i]];
           }
        }
        return y;

    }
};
