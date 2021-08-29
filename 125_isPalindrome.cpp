class Solution {
public:
    bool isPalindrome(string s) {
        string s1;
	    bool b = false;
	    for(auto c : s) {
		    if (isalnum(c))   
		    {
                c = tolower(c);
			    s1.push_back(c);
		    }	
	}

     if(s1.size()==0 || s1.size() ==1)
           return true;
	    //cout << s1<<endl;
	    int i = 0, j = s1.size() - 1;
	    while (i<j)
	    {
		    if (s1[i] == s1[j])
		    {
			    b = true;
			    i++;
			    j--;
		    }
		    else
		    {
			    b = false;
			    break;
		    }
	}
	return b;
    }
};
