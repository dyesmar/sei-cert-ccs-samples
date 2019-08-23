#define ABS(x) __extension__ ({ __typeof (x) tmp = x; \
                    tmp < 0 ? -tmp : tmp; })
