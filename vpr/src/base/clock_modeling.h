#ifndef CLOCK_MODELING_H
#define CLOCK_MODELING_H

enum e_clock_modeling_method {
    IDEAL_CLOCK, //Treat the clock pins as ideal (i.e. not routed)
    ROUTED_CLOCK //Treat the clock pins as normal nets (i.e. routed)
};

namespace ClockModelingUtil
{
    /* Returns true if the user specified for the clock network to be routed */
    bool is_clock_routed(e_clock_modeling_method method);
}

#endif

