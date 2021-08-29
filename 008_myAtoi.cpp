class Solution {
public:
    int myAtoi(string s) {
        int y=0,i=0;
        int flag = 1;
        while(s[i]==' ')
            i++;
        if(s[i]=='-')
            flag=-1;
        if(s[i]=='-'||s[i]=='+')
            i++;
        while(i<s.size() && isdigit(s[i]))
        {
            int temp = s[i]-'0';
            if(y>INT_MAX/10 || (y==INT_MAX/10 &&temp>7))
                return flag<0? INT_MIN:INT_MAX;
            y=y*10+temp;
            i++;

        }
        
  
       return flag==-1? -y:y;
    }
};
