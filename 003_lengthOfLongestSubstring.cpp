
class Solution {
public:
    int max(int a,int b){return a>b? a:b;}
    /*int lengthOfLongestSubstring(string s) {

        unordered_set<char> lookup;

        int length{0};

        for(int i=0;i<s.size();++i)
        {
    
            for(int j =i;j<s.size();++j)
            {
                if(lookup.find(s[j])!=lookup.end())
                {
                    length = max(length,lookup.size());
                    lookup.clear();
                    break;
                }
                else
                {
                    lookup.insert(s[j]);
                }

            }
        }
        if(lookup.size()!=0)
            length = max(length,lookup.size());

        return length;

    }
    */

    int lengthOfLongestSubstring(string s) {

        unordered_set<char> lookup;

        int length{0};
        int left{0};

        for(int i=0;i<s.size();++i)
        {
            while(lookup.find(s[i])!=lookup.end())
            {
                lookup.erase(s[left]);
                ++left;
            }
            length = max(length,i-left+1);
            lookup.insert(s[i]);
        }


        return length;

    }
};
