#define ARRAY_SIZE 5
#include <iostream>

bool two_sum(
    const int nums[ARRAY_SIZE],
    const int target,
    std::size_t& index0,
    std::size_t& index1
)  

{
    index0 = 0;
    index1 = 0;
    for(int i = 0; i < ARRAY_SIZE-1; ++i) {
        for(int j = i+1; j < ARRAY_SIZE; ++j) {
            if ((nums[i]+nums[j] == target)&&(i!=j)) {
                if (i<j) {
                    index0 = i;
                    index1 = j;
                } else {
                    index0 = j;
                    index1 = i;
                }
                break;
            }
        }
    }
    return (bool)(index0+index1);
}
