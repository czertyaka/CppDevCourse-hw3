#define ARRAY_SIZE 5
#include <unordered_map>
#include <algorithm>

bool two_sum(
    const int nums[ARRAY_SIZE],
    const int target,
    std::size_t& index0,
    std::size_t& index1
) {
    std::unordered_map<int, std::size_t> map;
    for (std::size_t i = 0; i < ARRAY_SIZE; ++i) {
        int complement = target - nums[i];
        if (map.find(complement) != map.end()) {
            index0 = std::min(map[complement], i);
            index1 = std::max(map[complement], i);
            return true;
        }
        map[nums[i]] = i;
    }
    return false;
}