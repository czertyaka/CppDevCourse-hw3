#include <unordered_map>

#define ARRAY_SIZE 5

bool two_sum(const int nums[ARRAY_SIZE], const int target, std::size_t& index0, std::size_t& index1) {
    std::unordered_map<int, std::size_t> num_indices;
    for (std::size_t i = 0; i < ARRAY_SIZE; ++i) {
        int complement = target - nums[i];
        if (num_indices.find(complement) != num_indices.end()) {
            index0 = num_indices[complement];
            index1 = i;
            if (index0 > index1) {
                std::swap(index0, index1);
            }
            return true;
        }
        num_indices[nums[i]] = i;
    }
    return false;
}
