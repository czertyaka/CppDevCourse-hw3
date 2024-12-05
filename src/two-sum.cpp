#define ARRAY_SIZE 5
#include <cstddef>

bool two_sum(
const int nums[ARRAY_SIZE],
const int target,
std::size_t& index0,
std::size_t& index1
)
{
  for (unsigned char i = 0; i < ARRAY_SIZE; ++i) {
    for (unsigned char j = i + 1; j < ARRAY_SIZE; ++j){
        if (nums[i] + nums[j] == target){
            index0 = i;
            index1 = j;
            return true;
        } 
    }
}
return false;
}