#include "two-sum.hpp"

#define ARRAY_SIZE 5

 bool two_sum(
     const int nums[ARRAY_SIZE],
     const int target,
     std::size_t& index0,
     std::size_t& index1
)
{
    for(int i = 0; i < ARRAY_SIZE - 1; i++)
    {
        for(int j = i+1; j < ARRAY_SIZE; j++)
        {
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
