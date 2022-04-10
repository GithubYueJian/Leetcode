/*
* Purpose: isValid,LeetCode 20
* Author: Jian Yue
* Data:   2021/09/09,revised 2022/04/10
* Refrence: ***
*/


#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<algorithm>
#include<stack>
using namespace std;

unordered_map<char, char> umap = {
    {'(',')'},
    {'[',']'},
    {'{','}'},
};
bool isValid(string s)
{
    stack<char> stk;
    //如果字符串长度为0，返回true
    if (s.size() == 0)
        return true;
    //如果字符串长度是奇数，返回false
    if (s.size() % 2 == 1) 
        return false;
    else
    {

        for (int i = 0; i < s.size(); ++i)
        {
            if (stk.empty())
                stk.push(s[i]);
            else
            {
                //判断当前字符与栈顶元素是否匹配
                if (s[i] == umap[stk.top()])
                    stk.pop();
                else
                    stk.push(s[i]);
            }

        }
    }
    // 最后栈中没有元素，表示完全匹配
    return stk.empty();

}



int main()
{
    bool test = isValid("()");
    test = isValid("()[]{}");
    test = isValid("(]");
    test = isValid("([)]");
    test = isValid("{[]}");
    test = isValid(")(]");
    test = isValid("((((]");

    
    return 0;
}
