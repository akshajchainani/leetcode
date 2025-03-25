class Solution {
public:
    string longestPalindrome(string s) {
        int maxLength{ 0 };
        int lmax{};
        int rmax{};
        int slen{ static_cast<int>(s.length()) };
        std::string maxstr{};
        for (int i = 0; i < slen-1; ++i)
        {
            if (s[i] == s[i+2])
            {
                int l{ i };
                int r{ i+2 };
                while (l < r && r <= slen-1 && l >= 0)
                {
                    if (s[l] != s[r])
                    {
                        break;
                    }
                    --l;
                    ++r;
                }
                maxLength = std::max(maxLength, r-l-1);
                if (r-l-1 == maxLength)
                {
                    lmax = l+1;
                    rmax = r-1;
                }
            }
        }
        maxstr = s.substr(lmax, rmax-lmax+1);

        for (int i = 0; i < slen-1; ++i)
        {
            if (s[i] == s[i+1])
            {
                int l{ i };
                int r{ i+1 };
                while (l < r && r <= slen-1 && l >= 0)
                {
                    if (s[l] != s[r])
                    {
                        break;
                    }
                    --l;
                    ++r;
                }
                maxLength = std::max(maxLength, r-l-1);
                if (r-l-1 == maxLength)
                {
                    lmax = l+1;
                    rmax = r-1;
                }
            }
        }
        maxstr = s.substr(lmax, rmax-lmax+1);

        return maxstr;
    }
};