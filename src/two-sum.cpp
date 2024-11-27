#define ARRAY_SIZE 5
#include <iostream>

bool two_sum(
    const int nums[ARRAY_SIZE],
    const int target,
    std::size_t& index0,
    std::size_t& index1)
{
    for (int i = 0; i < ARRAY_SIZE-1; i++){
	if (nums[i] >= target) continue;
    	for (int j = i+1; j < ARRAY_SIZE; j++){
	    if (nums[i] + nums[j] == target){
	    	index0 = i;
		index1 = j;
		return true;
	    }
	}
    }
    return false;
}


