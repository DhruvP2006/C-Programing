#include <vector>
#include <algorithm>
#include <cmath>

class Solution {
public:
    void generateSums(const std::vector<int>& nums, std::vector<long long>& sums) {
        sums.push_back(0);
        for (int num : nums) {
            int n = sums.size();
            for (int i = 0; i < n; ++i) {
                sums.push_back(sums[i] + num);
            }
        }
    }

    int minAbsDifference(std::vector<int>& nums, int goal) {
        int n = nums.size();
        std::vector<int> leftPart, rightPart;
        
        for (int i = 0; i < n; ++i) {
            if (i < n / 2) leftPart.push_back(nums[i]);
            else rightPart.push_back(nums[i]);
        }
        
        std::vector<long long> leftSums, rightSums;
        generateSums(leftPart, leftSums);
        generateSums(rightPart, rightSums);
        
        std::sort(rightSums.begin(), rightSums.end());
        
        long long minDiff = std::abs(goal); 
        for (long long sL : leftSums) {
            long long targetR = (long long)goal - sL;
            
            auto it = std::lower_bound(rightSums.begin(), rightSums.end(), targetR);
            
            if (it != rightSums.end()) {
                minDiff = std::min(minDiff, std::abs(goal - (sL + *it)));
            }
            
            if (it != rightSums.begin()) {
                minDiff = std::min(minDiff, std::abs(goal - (sL + *std::prev(it))));
            }
            
            if (minDiff == 0) return 0;
        }
        
        return (int)minDiff;
    }
};