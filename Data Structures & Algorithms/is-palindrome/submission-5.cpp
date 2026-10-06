class Solution {
public:

    bool isValid(char c) {
        if(
            (c >= 'a' && c <= 'z') ||
            (c >= 'A' && c <= 'Z') ||
            (c >= '0' && c <= '9')
        ) return true;

        return false;
    }

    bool isPalindrome(string s) {
        string str = "";

        for(char c : s) {
            if(isValid(c)) str += c;
        }

        int i = 0, j = str.size()-1;

        while(i < j) {
            if( tolower(str[i]) != tolower(str[j]) ) return false;

            i++, j--;
        }

        return true;
    }
};
