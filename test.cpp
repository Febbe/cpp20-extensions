#include <bit>
#include "febbe/utility.h"

enum ColorMask {
    red = 0xffU,
    green = 0xffU << 8U,
    blue= 0xffU << 16U,
    alpha = std::bit_cast<int>(0xffU << 24U)
};

using Color = bitset<ColorMask>;

inline Color test{};
static_assert((Color{red} | Color{blue}).contains(red));

int main(){
    return 0;
}