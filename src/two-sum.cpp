#include <iostream>
#include "two-sum.hpp"

using namespace std;
bool two_sum(
    const int nums[ARRAY_SIZE],
    const int target,
    size_t& index0,
    size_t& index1)
    {
    bool answer = false;
    for(size_t i = 0; i < ARRAY_SIZE - 1; i ++) {
        for(size_t j = i + 1; j < ARRAY_SIZE; j++){  
            if(nums[i] + nums[j] == target) {
                if(nums[i] < nums[j]){
                    index0 = nums[i];
                    index1 = nums[j];
                }
                else{
                    index0 = nums[j];
                    index1 = nums[i];
                }
                answer = true;
            }
        }
    }
    return answer;
}