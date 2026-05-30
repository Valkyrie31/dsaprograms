#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int, int> freq;
        vector<int> result;

        // Store frequency of nums1 elements
        for (int num : nums1) {
            freq[num]++;
        }

        // Check nums2 elements
        for (int num : nums2) {

            // If element exists and frequency > 0
            if (freq[num] > 0) {

                result.push_back(num);

                freq[num]--;
            }
        }

        return result;
    }
};

int main() {

    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};

    Solution s;

    vector<int> ans = s.intersect(nums1, nums2);

    cout << "Intersection Array: ";

    for (int num : ans) {
        cout << num << " ";
    }

    return 0;
}
