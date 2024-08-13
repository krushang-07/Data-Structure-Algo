class Solution {
public:
    string removeDuplicates(string s) {
        int p1 = 0;
        int p2 = 1;
        while (p2 < s.length()) {
            if (s[p1] == s[p2]) {
                s.erase(p1, 2);  // Erase the duplicate pair
                if (p1 > 0) p1--;  // Move p1 back to recheck the previous characters
                p2 = p1 + 1;  // Set p2 to the next character
            } else {
                p1++;
                p2++;
            }
        }
        return s;
    }
};
