#include <iostream>
#include <unordered_map>

#define ARRAY_SIZE 5

bool two_sum(
    const int nums[ARRAY_SIZE],
    const int target,
    std::size_t& index0,
    std::size_t& index1
){

    index0 = 0;
    index1 = 0;

    std::unordered_map<int, std::size_t> num_map;

    for (std::size_t i = 0 ; i < ARRAY_SIZE; ++i){
        int num2 = target - nums[i];

        if (num_map.find(num2) != num_map.end()){
            index0 = num_map[num2];
            index1 = i;
            return true;
        }
        num_map[nums[i]] = i;
        }
    return false;
}
    