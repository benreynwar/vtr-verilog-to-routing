#include "clock_modeling.h"

#include "vtr_assert.h"

bool ClockModelingUtil::is_clock_routed(e_clock_modeling_method method) {

    if(method == ROUTED_CLOCK) {
        return true;
    } else {
        VTR_ASSERT(method == IDEAL_CLOCK);
        return false;
    }
}

