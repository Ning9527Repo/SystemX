#include <assert.h>
#include "../src/CardRadius/RadiusPolicy.h"
int main(void) {
    assert(SXRadiusValue(0, 30, 17)==17);
    assert(SXRadiusValue(1, 0, 17)==17);
    assert(SXRadiusValue(1, -1, 17)==17);
    assert(SXRadiusValue(1, NAN, 17)==17);
    assert(SXRadiusValue(1, INFINITY, 17)==17);
    assert(SXRadiusValue(1, 24, 17)==24);
    assert(SXRadiusValue(1, 99, 17)==60);
    return 0;
}
