/*
* Purpose: findSubstring,LeetCode 30
* Author: Jian Yue
* Data:   2022/04/07,revised ----/--/--
* Refrence: ***
*/


#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;

//思路：建立两个哈希表，判断两个哈希表是否相等
vector<int> findSubstring(string s, vector<string>& words) {
    vector<int> ans;
    unordered_map<string, int> map;
    for (auto word : words)
            map[word]++;

    int windowLength = words[0].size() * words.size();
    int step = words[0].size();
    if (windowLength > s.size())
        return {};
    unordered_map<string, int> currentMap;
    for (int i = 0; i <= s.size() - windowLength; i = i + 1)
    {
        string currentWindow = s.substr(i, windowLength);
        for (int j = 0; j < windowLength; j = j + step)
        {
            string currentWord = currentWindow.substr(j, step);
            currentMap[currentWord] ++; 
        }
        if (map==currentMap)
            ans.push_back(i);
        currentMap.clear();
    }
    return ans;

}


int main()
{
    string s ("lingmindraboofooowingdingbarrwingmonkeypoundcake");
    vector<string> words({ "fooo","barr","wing","ding","wing" });
    vector<int> ans = findSubstring(s, words);
    
    return 0;
}
