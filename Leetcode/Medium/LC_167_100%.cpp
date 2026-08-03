// Leetcode_167: TWo sum II i.e arr[i] + arr[j] == target
// link : https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
// beats: 100%
// Example :Input: numbers = [2,7,11,15], target = 9
// Output: [1,2]
// Explanation: The sum of 2 and 7 is 9. Therefore, index1 = 1, index2 = 2. We return [1, 2].

// Code :

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int low = 0;
        int high = n-1;
        if (n < 2) {
            return {0,0};
        }
        while (low < high) {
            int sum = numbers[low] + numbers[high];
            if (sum == target) {
                return {low+1, high};
            }
            else if (sum > target) {
                high--;
                continue;
            }
            else {
                low++;
                continue;
            }
        }
        return {0,0};
    }
};
