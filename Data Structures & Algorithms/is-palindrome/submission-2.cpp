class Solution {
public:
    bool isPalindrome(string s) {
        string strp = "";
        int length = s.length();
        bool flag = true;
        char element;

        for (int i = 0; i<length; i++)
        {
            if (s[i] >= '0' && s[i] <= '9')
            {
                strp += s[i]; //concatinating
            }else 
            {
                element = s[i];
                if (element >= 'a' && element <= 'z'){
                    strp += element;
                }
                if (element >= 'A' && element <= 'Z')
                {
                    strp += tolower(element);
                }
            }
        }
        int length_p = strp.length();
        for (int i =0, j=length_p-1 ; i<length_p; i++, j--)
        {
            if (strp[i] != strp[j]) flag = false;
        }
        return flag;
    }
};
