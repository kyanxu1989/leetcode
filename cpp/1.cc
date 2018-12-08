#include <iostream>
#include <vector>
#include <map>

using namespace std;
class Solution {
public:
  vector<int> twoSum(vector<int>& nums, int target) {
    std::vector<int> res;
    std::map<int, int> mapping;
    for (size_t i = 0; i < nums.size(); ++i) {
      mapping.emplace(nums[i], i);
    }
    for (size_t i = 0; i < nums.size(); ++i) {
      if (mapping.find(target - nums[i]) != mapping.end() && mapping[target - nums[i]] != i) {
        res.push_back(i);
        res.push_back(mapping[target - nums[i]]);
        break;
      }
    }
    return res;
  }
};

int main(int argc, char** argv) {
  Solution s;
  std::vector<int> nums = {3, 2, 4};
  auto res = s.twoSum(nums, 6);
  std::cout << res[0] << "\t" << res[1] << std::endl;
  return 0;
}