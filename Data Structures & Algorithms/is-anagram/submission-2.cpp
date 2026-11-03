class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        int sum[26] = {0};

        for (int i = 0; i < s.length(); i++){
            
            sum[ s[i] - 97 ]++;
            sum[ t[i] - 97 ]--;
        }

        for (int i = 0; i < 26; i++){
            cout << sum[i] << " , ";
            if (sum[i] != 0 ) return false;
        }
        return true;
    }
};
