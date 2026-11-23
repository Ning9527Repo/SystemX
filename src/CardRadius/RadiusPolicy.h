#ifndef SYSTEMX_RADIUS_POLICY_H
#define SYSTEMX_RADIUS_POLICY_H
#include <math.h>
// Zero is explicitly a no-op, not a square-corner request.
static inline double SXRadiusValue(int enabled, double requested, double original) {
    if (!enabled || !isfinite(requested) || requested <= 0.0) return original;
    return fmin(requested, 60.0);
}
#endif
