#include <cstddef>
#define ARRAY_SIZE 5

bool two_sum(
    const int nums[ARRAY_SIZE],
    const int target,
    std::size_t& index0,
    std::size_t& index1
)
{
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        for(int j = 0; j < ARRAY_SIZE; j++)
        {
            if(i == j)
                continue;
            if(nums[i]+nums[j] == target)
            {
                index0 = i;
                index1 = j;
                return true;
            }
        }
    }
    return false;
};