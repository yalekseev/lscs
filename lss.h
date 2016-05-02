#pragma once

#include <type_traits>
#include <algorithm>

namespace util {

template <typename Iterator>
auto largest_sum_subarray(Iterator begin, Iterator end) -> typename std::remove_reference<decltype(*begin)>::type {
    using T = typename std::remove_reference<decltype(*begin)>::type; 

    T cur_max_sum = 0;
    T max_sum = 0;

    for (; begin != end; ++begin) {
        cur_max_sum = std::max(*begin, cur_max_sum + *begin);

        if (max_sum < cur_max_sum) {
            max_sum = cur_max_sum;
        }
    }

    return max_sum;
}

} // namespace util
