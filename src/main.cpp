#include <iostream>
#include <cstddef>
#include <charconv>
#include <string>
#include <system_error>
#include <stdexcept>

#include "two-sum.hpp"

int read_integer() {
    std::string input;
    std::cin >> input;
    int num {};
    const auto [ptr, ec] = std::from_chars(input.data(), input.data() + input.size(), num);
    if (ec != std::errc()) {
        std::string message;
        message += '"' + input + "\" is not a valid number";
        throw std::invalid_argument(message);
    }
    return num;
}

int main() {
    try {
        int nums[ARRAY_SIZE] = {0};
        for (std::size_t i = 0; i < ARRAY_SIZE; ++i) {
            std::cout << "Enter " << i << " number: ";
            nums[i] = read_integer();
        }

        std::cout << "Enter target: ";
        const int target = read_integer();

        std::size_t index0 {};
        std::size_t index1 {};
        if (two_sum(nums, target, index0, index1)) {
            std::cout << "nums[" << index0 << "] + nums[" << index1
                << "] == " << target <<"\n";
        }
        else {
            std::cout << "No indices i and j, such as nums[i] + nums[j] == "
                << target << " were found\n";
        }
    }
    catch (const std::exception& err) {
        std::cerr << err.what() << std::endl;
        return 1;
    }
    return 0;
}
