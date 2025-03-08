#ifndef __c8_flightControlSystem_h__
#define __c8_flightControlSystem_h__

/* Forward Declarations */
#ifndef c8_typedef_c8_cell_0
#define c8_typedef_c8_cell_0

typedef struct c8_tag_WEERJ684udTnZPnh40uWdD c8_cell_0;

#endif                                 /* c8_typedef_c8_cell_0 */

#ifndef c8_typedef_c8_cell_wrap_1
#define c8_typedef_c8_cell_wrap_1

typedef struct c8_tag_y2anywF90yUI9j7qH5yd3E c8_cell_wrap_1;

#endif                                 /* c8_typedef_c8_cell_wrap_1 */

#ifndef c8_typedef_c8_s_ja4nrKQcb0xy9tCQPIAqaB
#define c8_typedef_c8_s_ja4nrKQcb0xy9tCQPIAqaB

typedef struct c8_tag_ja4nrKQcb0xy9tCQPIAqaB c8_s_ja4nrKQcb0xy9tCQPIAqaB;

#endif                                 /* c8_typedef_c8_s_ja4nrKQcb0xy9tCQPIAqaB */

#ifndef c8_typedef_c8_s_BrRdqYMft44ulwR1A7rKqF
#define c8_typedef_c8_s_BrRdqYMft44ulwR1A7rKqF

typedef struct c8_tag_BrRdqYMft44ulwR1A7rKqF c8_s_BrRdqYMft44ulwR1A7rKqF;

#endif                                 /* c8_typedef_c8_s_BrRdqYMft44ulwR1A7rKqF */

/* Type Definitions */
#ifndef c8_struct_c8_tag_WEERJ684udTnZPnh40uWdD
#define c8_struct_c8_tag_WEERJ684udTnZPnh40uWdD

struct c8_tag_WEERJ684udTnZPnh40uWdD
{
  char_T f1[6];
  char_T f2[7];
  char_T f3[5];
  char_T f4[6];
  char_T f5[6];
  char_T f6[5];
};

#endif                                 /* c8_struct_c8_tag_WEERJ684udTnZPnh40uWdD */

#ifndef c8_typedef_c8_cell_0
#define c8_typedef_c8_cell_0

typedef struct c8_tag_WEERJ684udTnZPnh40uWdD c8_cell_0;

#endif                                 /* c8_typedef_c8_cell_0 */

#ifndef c8_struct_c8_tag_y2anywF90yUI9j7qH5yd3E
#define c8_struct_c8_tag_y2anywF90yUI9j7qH5yd3E

struct c8_tag_y2anywF90yUI9j7qH5yd3E
{
  char_T f1[9];
};

#endif                                 /* c8_struct_c8_tag_y2anywF90yUI9j7qH5yd3E */

#ifndef c8_typedef_c8_cell_wrap_1
#define c8_typedef_c8_cell_wrap_1

typedef struct c8_tag_y2anywF90yUI9j7qH5yd3E c8_cell_wrap_1;

#endif                                 /* c8_typedef_c8_cell_wrap_1 */

#ifndef c8_struct_c8_tag_ja4nrKQcb0xy9tCQPIAqaB
#define c8_struct_c8_tag_ja4nrKQcb0xy9tCQPIAqaB

struct c8_tag_ja4nrKQcb0xy9tCQPIAqaB
{
  c8_cell_0 _data;
};

#endif                                 /* c8_struct_c8_tag_ja4nrKQcb0xy9tCQPIAqaB */

#ifndef c8_typedef_c8_s_ja4nrKQcb0xy9tCQPIAqaB
#define c8_typedef_c8_s_ja4nrKQcb0xy9tCQPIAqaB

typedef struct c8_tag_ja4nrKQcb0xy9tCQPIAqaB c8_s_ja4nrKQcb0xy9tCQPIAqaB;

#endif                                 /* c8_typedef_c8_s_ja4nrKQcb0xy9tCQPIAqaB */

#ifndef c8_struct_c8_tag_BrRdqYMft44ulwR1A7rKqF
#define c8_struct_c8_tag_BrRdqYMft44ulwR1A7rKqF

struct c8_tag_BrRdqYMft44ulwR1A7rKqF
{
  c8_cell_wrap_1 _data;
};

#endif                                 /* c8_struct_c8_tag_BrRdqYMft44ulwR1A7rKqF */

#ifndef c8_typedef_c8_s_BrRdqYMft44ulwR1A7rKqF
#define c8_typedef_c8_s_BrRdqYMft44ulwR1A7rKqF

typedef struct c8_tag_BrRdqYMft44ulwR1A7rKqF c8_s_BrRdqYMft44ulwR1A7rKqF;

#endif                                 /* c8_typedef_c8_s_BrRdqYMft44ulwR1A7rKqF */

#ifndef typedef_SFc8_flightControlSystemInstanceStruct
#define typedef_SFc8_flightControlSystemInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  int32_T c8_sfEvent;
  boolean_T c8_doneDoubleBufferReInit;
  uint8_T c8_JITStateAnimation[1];
  uint8_T c8_JITTransitionAnimation[1];
  CovrtStateflowInstance *c8_covrtInstance;
  void *c8_fEmlrtCtx;
  real_T (*c8_BWimage)[19200];
  uint8_T (*c8_N)[60];
  uint8_T (*c8_E)[60];
  uint8_T (*c8_S)[60];
  uint8_T (*c8_W)[60];
  real_T (*c8_NE)[60];
  real_T (*c8_NW)[60];
  real_T (*c8_SE)[60];
  real_T (*c8_SW)[60];
} SFc8_flightControlSystemInstanceStruct;

#endif                                 /* typedef_SFc8_flightControlSystemInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c8_flightControlSystem_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c8_flightControlSystem_get_check_sum(mxArray *plhs[]);
extern void c8_flightControlSystem_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
