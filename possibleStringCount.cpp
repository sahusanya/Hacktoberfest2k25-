class Solution {
public:
    int possibleStringCount(string word) {
        int cnt=1;
        for (int i=0; i < word.length(); i++) {
            if(i!=0 && word[i] == word[i-1]) {
                cnt++;
            }
        }
        return cnt;
    }
};
