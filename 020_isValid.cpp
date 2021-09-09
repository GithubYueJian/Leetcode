class Solution {
    unordered_map<char,char> pairs={
        {'(',')'},
        {'[',']'},
        {'{','}'},
    };
    
public:
    bool isValid(string s) 
    {
        stack<char> operators;
        if((s.size()%2==1)||(s.size()==0))
            return false;
        else
        {
            
            for(int i=0;i<s.size();++i)
            {
                if(operators.empty())
                     operators.push(s[i]);
                else
                {
                if(pairs[operators.top()]!=s[i])
                    operators.push(s[i]);
                else
                    operators.pop();
                }
                
            }
        }
        if(operators.empty())
            return true;
        else
            return false;

    }
};
