#ifndef __c11_flightControlSystem_h__
#define __c11_flightControlSystem_h__

/* Forward Declarations */
#ifndef c11_typedef_c11_cell_0
#define c11_typedef_c11_cell_0

typedef struct c11_tag_WEERJ684udTnZPnh40uWdD c11_cell_0;

#endif                                 /* c11_typedef_c11_cell_0 */

#ifndef c11_typedef_c11_cell_wrap_1
#define c11_typedef_c11_cell_wrap_1

typedef struct c11_tag_y2anywF90yUI9j7qH5yd3E c11_cell_wrap_1;

#endif                                 /* c11_typedef_c11_cell_wrap_1 */

#ifndef c11_typedef_c11_s_ja4nrKQcb0xy9tCQPIAqaB
#define c11_typedef_c11_s_ja4nrKQcb0xy9tCQPIAqaB

typedef struct c11_tag_ja4nrKQcb0xy9tCQPIAqaB c11_s_ja4nrKQcb0xy9tCQPIAqaB;

#endif                                 /* c11_typedef_c11_s_ja4nrKQcb0xy9tCQPIAqaB */

#ifndef c11_typedef_c11_s_BrRdqYMft44ulwR1A7rKqF
#define c11_typedef_c11_s_BrRdqYMft44ulwR1A7rKqF

typedef struct c11_tag_BrRdqYMft44ulwR1A7rKqF c11_s_BrRdqYMft44ulwR1A7rKqF;

#endif                                 /* c11_typedef_c11_s_BrRdqYMft44ulwR1A7rKqF */

/* Type Definitions */
#ifndef c11_struct_c11_tag_WEERJ684udTnZPnh40uWdD
#define c11_struct_c11_tag_WEERJ684udTnZPnh40uWdD

struct c11_tag_WEERJ684udTnZPnh40uWdD
{
  char_T f1[6];
  char_T f2[7];
  char_T f3[5];
  char_T f4[6];
  char_T f5[6];
  char_T f6[5];
};

#endif                                 /* c11_struct_c11_tag_WEERJ684udTnZPnh40uWdD */

#ifndef c11_typedef_c11_cell_0
#define c11_typedef_c11_cell_0

typedef struct c11_tag_WEERJ684udTnZPnh40uWdD c11_cell_0;

#endif                                 /* c11_typedef_c11_cell_0 */

#ifndef c11_struct_c11_tag_y2anywF90yUI9j7qH5yd3E
#define c11_struct_c11_tag_y2anywF90yUI9j7qH5yd3E

struct c11_tag_y2anywF90yUI9j7qH5yd3E
{
  char_T f1[9];
};

#endif                                 /* c11_struct_c11_tag_y2anywF90yUI9j7qH5yd3E */

#ifndef c11_typedef_c11_cell_wrap_1
#define c11_typedef_c11_cell_wrap_1

typedef struct c11_tag_y2anywF90yUI9j7qH5yd3E c11_cell_wrap_1;

#endif                                 /* c11_typedef_c11_cell_wrap_1 */

#ifndef c11_struct_c11_tag_ja4nrKQcb0xy9tCQPIAqaB
#define c11_struct_c11_tag_ja4nrKQcb0xy9tCQPIAqaB

struct c11_tag_ja4nrKQcb0xy9tCQPIAqaB
{
  c11_cell_0 _data;
};

#endif                                 /* c11_struct_c11_tag_ja4nrKQcb0xy9tCQPIAqaB */

#ifndef c11_typedef_c11_s_ja4nrKQcb0xy9tCQPIAqaB
#define c11_typedef_c11_s_ja4nrKQcb0xy9tCQPIAqaB

typedef struct c11_tag_ja4nrKQcb0xy9tCQPIAqaB c11_s_ja4nrKQcb0xy9tCQPIAqaB;

#endif                                 /* c11_typedef_c11_s_ja4nrKQcb0xy9tCQPIAqaB */

#ifndef c11_struct_c11_tag_BrRdqYMft44ulwR1A7rKqF
#define c11_struct_c11_tag_BrRdqYMft44ulwR1A7rKqF

struct c11_tag_BrRdqYMft44ulwR1A7rKqF
{
  c11_cell_wrap_1 _data;
};

#endif                                 /* c11_struct_c11_tag_BrRdqYMft44ulwR1A7rKqF */

#ifndef c11_typedef_c11_s_BrRdqYMft44ulwR1A7rKqF
#define c11_typedef_c11_s_BrRdqYMft44ulwR1A7rKqF

typedef struct c11_tag_BrRdqYMft44ulwR1A7rKqF c11_s_BrRdqYMft44ulwR1A7rKqF;

#endif                                 /* c11_typedef_c11_s_BrRdqYMft44ulwR1A7rKqF */

#ifndef typedef_SFc11_flightControlSystemInstanceStruct
#define typedef_SFc11_flightControlSystemInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  int32_T c11_sfEvent;
  boolean_T c11_doneDoubleBufferReInit;
  uint8_T c11_JITStateAnimation[1];
  uint8_T c11_JITTransitionAnimation[1];
  CovrtStateflowInstance *c11_covrtInstance;
  void *c11_fEmlrtCtx;
  uint8_T (*c11_N)[1600];
  uint8_T (*c11_E)[1600];
  uint8_T (*c11_S)[1600];
  uint8_T (*c11_W)[1600];
  uint8_T (*c11_NE)[1600];
  real_T (*c11_BWimage)[19200];
  uint8_T (*c11_NW)[1600];
  uint8_T (*c11_SE)[1600];
  uint8_T (*c11_SW)[1600];
} SFc11_flightControlSystemInstanceStruct;

#endif                                 /* typedef_SFc11_flightControlSystemInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c11_flightControlSystem_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c11_flightControlSystem_get_check_sum(mxArray *plhs[]);
extern void c11_flightControlSystem_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
