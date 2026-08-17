using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        int arr1[26] = {0};
        int arr2[26] = {0};
        char temp;
        int tempint;
        for (int i=0; i<s.length(); i++)
        {
            temp = s[i];
            tempint = int(temp)-97;
            arr1[tempint]++;

            temp = t[i];
            tempint = int(temp)-97;
            arr2[tempint]++;

        }
        bool flag = true;
        for (int i =0; i<26; i++)
        {
            if (arr1[i] != arr2[i]) flag = false;
        }
        return flag;
    }
};


