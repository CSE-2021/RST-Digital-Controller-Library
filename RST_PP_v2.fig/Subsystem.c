#include "Subsystem.h"

DW rtDW;

ExtU rtU;

ExtY rtY;

RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;

void Subsystem_step(void)
{
  real_T rtb_Sum1;
  rtb_Sum1 = ((((3.3333 * rtU.In1 + -4.5807 * rtDW.Tz_states[0]) + 1.6225 *
                rtDW.Tz_states[1]) - ((3.0 * rtU.In2 + -3.939 * rtDW.Rz_states[0])
    + 1.3142 * rtDW.Rz_states[1])) - -0.3742 * rtDW.uSz_states[0]) - -0.6258 *
    rtDW.uSz_states[1];

  rtY.Out1 = rtb_Sum1;

  rtDW.Tz_states[1] = rtDW.Tz_states[0];
  rtDW.Tz_states[0] = rtU.In1;

  rtDW.Rz_states[1] = rtDW.Rz_states[0];
  rtDW.Rz_states[0] = rtU.In2;

  rtDW.uSz_states[1] = rtDW.uSz_states[0];
  rtDW.uSz_states[0] = rtb_Sum1;
}

void Subsystem_initialize(void)
{
	
}

void Subsystem_terminate(void)
{
 
}
