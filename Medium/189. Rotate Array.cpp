class Solution {
public:
  void rotate(vector<int>& nums, int k) {
    // Calculate the effective number of rotations
    k = k % nums.size();

    // Reverse the entire array
    reverse(nums.begin(), nums.end());

    // Reverse the first k elements
    reverse(nums.begin(), nums.begin() + k);

    // Reverse the remaining elements
    reverse(nums.begin() + k, nums.end());
}

};
