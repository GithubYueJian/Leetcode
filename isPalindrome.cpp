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
};
