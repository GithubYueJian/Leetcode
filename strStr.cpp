class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle=="" || haystack==needle)
            return 0;

        int l1=haystack.size();
        int l2=needle.size();
        for(int i=0;i<=l1-l2;++i)
        {
            bool flag=true;
            for(int j=0;j<l2;++j)
            {
                if(needle[j]!=haystack[i+j])
                {
                    flag=false;
                }
            }
            if(flag)
                return i;
        }
        return -1;

    }
};
