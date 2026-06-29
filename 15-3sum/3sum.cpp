#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int n = nums.size();
        
        // 1. Sort the array to efficiently handle duplicates and two-pointer math
        sort(nums.begin(), nums.end());
        
        // 2. Iterate through the array to fix the first element of our triplet
        for (int i = 0; i < n - 2; i++) {
            // Skip duplicate values for the first element to avoid identical triplets
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            
            // Optimization: If the current smallest number is positive, 
            // no three numbers can sum up to zero anymore.
            if (nums[i] > 0) {
                break;
            }
            
            // 3. Initialize two pointers for the remaining sub-array
            int left = i + 1;
            int right = n - 1;
            
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                
                if (sum == 0) {
                    // Valid triplet found
                    result.push_back({nums[i], nums[left], nums[right]});
                    
                    // Skip duplicates for the left pointer
                    while (left < right && nums[left] == nums[left + 1]) {
                        left++;
                    }
                    // Skip duplicates for the right pointer
                    while (left < right && nums[right] == nums[right - 1]) {
                        right--;
                    }
                    
                    // Move both pointers inward after finding a valid combination
                    left++;
                    right--;
                } 
                else if (sum < 0) {
                    // Sum is too small; move the left pointer to increase the value
                    left++;
                } 
                else {
                    // Sum is too big; move the right pointer to decrease the value
                    right--;
                }
            }
        }
        
        return result;
    }
};
