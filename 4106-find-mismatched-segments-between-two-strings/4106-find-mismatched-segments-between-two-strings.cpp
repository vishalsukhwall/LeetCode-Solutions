#include <vector>
#include <string>

class Solution {
public:
    std::vector<std::vector<std::string>> findMismatchedSegments(std::string s1, std::string s2) {
        std::vector<std::vector<std::string>> result;
        int n = s1.length();
        int i = 0;
        
        while (i < n) {
            if (s1[i] != s2[i]) {
                int start = i;
                while (i < n && s1[i] != s2[i]) {
                    i++;
                }
                result.push_back({s1.substr(start, i - start), s2.substr(start, i - start)});
            } else {
                i++;
            }
        }
        
        return result;
    }
};