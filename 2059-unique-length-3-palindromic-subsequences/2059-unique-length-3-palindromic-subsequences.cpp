class Solution {
public:
    int countPalindromicSubsequence(string s) {
        vector<int> cnt(26, -1);
        vector<vector<bool>> check(26, vector<bool>(26));
        vector<vector<bool>> ck(26, vector<bool>(26));
        int n = s.length();
        int ans = 0;
        for (int i = 0; i < n; i++){
            int idx = s[i] - 'a';

            for (int i = 0; i < 26; i++)
                if (cnt[idx] != -1 && ck[idx][i] && !check[idx][i]){
                    ans++;
                    check[idx][i] = true;
                }

            for (int i = 0; i < 26; i++)
                if (cnt[i] != -1)
                    ck[i][idx] = true;

            if (cnt[idx] == -1)
                cnt[idx] = i;
        }
        return ans;
    }
};