class Solution {
public:
    int minOperations(string s) {
        int n = s.length();
        
        if (ranges::is_sorted(s)) {
            return 0;
        }

        if (n == 2) {
            return -1;
        }

        char mx = 'a', mn = 'z';
        for (int i = 0; i < n; i++) {
            mn = min(mn, s[i]);
            mx = max(mx, s[i]);
        }

        // 1 operation: min shuru mein ho ya max aakhri mein
        if (s[0] == mn || s[n - 1] == mx) {
            return 1;
        }

        // 2 operations: agar beech mein kahin bhi mn ya mx mil jaye
        for (int i = 1; i < n - 1; i++) {
            if (s[i] == mn || s[i] == mx) {
                return 2;
            }
        }

        // 3 operations: sirf tab jab mx shuru mein ho aur mn aakhri mein,
        // aur beech mein koi duplicate mn ya mx na ho
        if (s[0] == mx && s[n - 1] == mn) {
            return 3;
        }

        return 2;
    }
};