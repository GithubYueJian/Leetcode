class Solution {
public:
    bool isPalindrome(int x)
     {  
        if(x<0)
            return false;
        else
        {
            int y=0;
            y=reverse(x);
            if(y==x)
                return true;
            else
                return false;

        }
    }

    int reverse(int x) 
    {
        int y=0;
        while(x!=0)
        {
            if((y>INT_MAX/10) || (y<INT_MIN/10))
            return 0; 
            y=y*10+x%10;
            x=x/10;     
             
        }
            return y;
    }
    
    /*
    
    bool isPalindrome(int x)
     {  
        if(x<0)
            return false;
        string s= to_string(x);
        return string_isPalindrome(s);
    }

    bool string_isPalindrome(string s)
    {
        int i = 0, j = s.size() - 1;
	while (i < j)
	{
		if (s[i] != s[j])
			return false;
		j--;
		i++;
	}
	return true;
    }
    
    */
};
