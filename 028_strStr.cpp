class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = haystack.size();
        int n = needle.size();
        if(haystack==needle)
        return 0;
        string substring;
        for(int i=0;i<m-n+1;i++)
        {
            substring = haystack.substr(i,n);
            if(substring==needle)
            return i;
        }
        return -1;

    }
};
