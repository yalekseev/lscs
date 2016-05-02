#include "lss.h"

#include <iostream>
#include <vector>

int main() {
    std::vector<int> v = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };

    std::cout << util::largest_sum_subarray(v.begin(), v.end()) << std::endl;

    return 0;
}
