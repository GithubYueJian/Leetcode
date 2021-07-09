class Solution {
public:
    string longestCommonPrefix(vector<string>& strs)
    {
        string CommonPrefix=strs[0];
        if(strs.size()==1)
            return CommonPrefix;
        for(int i=1;i<strs.size();++i)
        {
            CommonPrefix=get_CommonPrefix(CommonPrefix,strs[i]);
           
        }

        return CommonPrefix;
    }


    string get_CommonPrefix(string & str1,string & str2)
    {
        int count = min(str1.size(),str2.size());
        string CommonPrefix = "";
        for(int i=0;i<count;++i)
        {
            if(str1[i]==str2[i])
            {
                CommonPrefix = str1.substr(0,i+1);
            }
            else
                break; 
        }
 
        return CommonPrefix;
    }
};
