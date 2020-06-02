/*
 * File: Subsystem.h
 *
 * Code generated for Simulink model 'Subsystem'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Mon Jun  1 22:46:38 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: NXP->Cortex-M4
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Subsystem_h_
#define RTW_HEADER_Subsystem_h_
#ifndef Subsystem_COMMON_INCLUDES_
# define Subsystem_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Subsystem_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  real_T Tz_states[2];                 /* '<S1>/T(z)' */
  real_T Rz_states[2];                 /* '<S1>/R(z)' */
  real_T uSz_states[2];                /* '<S1>/1//S(z)' */
} DW;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
  real_T In2;                          /* '<Root>/In2' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
} ExtY;

/* Real-time Model Data Structure */
struct tag_RTM {
  const char_T * volatile errorStatus;
};

/* Block signals and states (default storage) */
extern DW rtDW;

/* External inputs (root inport signals with default storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void Subsystem_initialize(void);
extern void Subsystem_step(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('System_20200601_2233_35/Subsystem')    - opens subsystem System_20200601_2233_35/Subsystem
 * hilite_system('System_20200601_2233_35/Subsystem/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'System_20200601_2233_35'
 * '<S1>'   : 'System_20200601_2233_35/Subsystem'
 */
#endif                                 /* RTW_HEADER_Subsystem_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
