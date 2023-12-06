class Solution {
private:
    char lowerCase(char c)
    {
        if (islower(c) || isdigit(c)){
            return c;
        }
        else
            return tolower(c);
    }

    bool validChar(char ch)
    {
        if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9') || (ch >= 'A' && ch <= 'Z'))
        {
            return true;
        }
        return false;
    }

    bool palindrome(string temp)
    {
        int s = 0;
        int e = temp.length() - 1;

        while(s <= e)
        {
            if(temp[s] != temp[e])
            {
                return false;
            }
            else{
                s++;
                e--;
            }
        }
        return true;
    }
public:
    bool isPalindrome(string s) {
        string temp;

        for(int i = 0; i < s.length(); i++)
        {
            if(validChar(s[i]))
            {
                temp.push_back(s[i]);
            }
        }

        for(int i = 0; i < temp.length(); i++)
        {
            temp[i] = lowerCase(temp[i]);
        }

        return palindrome(temp);

    }
};
// https://leetcode.com/problems/valid-palindrome/