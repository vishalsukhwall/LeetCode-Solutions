class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int min_odd = INT_MAX;
        int min_even = INT_MAX;
        
        for (int x : nums1) {
            if (x % 2 != 0) {
                min_odd = min(min_odd, x);
            } else {
                min_even = min(min_even, x);
            }
        }
        
        // If all elements are already the same parity (all odd or all even)
        if (min_odd == INT_MAX || min_even == INT_MAX) {
            return true;
        }
        
        for (int x : nums1) {
            if (x % 2 == 0) {
                // An even number must be greater than the minimum odd number
                // so we can subtract the min_odd to make it odd.
                if (x < min_odd) {
                    return false;
                }
            }
        }
        
        return true;
    }
};