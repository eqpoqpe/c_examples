static unsigned int hurt_count(unsigned int *_nums, \
                const unsigned int _size)
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
