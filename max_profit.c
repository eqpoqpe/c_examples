#include <stdio.h>

static unsigned int hurt_count(unsigned int *, unsigned int);

int main()
{
        int nums[5] = {2, 5, 2, 7, 2, 9};
        unsigned int result = hurt_count(nums, 5);
        return 0;
}

static unsigned int hurt_count(unsigned int *_nums, unsigned int _size)
{
        unsigned int count = 0;
        unsigned int index = 0;
        for (; index < _size - 1; index++) {
                if (*(_nums + index) < \
                                *(_nums + index + 1))
                        count += (*(_nums + index + 1) - \
                                        *(_nums + index));
        }
        return (int) count;
}
