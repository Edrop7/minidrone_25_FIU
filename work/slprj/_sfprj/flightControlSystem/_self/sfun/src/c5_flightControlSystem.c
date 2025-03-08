/* Include files */

#include "flightControlSystem_sfun.h"
#include "c5_flightControlSystem.h"
#include <string.h>
#include "mwmathutil.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Forward Declarations */

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static emlrtMCInfo c5_emlrtMCI = { 87, /* lineNo */
  33,                                  /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pName */
};

static emlrtMCInfo c5_b_emlrtMCI = { 161,/* lineNo */
  1,                                   /* colNo */
  "imadjust",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imadjust.m"/* pName */
};

static emlrtMCInfo c5_c_emlrtMCI = { 159,/* lineNo */
  1,                                   /* colNo */
  "imadjust",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imadjust.m"/* pName */
};

static emlrtMCInfo c5_d_emlrtMCI = { 82,/* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pName */
};

static emlrtRSInfo c5_emlrtRSI = { 3,  /* lineNo */
  "Image Processing System/MATLAB Function2",/* fcnName */
  "#flightControlSystem:2712"          /* pathName */
};

static emlrtRSInfo c5_b_emlrtRSI = { 5,/* lineNo */
  "Image Processing System/MATLAB Function2",/* fcnName */
  "#flightControlSystem:2712"          /* pathName */
};

static emlrtRSInfo c5_c_emlrtRSI = { 7,/* lineNo */
  "Image Processing System/MATLAB Function2",/* fcnName */
  "#flightControlSystem:2712"          /* pathName */
};

static emlrtRSInfo c5_d_emlrtRSI = { 9,/* lineNo */
  "Image Processing System/MATLAB Function2",/* fcnName */
  "#flightControlSystem:2712"          /* pathName */
};

static emlrtRSInfo c5_e_emlrtRSI = { 10,/* lineNo */
  "Image Processing System/MATLAB Function2",/* fcnName */
  "#flightControlSystem:2712"          /* pathName */
};

static emlrtRSInfo c5_f_emlrtRSI = { 12,/* lineNo */
  "Image Processing System/MATLAB Function2",/* fcnName */
  "#flightControlSystem:2712"          /* pathName */
};

static emlrtRSInfo c5_g_emlrtRSI = { 13,/* lineNo */
  "Image Processing System/MATLAB Function2",/* fcnName */
  "#flightControlSystem:2712"          /* pathName */
};

static emlrtRSInfo c5_h_emlrtRSI = { 38,/* lineNo */
  "mat2gray",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\mat2gray.m"/* pathName */
};

static emlrtRSInfo c5_i_emlrtRSI = { 48,/* lineNo */
  "mat2gray",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\mat2gray.m"/* pathName */
};

static emlrtRSInfo c5_j_emlrtRSI = { 15,/* lineNo */
  "min",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\min.m"/* pathName */
};

static emlrtRSInfo c5_k_emlrtRSI = { 66,/* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo c5_l_emlrtRSI = { 112,/* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo c5_m_emlrtRSI = { 273,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo c5_n_emlrtRSI = { 962,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo c5_o_emlrtRSI = { 73,/* lineNo */
  "vectorMinOrMaxInPlace",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\vectorMinOrMaxInPlace.m"/* pathName */
};

static emlrtRSInfo c5_p_emlrtRSI = { 131,/* lineNo */
  "vectorMinOrMaxInPlace",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\vectorMinOrMaxInPlace.m"/* pathName */
};

static emlrtRSInfo c5_q_emlrtRSI = { 20,/* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo c5_r_emlrtRSI = { 15,/* lineNo */
  "max",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\max.m"/* pathName */
};

static emlrtRSInfo c5_s_emlrtRSI = { 64,/* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo c5_t_emlrtRSI = { 99,/* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo c5_u_emlrtRSI = { 255,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo c5_v_emlrtRSI = { 966,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo c5_w_emlrtRSI = { 13,/* lineNo */
  "imlincomb",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imlincomb.m"/* pathName */
};

static emlrtRSInfo c5_x_emlrtRSI = { 118,/* lineNo */
  "imlincomb",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imlincomb.m"/* pathName */
};

static emlrtRSInfo c5_y_emlrtRSI = { 25,/* lineNo */
  "imadjust",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imadjust.m"/* pathName */
};

static emlrtRSInfo c5_ab_emlrtRSI = { 276,/* lineNo */
  "imadjust",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imadjust.m"/* pathName */
};

static emlrtRSInfo c5_bb_emlrtRSI = { 24,/* lineNo */
  "imadjust",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imadjust.m"/* pathName */
};

static emlrtRSInfo c5_cb_emlrtRSI = { 26,/* lineNo */
  "imadjust",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imadjust.m"/* pathName */
};

static emlrtRSInfo c5_db_emlrtRSI = { 54,/* lineNo */
  "stretchlim",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\stretchlim.m"/* pathName */
};

static emlrtRSInfo c5_eb_emlrtRSI = { 131,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c5_fb_emlrtRSI = { 166,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c5_gb_emlrtRSI = { 353,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c5_hb_emlrtRSI = { 452,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c5_ib_emlrtRSI = { 14,/* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pathName */
};

static emlrtRSInfo c5_jb_emlrtRSI = { 295,/* lineNo */
  "imadjust",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imadjust.m"/* pathName */
};

static emlrtRSInfo c5_kb_emlrtRSI = { 331,/* lineNo */
  "imadjust",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imadjust.m"/* pathName */
};

static emlrtRSInfo c5_lb_emlrtRSI = { 44,/* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m"/* pathName */
};

static emlrtRSInfo c5_mb_emlrtRSI = { 71,/* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtBCInfo c5_emlrtBCI = { 1,  /* iFirst */
  71820,                               /* iLast */
  197,                                 /* lineNo */
  55,                                  /* colNo */
  "",                                  /* aName */
  "imlincomb",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imlincomb.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c5_emlrtDCI = { 197,/* lineNo */
  55,                                  /* colNo */
  "imlincomb",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imlincomb.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_b_emlrtBCI = { 1,/* iFirst */
  71820,                               /* iLast */
  202,                                 /* lineNo */
  11,                                  /* colNo */
  "",                                  /* aName */
  "imlincomb",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imlincomb.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_b_emlrtDCI = { 202,/* lineNo */
  11,                                  /* colNo */
  "imlincomb",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imlincomb.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_c_emlrtBCI = { 1,/* iFirst */
  71820,                               /* iLast */
  331,                                 /* lineNo */
  46,                                  /* colNo */
  "",                                  /* aName */
  "imadjust",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imadjust.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c5_c_emlrtDCI = { 331,/* lineNo */
  46,                                  /* colNo */
  "imadjust",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imadjust.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_d_emlrtBCI = { 1,/* iFirst */
  71820,                               /* iLast */
  331,                                 /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "imadjust",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imadjust.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_d_emlrtDCI = { 331,/* lineNo */
  13,                                  /* colNo */
  "imadjust",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imadjust.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_e_emlrtBCI = { 1,/* iFirst */
  65536,                               /* iLast */
  63,                                  /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "stretchlim",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\stretchlim.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c5_e_emlrtDCI = { 63,/* lineNo */
  36,                                  /* colNo */
  "stretchlim",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\stretchlim.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_f_emlrtBCI = { 1,/* iFirst */
  65536,                               /* iLast */
  68,                                  /* lineNo */
  37,                                  /* colNo */
  "",                                  /* aName */
  "stretchlim",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\stretchlim.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c5_f_emlrtDCI = { 68,/* lineNo */
  37,                                  /* colNo */
  "stretchlim",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\stretchlim.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_g_emlrtBCI = { 1,/* iFirst */
  71820,                               /* iLast */
  603,                                 /* lineNo */
  22,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c5_g_emlrtDCI = { 603,/* lineNo */
  22,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_h_emlrtBCI = { 1,/* iFirst */
  71820,                               /* iLast */
  613,                                 /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c5_h_emlrtDCI = { 613,/* lineNo */
  26,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_i_emlrtBCI = { 1,/* iFirst */
  71820,                               /* iLast */
  622,                                 /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c5_i_emlrtDCI = { 622,/* lineNo */
  26,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_j_emlrtBCI = { 1,/* iFirst */
  65536,                               /* iLast */
  629,                                 /* lineNo */
  52,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c5_j_emlrtDCI = { 629,/* lineNo */
  52,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_k_emlrtBCI = { 1,/* iFirst */
  65536,                               /* iLast */
  629,                                 /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_k_emlrtDCI = { 629,/* lineNo */
  15,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static char_T c5_cv[27] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'i', 'm', 'h',
  'i', 's', 't', 'c', ':', 'i', 'n', 'p', 'u', 't', 'H', 'a', 's', 'N', 'a', 'N',
  's' };

/* Function Declarations */
static void initialize_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance);
static void initialize_params_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance);
static void mdl_start_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance);
static void mdl_terminate_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance);
static void enable_c5_flightControlSystem(SFc5_flightControlSystemInstanceStruct
  *chartInstance);
static void disable_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance);
static void sf_gateway_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance);
static void ext_mode_exec_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance);
static void c5_update_jit_animation_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance);
static void c5_do_animation_call_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance);
static void set_sim_state_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance, const mxArray *c5_st);
static void c5_check_forloop_overflow_error
  (SFc5_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c5_sp, boolean_T c5_overflow);
static void c5_imadjust(SFc5_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c5_sp, real_T c5_varargin_1[71820], real_T c5_out[71820]);
static void c5_stretchlim(SFc5_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c5_sp, real_T c5_varargin_1[71820], real_T c5_lowhigh[2]);
static void c5_imhist(SFc5_flightControlSystemInstanceStruct *chartInstance,
                      const emlrtStack *c5_sp, real_T c5_varargin_1[71820],
                      real_T c5_yout[65536]);
static void c5_warning(SFc5_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c5_sp);
static real_T c5_sumColumnB4(SFc5_flightControlSystemInstanceStruct
  *chartInstance, real_T c5_x[65536], int32_T c5_col, int32_T c5_vstart);
static const mxArray *c5_imagesc(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c5_sp, const mxArray *c5_input0, const
  mxArray *c5_input1, const mxArray *c5_input2, const mxArray *c5_input3, const
  mxArray *c5_input4);
static const mxArray *c5_hot(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c5_sp);
static const mxArray *c5_colormap(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c5_sp, const mxArray *c5_input0);
static const mxArray *c5_title(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c5_sp, const mxArray *c5_input0);
static const mxArray *c5_xlabel(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c5_sp, const mxArray *c5_input0);
static const mxArray *c5_ylabel(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c5_sp, const mxArray *c5_input0);
static const mxArray *c5_b_warning(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c5_sp, const mxArray *c5_input0, const
  mxArray *c5_input1);
static const mxArray *c5_c_warning(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c5_sp, const mxArray *c5_input0);
static const mxArray *c5_feval(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c5_sp, const mxArray *c5_input0, const
  mxArray *c5_input1);
static void c5_b_feval(SFc5_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c5_sp, const mxArray *c5_input0, const mxArray *c5_input1);
static void init_dsm_address_info(SFc5_flightControlSystemInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc5_flightControlSystemInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance)
{
  emlrtStack c5_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c5_st.tls = chartInstance->c5_fEmlrtCtx;
  emlrtLicenseCheckR2022a(&c5_st, "EMLRT:runTime:MexFunctionNeedsLicense",
    "image_toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c5_doneDoubleBufferReInit = false;
  chartInstance->c5_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void initialize_params_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance)
{
  static const uint32_T c5_decisionTxtEndIdx = 0U;
  static const uint32_T c5_decisionTxtStartIdx = 0U;
  sfSetAnimationVectors(chartInstance->S, &chartInstance->c5_JITStateAnimation[0],
                        &chartInstance->c5_JITTransitionAnimation[0]);
  covrtCreateStateflowInstanceData(chartInstance->c5_covrtInstance, 1U, 0U, 1U,
    25U);
  covrtChartInitFcn(chartInstance->c5_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c5_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c5_decisionTxtStartIdx, &c5_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c5_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c5_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 0U,
                     "c5_flightControlSystem", 0, -1, 386);
}

static void mdl_cleanup_runtime_resources_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance)
{
  covrtDeleteStateflowInstanceData(chartInstance->c5_covrtInstance);
}

static void enable_c5_flightControlSystem(SFc5_flightControlSystemInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance)
{
  static char_T c5_cv2[15] = { 'H', 'o', 'u', 'g', 'h', ' ', 'T', 'r', 'a', 'n',
    's', 'f', 'o', 'r', 'm' };

  static char_T c5_cv3[6] = { '\\', 't', 'h', 'e', 't', 'a' };

  static char_T c5_b_cv[5] = { 'X', 'D', 'a', 't', 'a' };

  static char_T c5_cv1[5] = { 'Y', 'D', 'a', 't', 'a' };

  static char_T c5_cv4[4] = { '\\', 'r', 'h', 'o' };

  c5_rtString c5_r;
  c5_rtString c5_r1;
  c5_rtString_1 c5_r2;
  c5_rtString_2 c5_r3;
  c5_rtString_3 c5_r4;
  emlrtStack c5_b_st;
  emlrtStack c5_c_st;
  emlrtStack c5_d_st;
  emlrtStack c5_e_st;
  emlrtStack c5_f_st;
  emlrtStack c5_g_st;
  emlrtStack c5_h_st;
  emlrtStack c5_i_st;
  emlrtStack c5_j_st;
  emlrtStack c5_k_st;
  emlrtStack c5_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *c5_b_propValues[1];
  const mxArray *c5_c_propValues[1];
  const mxArray *c5_d_propValues[1];
  const mxArray *c5_e_propValues[1];
  const mxArray *c5_propValues[1];
  const mxArray *c5_c_y = NULL;
  const mxArray *c5_d_y = NULL;
  const mxArray *c5_f_y = NULL;
  const mxArray *c5_g_y = NULL;
  const mxArray *c5_h_y = NULL;
  const mxArray *c5_i_y = NULL;
  const mxArray *c5_j_y = NULL;
  const mxArray *c5_k_y = NULL;
  const mxArray *c5_l_y = NULL;
  const mxArray *c5_m_y = NULL;
  const mxArray *c5_n_y = NULL;
  const mxArray *c5_o_y = NULL;
  const mxArray *c5_p_y = NULL;
  real_T c5_limits[2];
  real_T c5_b_ex;
  real_T c5_b_minval;
  real_T c5_b_varargin_1;
  real_T c5_b_varargin_3;
  real_T c5_b_x;
  real_T c5_b_y;
  real_T c5_c_ex;
  real_T c5_c_varargin_1;
  real_T c5_c_varargin_3;
  real_T c5_c_x;
  real_T c5_d_ex;
  real_T c5_d_x;
  real_T c5_delta;
  real_T c5_e_x;
  real_T c5_e_y;
  real_T c5_ex;
  real_T c5_f_x;
  real_T c5_g_x;
  real_T c5_h_x;
  real_T c5_i_x;
  real_T c5_j_k;
  real_T c5_j_x;
  real_T c5_k_x;
  real_T c5_maxval;
  real_T c5_val;
  real_T c5_varargin_1;
  real_T c5_varargin_3;
  real_T c5_x;
  real_T c5_y;
  int32_T c5_b_first;
  int32_T c5_b_idx;
  int32_T c5_b_k;
  int32_T c5_c_k;
  int32_T c5_d_k;
  int32_T c5_e_k;
  int32_T c5_f_k;
  int32_T c5_first;
  int32_T c5_g_k;
  int32_T c5_h_k;
  int32_T c5_i;
  int32_T c5_i1;
  int32_T c5_i10;
  int32_T c5_i11;
  int32_T c5_i12;
  int32_T c5_i13;
  int32_T c5_i14;
  int32_T c5_i15;
  int32_T c5_i16;
  int32_T c5_i17;
  int32_T c5_i18;
  int32_T c5_i19;
  int32_T c5_i2;
  int32_T c5_i20;
  int32_T c5_i3;
  int32_T c5_i4;
  int32_T c5_i5;
  int32_T c5_i6;
  int32_T c5_i7;
  int32_T c5_i8;
  int32_T c5_i9;
  int32_T c5_i_k;
  int32_T c5_idx;
  int32_T c5_k;
  const char_T *c5_b_propClasses[1] = { "coder.internal.string" };

  const char_T *c5_b_propNames[1] = { "Value" };

  const char_T *c5_c_propClasses[1] = { "coder.internal.string" };

  const char_T *c5_c_propNames[1] = { "Value" };

  const char_T *c5_d_propClasses[1] = { "coder.internal.string" };

  const char_T *c5_d_propNames[1] = { "Value" };

  const char_T *c5_e_propClasses[1] = { "coder.internal.string" };

  const char_T *c5_e_propNames[1] = { "Value" };

  const char_T *c5_propClasses[1] = { "coder.internal.string" };

  const char_T *c5_propNames[1] = { "Value" };

  char_T c5_b_u[15];
  char_T c5_c_u[6];
  char_T c5_u[5];
  char_T c5_d_u[4];
  boolean_T c5_b;
  boolean_T c5_b_b;
  boolean_T c5_b_overflow;
  boolean_T c5_b_p;
  boolean_T c5_c_b;
  boolean_T c5_c_p;
  boolean_T c5_d_b;
  boolean_T c5_d_p;
  boolean_T c5_exitg1;
  boolean_T c5_overflow;
  boolean_T c5_p;
  c5_st.tls = chartInstance->c5_fEmlrtCtx;
  c5_b_st.prev = &c5_st;
  c5_b_st.tls = c5_st.tls;
  c5_c_st.prev = &c5_b_st;
  c5_c_st.tls = c5_b_st.tls;
  c5_d_st.prev = &c5_c_st;
  c5_d_st.tls = c5_c_st.tls;
  c5_e_st.prev = &c5_d_st;
  c5_e_st.tls = c5_d_st.tls;
  c5_f_st.prev = &c5_e_st;
  c5_f_st.tls = c5_e_st.tls;
  c5_g_st.prev = &c5_f_st;
  c5_g_st.tls = c5_f_st.tls;
  c5_h_st.prev = &c5_g_st;
  c5_h_st.tls = c5_g_st.tls;
  c5_i_st.prev = &c5_h_st;
  c5_i_st.tls = c5_h_st.tls;
  c5_j_st.prev = &c5_i_st;
  c5_j_st.tls = c5_i_st.tls;
  c5_k_st.prev = &c5_j_st;
  c5_k_st.tls = c5_j_st.tls;
  for (c5_i = 0; c5_i < 399; c5_i++) {
    covrtSigUpdateFcn(chartInstance->c5_covrtInstance, 2U, (*chartInstance->c5_R)
                      [c5_i]);
  }

  for (c5_i1 = 0; c5_i1 < 180; c5_i1++) {
    covrtSigUpdateFcn(chartInstance->c5_covrtInstance, 1U, (*chartInstance->c5_T)
                      [c5_i1]);
  }

  for (c5_i2 = 0; c5_i2 < 71820; c5_i2++) {
    covrtSigUpdateFcn(chartInstance->c5_covrtInstance, 0U, (*chartInstance->c5_H)
                      [c5_i2]);
  }

  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c5_JITTransitionAnimation[0] = 0U;
  chartInstance->c5_sfEvent = CALL_EVENT;
  covrtEmlFcnEval(chartInstance->c5_covrtInstance, 4U, 0, 0);
  c5_b_st.site = &c5_emlrtRSI;
  c5_c_st.site = &c5_h_emlrtRSI;
  for (c5_i3 = 0; c5_i3 < 71820; c5_i3++) {
    chartInstance->c5_Hgray[c5_i3] = (*chartInstance->c5_H)[c5_i3];
  }

  c5_d_st.site = &c5_j_emlrtRSI;
  c5_e_st.site = &c5_k_emlrtRSI;
  c5_f_st.site = &c5_l_emlrtRSI;
  c5_g_st.site = &c5_m_emlrtRSI;
  c5_h_st.site = &c5_n_emlrtRSI;
  c5_x = chartInstance->c5_Hgray[0];
  c5_b_x = c5_x;
  c5_b = muDoubleScalarIsNaN(c5_b_x);
  c5_p = !c5_b;
  if (c5_p) {
    c5_idx = 1;
  } else {
    c5_idx = 0;
    c5_k = 2;
    c5_exitg1 = false;
    while ((!c5_exitg1) && (c5_k < 71821)) {
      c5_c_x = chartInstance->c5_Hgray[c5_k - 1];
      c5_d_x = c5_c_x;
      c5_b_b = muDoubleScalarIsNaN(c5_d_x);
      c5_b_p = !c5_b_b;
      if (c5_b_p) {
        c5_idx = c5_k;
        c5_exitg1 = true;
      } else {
        c5_k++;
      }
    }
  }

  if (c5_idx == 0) {
    c5_b_minval = chartInstance->c5_Hgray[0];
  } else {
    c5_i_st.site = &c5_o_emlrtRSI;
    c5_first = c5_idx - 1;
    c5_ex = chartInstance->c5_Hgray[c5_first];
    c5_i4 = c5_first;
    c5_j_st.site = &c5_p_emlrtRSI;
    c5_overflow = false;
    if (c5_overflow) {
      c5_k_st.site = &c5_q_emlrtRSI;
      c5_check_forloop_overflow_error(chartInstance, &c5_k_st, c5_overflow);
    }

    for (c5_b_k = c5_i4 + 2; c5_b_k < 71821; c5_b_k++) {
      if (c5_ex > chartInstance->c5_Hgray[c5_b_k - 1]) {
        c5_ex = chartInstance->c5_Hgray[c5_b_k - 1];
      }
    }

    c5_b_minval = c5_ex;
  }

  c5_c_st.site = &c5_h_emlrtRSI;
  for (c5_i5 = 0; c5_i5 < 71820; c5_i5++) {
    chartInstance->c5_Hgray[c5_i5] = (*chartInstance->c5_H)[c5_i5];
  }

  c5_d_st.site = &c5_r_emlrtRSI;
  c5_e_st.site = &c5_s_emlrtRSI;
  c5_f_st.site = &c5_t_emlrtRSI;
  c5_g_st.site = &c5_u_emlrtRSI;
  c5_h_st.site = &c5_v_emlrtRSI;
  c5_e_x = chartInstance->c5_Hgray[0];
  c5_f_x = c5_e_x;
  c5_c_b = muDoubleScalarIsNaN(c5_f_x);
  c5_c_p = !c5_c_b;
  if (c5_c_p) {
    c5_b_idx = 1;
  } else {
    c5_b_idx = 0;
    c5_c_k = 2;
    c5_exitg1 = false;
    while ((!c5_exitg1) && (c5_c_k < 71821)) {
      c5_g_x = chartInstance->c5_Hgray[c5_c_k - 1];
      c5_h_x = c5_g_x;
      c5_d_b = muDoubleScalarIsNaN(c5_h_x);
      c5_d_p = !c5_d_b;
      if (c5_d_p) {
        c5_b_idx = c5_c_k;
        c5_exitg1 = true;
      } else {
        c5_c_k++;
      }
    }
  }

  if (c5_b_idx == 0) {
    c5_maxval = chartInstance->c5_Hgray[0];
  } else {
    c5_i_st.site = &c5_o_emlrtRSI;
    c5_b_first = c5_b_idx - 1;
    c5_b_ex = chartInstance->c5_Hgray[c5_b_first];
    c5_i6 = c5_b_first;
    c5_j_st.site = &c5_p_emlrtRSI;
    c5_b_overflow = false;
    if (c5_b_overflow) {
      c5_k_st.site = &c5_q_emlrtRSI;
      c5_check_forloop_overflow_error(chartInstance, &c5_k_st, c5_b_overflow);
    }

    for (c5_d_k = c5_i6 + 2; c5_d_k < 71821; c5_d_k++) {
      if (c5_b_ex < chartInstance->c5_Hgray[c5_d_k - 1]) {
        c5_b_ex = chartInstance->c5_Hgray[c5_d_k - 1];
      }
    }

    c5_maxval = c5_b_ex;
  }

  c5_limits[0] = c5_b_minval;
  c5_limits[1] = c5_maxval;
  if (c5_limits[0] == c5_limits[1]) {
    for (c5_i7 = 0; c5_i7 < 71820; c5_i7++) {
      chartInstance->c5_Hgray[c5_i7] = (*chartInstance->c5_H)[c5_i7];
    }
  } else {
    c5_delta = 1.0 / (c5_limits[1] - c5_limits[0]);
    c5_c_st.site = &c5_i_emlrtRSI;
    c5_varargin_1 = c5_delta;
    c5_varargin_3 = -c5_limits[0] * c5_delta;
    c5_d_st.site = &c5_w_emlrtRSI;
    c5_b_varargin_1 = c5_varargin_1;
    c5_b_varargin_3 = c5_varargin_3;
    c5_e_st.site = &c5_x_emlrtRSI;
    c5_c_varargin_1 = c5_b_varargin_1;
    c5_c_varargin_3 = c5_b_varargin_3;
    for (c5_i_k = 0; c5_i_k < 71820; c5_i_k++) {
      c5_j_k = 1.0 + (real_T)c5_i_k;
      if (c5_j_k != (real_T)(int32_T)muDoubleScalarFloor(c5_j_k)) {
        emlrtIntegerCheckR2012b(c5_j_k, &c5_emlrtDCI, &c5_e_st);
      }

      c5_i11 = (int32_T)c5_j_k;
      if ((c5_i11 < 1) || (c5_i11 > 71820)) {
        emlrtDynamicBoundsCheckR2012b(c5_i11, 1, 71820, &c5_emlrtBCI, &c5_e_st);
      }

      c5_val = c5_c_varargin_1 * (*chartInstance->c5_H)[c5_i11 - 1];
      c5_val += c5_c_varargin_3;
      c5_k_x = c5_val;
      c5_e_y = c5_k_x;
      if (c5_j_k != (real_T)(int32_T)muDoubleScalarFloor(c5_j_k)) {
        emlrtIntegerCheckR2012b(c5_j_k, &c5_b_emlrtDCI, &c5_e_st);
      }

      c5_i13 = (int32_T)c5_j_k;
      if ((c5_i13 < 1) || (c5_i13 > 71820)) {
        emlrtDynamicBoundsCheckR2012b(c5_i13, 1, 71820, &c5_b_emlrtBCI, &c5_e_st);
      }

      chartInstance->c5_Hgray[c5_i13 - 1] = c5_e_y;
    }
  }

  for (c5_e_k = 0; c5_e_k < 71820; c5_e_k++) {
    c5_g_k = c5_e_k;
    c5_i_x = chartInstance->c5_Hgray[c5_g_k];
    c5_j_x = c5_i_x;
    c5_c_ex = muDoubleScalarMin(c5_j_x, 1.0);
    chartInstance->c5_minval[c5_g_k] = c5_c_ex;
  }

  for (c5_f_k = 0; c5_f_k < 71820; c5_f_k++) {
    c5_h_k = c5_f_k;
    c5_y = chartInstance->c5_minval[c5_h_k];
    c5_b_y = c5_y;
    c5_d_ex = muDoubleScalarMax(0.0, c5_b_y);
    chartInstance->c5_Hgray[c5_h_k] = c5_d_ex;
  }

  for (c5_i8 = 0; c5_i8 < 71820; c5_i8++) {
    chartInstance->c5_b_Hgray[c5_i8] = chartInstance->c5_Hgray[c5_i8];
  }

  c5_b_st.site = &c5_b_emlrtRSI;
  c5_imadjust(chartInstance, &c5_b_st, chartInstance->c5_b_Hgray,
              chartInstance->c5_Hgray);
  for (c5_i9 = 0; c5_i9 < 5; c5_i9++) {
    c5_r.Value[c5_i9] = c5_b_cv[c5_i9];
  }

  for (c5_i10 = 0; c5_i10 < 5; c5_i10++) {
    c5_r1.Value[c5_i10] = c5_cv1[c5_i10];
  }

  c5_c_y = NULL;
  sf_mex_assign(&c5_c_y, sf_mex_create("y", chartInstance->c5_Hgray, 0, 0U, 1,
    0U, 2, 399, 180), false);
  c5_d_y = NULL;
  sf_mex_assign(&c5_d_y, sf_mex_create_class_instance("coder.internal.string"),
                false);
  for (c5_i12 = 0; c5_i12 < 5; c5_i12++) {
    c5_u[c5_i12] = c5_r.Value[c5_i12];
  }

  c5_f_y = NULL;
  sf_mex_assign(&c5_f_y, sf_mex_create("y", c5_u, 10, 0U, 1, 0U, 2, 1, 5), false);
  c5_propValues[0] = c5_f_y;
  sf_mex_set_all_properties(&c5_d_y, 0, 1, &c5_propNames[0], &c5_propClasses[0],
    &c5_propValues[0]);
  sf_mex_assign(&c5_d_y, sf_mex_convert_to_redirect_source(c5_d_y, 0,
    "coder.internal.string"), false);
  c5_g_y = NULL;
  sf_mex_assign(&c5_g_y, sf_mex_create("y", *chartInstance->c5_T, 0, 0U, 1, 0U,
    2, 1, 180), false);
  c5_h_y = NULL;
  sf_mex_assign(&c5_h_y, sf_mex_create_class_instance("coder.internal.string"),
                false);
  for (c5_i14 = 0; c5_i14 < 5; c5_i14++) {
    c5_u[c5_i14] = c5_r1.Value[c5_i14];
  }

  c5_i_y = NULL;
  sf_mex_assign(&c5_i_y, sf_mex_create("y", c5_u, 10, 0U, 1, 0U, 2, 1, 5), false);
  c5_b_propValues[0] = c5_i_y;
  sf_mex_set_all_properties(&c5_h_y, 0, 1, &c5_b_propNames[0],
    &c5_b_propClasses[0], &c5_b_propValues[0]);
  sf_mex_assign(&c5_h_y, sf_mex_convert_to_redirect_source(c5_h_y, 0,
    "coder.internal.string"), false);
  c5_j_y = NULL;
  sf_mex_assign(&c5_j_y, sf_mex_create("y", *chartInstance->c5_R, 0, 0U, 1, 0U,
    2, 1, 399), false);
  c5_b_st.site = &c5_c_emlrtRSI;
  c5_imagesc(chartInstance, &c5_b_st, c5_c_y, c5_d_y, c5_g_y, c5_h_y, c5_j_y);
  c5_b_st.site = &c5_d_emlrtRSI;
  c5_colormap(chartInstance, &c5_b_st, c5_hot(chartInstance, &c5_b_st));
  for (c5_i15 = 0; c5_i15 < 15; c5_i15++) {
    c5_r2.Value[c5_i15] = c5_cv2[c5_i15];
  }

  c5_k_y = NULL;
  sf_mex_assign(&c5_k_y, sf_mex_create_class_instance("coder.internal.string"),
                false);
  for (c5_i16 = 0; c5_i16 < 15; c5_i16++) {
    c5_b_u[c5_i16] = c5_r2.Value[c5_i16];
  }

  c5_l_y = NULL;
  sf_mex_assign(&c5_l_y, sf_mex_create("y", c5_b_u, 10, 0U, 1, 0U, 2, 1, 15),
                false);
  c5_c_propValues[0] = c5_l_y;
  sf_mex_set_all_properties(&c5_k_y, 0, 1, &c5_c_propNames[0],
    &c5_c_propClasses[0], &c5_c_propValues[0]);
  sf_mex_assign(&c5_k_y, sf_mex_convert_to_redirect_source(c5_k_y, 0,
    "coder.internal.string"), false);
  c5_b_st.site = &c5_e_emlrtRSI;
  c5_title(chartInstance, &c5_b_st, c5_k_y);
  for (c5_i17 = 0; c5_i17 < 6; c5_i17++) {
    c5_r3.Value[c5_i17] = c5_cv3[c5_i17];
  }

  c5_m_y = NULL;
  sf_mex_assign(&c5_m_y, sf_mex_create_class_instance("coder.internal.string"),
                false);
  for (c5_i18 = 0; c5_i18 < 6; c5_i18++) {
    c5_c_u[c5_i18] = c5_r3.Value[c5_i18];
  }

  c5_n_y = NULL;
  sf_mex_assign(&c5_n_y, sf_mex_create("y", c5_c_u, 10, 0U, 1, 0U, 2, 1, 6),
                false);
  c5_d_propValues[0] = c5_n_y;
  sf_mex_set_all_properties(&c5_m_y, 0, 1, &c5_d_propNames[0],
    &c5_d_propClasses[0], &c5_d_propValues[0]);
  sf_mex_assign(&c5_m_y, sf_mex_convert_to_redirect_source(c5_m_y, 0,
    "coder.internal.string"), false);
  c5_b_st.site = &c5_f_emlrtRSI;
  c5_xlabel(chartInstance, &c5_b_st, c5_m_y);
  for (c5_i19 = 0; c5_i19 < 4; c5_i19++) {
    c5_r4.Value[c5_i19] = c5_cv4[c5_i19];
  }

  c5_o_y = NULL;
  sf_mex_assign(&c5_o_y, sf_mex_create_class_instance("coder.internal.string"),
                false);
  for (c5_i20 = 0; c5_i20 < 4; c5_i20++) {
    c5_d_u[c5_i20] = c5_r4.Value[c5_i20];
  }

  c5_p_y = NULL;
  sf_mex_assign(&c5_p_y, sf_mex_create("y", c5_d_u, 10, 0U, 1, 0U, 2, 1, 4),
                false);
  c5_e_propValues[0] = c5_p_y;
  sf_mex_set_all_properties(&c5_o_y, 0, 1, &c5_e_propNames[0],
    &c5_e_propClasses[0], &c5_e_propValues[0]);
  sf_mex_assign(&c5_o_y, sf_mex_convert_to_redirect_source(c5_o_y, 0,
    "coder.internal.string"), false);
  c5_b_st.site = &c5_g_emlrtRSI;
  c5_ylabel(chartInstance, &c5_b_st, c5_o_y);
}

static void ext_mode_exec_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c5_update_jit_animation_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c5_do_animation_call_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance)
{
  const mxArray *c5_st = NULL;
  const mxArray *c5_y = NULL;
  (void)chartInstance;
  c5_st = NULL;
  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c5_st, c5_y, false);
  return c5_st;
}

static void set_sim_state_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance, const mxArray *c5_st)
{
  const mxArray *c5_u;
  chartInstance->c5_doneDoubleBufferReInit = true;
  c5_u = sf_mex_dup(c5_st);
  sf_mex_destroy(&c5_u);
  sf_mex_destroy(&c5_st);
}

static void c5_check_forloop_overflow_error
  (SFc5_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c5_sp, boolean_T c5_overflow)
{
  static char_T c5_b_cv[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o', 'p',
    '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  static char_T c5_cv1[5] = { 'i', 'n', 't', '3', '2' };

  const mxArray *c5_b_y = NULL;
  const mxArray *c5_c_y = NULL;
  const mxArray *c5_y = NULL;
  (void)chartInstance;
  if (c5_overflow) {
    c5_y = NULL;
    sf_mex_assign(&c5_y, sf_mex_create("y", c5_b_cv, 10, 0U, 1, 0U, 2, 1, 34),
                  false);
    c5_b_y = NULL;
    sf_mex_assign(&c5_b_y, sf_mex_create("y", c5_b_cv, 10, 0U, 1, 0U, 2, 1, 34),
                  false);
    c5_c_y = NULL;
    sf_mex_assign(&c5_c_y, sf_mex_create("y", c5_cv1, 10, 0U, 1, 0U, 2, 1, 5),
                  false);
    sf_mex_call(c5_sp, &c5_emlrtMCI, "error", 0U, 2U, 14, c5_y, 14, sf_mex_call
                (c5_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call(c5_sp, NULL,
      "message", 1U, 2U, 14, c5_b_y, 14, c5_c_y)));
  }
}

static void c5_imadjust(SFc5_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c5_sp, real_T c5_varargin_1[71820], real_T c5_out[71820])
{
  static char_T c5_cv1[40] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'i', 'm', 'a',
    'd', 'j', 'u', 's', 't', ':', 'l', 'o', 'w', 'M', 'u', 's', 't', 'B', 'e',
    'S', 'm', 'a', 'l', 'l', 'e', 'r', 'T', 'h', 'a', 'n', 'H', 'i', 'g', 'h' };

  static char_T c5_cv2[39] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'i', 'm', 'a',
    'd', 'j', 'u', 's', 't', ':', 'p', 'a', 'r', 'a', 'm', 'e', 't', 'e', 'r',
    's', 'A', 'r', 'e', 'O', 'u', 't', 'O', 'f', 'R', 'a', 'n', 'g', 'e' };

  static char_T c5_b_cv[3] = { 'o', 'f', 'f' };

  emlrtStack c5_b_st;
  emlrtStack c5_st;
  const mxArray *c5_b_y = NULL;
  const mxArray *c5_d_y = NULL;
  const mxArray *c5_e_y = NULL;
  const mxArray *c5_f_y = NULL;
  const mxArray *c5_g_y = NULL;
  const mxArray *c5_s = NULL;
  const mxArray *c5_y = NULL;
  real_T c5_lowhigh_in[2];
  real_T c5_a;
  real_T c5_ab_x;
  real_T c5_b_a;
  real_T c5_b_b;
  real_T c5_b_fullRange;
  real_T c5_b_hIn;
  real_T c5_b_i;
  real_T c5_b_lIn;
  real_T c5_b_maxval;
  real_T c5_b_minval;
  real_T c5_b_varargin_1;
  real_T c5_b_varargin_2;
  real_T c5_bb_x;
  real_T c5_c;
  real_T c5_c_a;
  real_T c5_c_b;
  real_T c5_c_maxval;
  real_T c5_c_minval;
  real_T c5_c_varargin_1;
  real_T c5_c_x;
  real_T c5_cb_x;
  real_T c5_d_a;
  real_T c5_d_minval;
  real_T c5_d_varargin_1;
  real_T c5_d_x;
  real_T c5_db_x;
  real_T c5_e_a;
  real_T c5_e_varargin_1;
  real_T c5_e_x;
  real_T c5_eb_x;
  real_T c5_f_a;
  real_T c5_f_varargin_1;
  real_T c5_f_x;
  real_T c5_fb_x;
  real_T c5_fullRange;
  real_T c5_g_a;
  real_T c5_g_varargin_1;
  real_T c5_g_x;
  real_T c5_gb_x;
  real_T c5_hIn;
  real_T c5_h_x;
  real_T c5_h_y;
  real_T c5_highIn;
  real_T c5_i_x;
  real_T c5_i_y;
  real_T c5_j_x;
  real_T c5_j_y;
  real_T c5_k_x;
  real_T c5_k_y;
  real_T c5_lIn;
  real_T c5_l_x;
  real_T c5_l_y;
  real_T c5_lowIn;
  real_T c5_m_x;
  real_T c5_m_y;
  real_T c5_maxval;
  real_T c5_n_x;
  real_T c5_n_y;
  real_T c5_o_x;
  real_T c5_o_y;
  real_T c5_p_x;
  real_T c5_p_y;
  real_T c5_q_x;
  real_T c5_q_y;
  real_T c5_r_x;
  real_T c5_s_x;
  real_T c5_t_x;
  real_T c5_u_x;
  real_T c5_v_x;
  real_T c5_varargin_2;
  real_T c5_w_x;
  real_T c5_x_x;
  real_T c5_y_x;
  int32_T c5_c_i;
  int32_T c5_i;
  int32_T c5_i1;
  boolean_T c5_b;
  boolean_T c5_b1;
  boolean_T c5_b_isInvalid;
  boolean_T c5_b_x;
  boolean_T c5_c_isInvalid;
  boolean_T c5_c_y;
  boolean_T c5_d_isInvalid;
  boolean_T c5_isInvalid;
  boolean_T c5_x;
  c5_st.prev = c5_sp;
  c5_st.tls = c5_sp->tls;
  c5_b_st.prev = &c5_st;
  c5_b_st.tls = c5_st.tls;
  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_create("y", c5_b_cv, 10, 0U, 1, 0U, 2, 1, 3),
                false);
  c5_b_y = NULL;
  sf_mex_assign(&c5_b_y, sf_mex_create("y", c5_cv, 10, 0U, 1, 0U, 2, 1, 27),
                false);
  c5_st.site = &c5_bb_emlrtRSI;
  sf_mex_assign(&c5_s, c5_b_warning(chartInstance, &c5_st, c5_y, c5_b_y), false);
  c5_st.site = &c5_y_emlrtRSI;
  c5_stretchlim(chartInstance, &c5_st, c5_varargin_1, c5_lowhigh_in);
  c5_st.site = &c5_cb_emlrtRSI;
  c5_c_warning(chartInstance, &c5_st, sf_mex_dup(c5_s));
  c5_lowIn = c5_lowhigh_in[0];
  c5_highIn = c5_lowhigh_in[1];
  c5_x = (c5_lowIn >= c5_highIn);
  c5_b_x = c5_x;
  if (!c5_b_x) {
    c5_b = true;
  } else {
    c5_b = false;
  }

  c5_c_y = !c5_b;
  if (c5_c_y) {
    c5_d_y = NULL;
    sf_mex_assign(&c5_d_y, sf_mex_create("y", c5_cv1, 10, 0U, 1, 0U, 2, 1, 40),
                  false);
    c5_e_y = NULL;
    sf_mex_assign(&c5_e_y, sf_mex_create("y", c5_cv1, 10, 0U, 1, 0U, 2, 1, 40),
                  false);
    sf_mex_call(c5_sp, &c5_c_emlrtMCI, "error", 0U, 2U, 14, c5_d_y, 14,
                sf_mex_call(c5_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c5_sp, NULL, "message", 1U, 1U, 14, c5_e_y)));
  }

  c5_fullRange = c5_lowIn;
  c5_b_varargin_1 = c5_fullRange;
  c5_c_x = c5_b_varargin_1;
  c5_d_x = c5_c_x;
  c5_e_x = c5_d_x;
  c5_f_x = c5_e_x;
  c5_g_x = c5_f_x;
  c5_b_minval = c5_g_x;
  if (c5_b_minval < 0.0) {
    c5_isInvalid = true;
  } else {
    c5_c_varargin_1 = c5_fullRange;
    c5_h_x = c5_c_varargin_1;
    c5_i_x = c5_h_x;
    c5_j_x = c5_i_x;
    c5_k_x = c5_j_x;
    c5_l_x = c5_k_x;
    c5_maxval = c5_l_x;
    if (c5_maxval > 1.0) {
      c5_isInvalid = true;
    } else {
      c5_isInvalid = false;
    }
  }

  c5_b_isInvalid = c5_isInvalid;
  if (c5_b_isInvalid) {
    c5_b1 = true;
  } else {
    c5_b_fullRange = c5_highIn;
    c5_d_varargin_1 = c5_b_fullRange;
    c5_m_x = c5_d_varargin_1;
    c5_n_x = c5_m_x;
    c5_o_x = c5_n_x;
    c5_p_x = c5_o_x;
    c5_q_x = c5_p_x;
    c5_c_minval = c5_q_x;
    if (c5_c_minval < 0.0) {
      c5_c_isInvalid = true;
    } else {
      c5_e_varargin_1 = c5_b_fullRange;
      c5_r_x = c5_e_varargin_1;
      c5_s_x = c5_r_x;
      c5_t_x = c5_s_x;
      c5_u_x = c5_t_x;
      c5_v_x = c5_u_x;
      c5_b_maxval = c5_v_x;
      if (c5_b_maxval > 1.0) {
        c5_c_isInvalid = true;
      } else {
        c5_c_isInvalid = false;
      }
    }

    c5_d_isInvalid = c5_c_isInvalid;
    if (c5_d_isInvalid) {
      c5_b1 = true;
    } else {
      c5_b1 = false;
    }
  }

  if (c5_b1) {
    c5_f_y = NULL;
    sf_mex_assign(&c5_f_y, sf_mex_create("y", c5_cv2, 10, 0U, 1, 0U, 2, 1, 39),
                  false);
    c5_g_y = NULL;
    sf_mex_assign(&c5_g_y, sf_mex_create("y", c5_cv2, 10, 0U, 1, 0U, 2, 1, 39),
                  false);
    sf_mex_call(c5_sp, &c5_b_emlrtMCI, "error", 0U, 2U, 14, c5_f_y, 14,
                sf_mex_call(c5_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c5_sp, NULL, "message", 1U, 1U, 14, c5_g_y)));
  }

  c5_st.site = &c5_ab_emlrtRSI;
  c5_lIn = c5_lowIn;
  c5_hIn = c5_highIn;
  c5_b_st.site = &c5_jb_emlrtRSI;
  c5_b_lIn = c5_lIn;
  c5_b_hIn = c5_hIn;
  for (c5_i = 0; c5_i < 71820; c5_i++) {
    c5_b_i = 1.0 + (real_T)c5_i;
    c5_f_varargin_1 = c5_b_hIn;
    if (c5_b_i != (real_T)(int32_T)muDoubleScalarFloor(c5_b_i)) {
      emlrtIntegerCheckR2012b(c5_b_i, &c5_c_emlrtDCI, &c5_b_st);
    }

    c5_c_i = (int32_T)c5_b_i;
    if ((c5_c_i < 1) || (c5_c_i > 71820)) {
      emlrtDynamicBoundsCheckR2012b(c5_c_i, 1, 71820, &c5_c_emlrtBCI, &c5_b_st);
    }

    c5_varargin_2 = c5_varargin_1[c5_c_i - 1];
    c5_w_x = c5_f_varargin_1;
    c5_h_y = c5_varargin_2;
    c5_x_x = c5_w_x;
    c5_i_y = c5_h_y;
    c5_y_x = c5_x_x;
    c5_j_y = c5_i_y;
    c5_a = c5_y_x;
    c5_b_b = c5_j_y;
    c5_ab_x = c5_a;
    c5_k_y = c5_b_b;
    c5_bb_x = c5_ab_x;
    c5_l_y = c5_k_y;
    c5_d_minval = muDoubleScalarMin(c5_bb_x, c5_l_y);
    c5_g_varargin_1 = c5_b_lIn;
    c5_b_varargin_2 = c5_d_minval;
    c5_cb_x = c5_g_varargin_1;
    c5_m_y = c5_b_varargin_2;
    c5_db_x = c5_cb_x;
    c5_n_y = c5_m_y;
    c5_eb_x = c5_db_x;
    c5_o_y = c5_n_y;
    c5_b_a = c5_eb_x;
    c5_c_b = c5_o_y;
    c5_fb_x = c5_b_a;
    c5_p_y = c5_c_b;
    c5_gb_x = c5_fb_x;
    c5_q_y = c5_p_y;
    c5_c_maxval = muDoubleScalarMax(c5_gb_x, c5_q_y);
    c5_c_a = (c5_c_maxval - c5_b_lIn) / (c5_b_hIn - c5_b_lIn);
    c5_d_a = c5_c_a;
    c5_e_a = c5_d_a;
    c5_f_a = c5_e_a;
    c5_g_a = c5_f_a;
    c5_c = c5_g_a;
    if (c5_b_i != (real_T)(int32_T)muDoubleScalarFloor(c5_b_i)) {
      emlrtIntegerCheckR2012b(c5_b_i, &c5_d_emlrtDCI, &c5_b_st);
    }

    c5_i1 = (int32_T)c5_b_i;
    if ((c5_i1 < 1) || (c5_i1 > 71820)) {
      emlrtDynamicBoundsCheckR2012b(c5_i1, 1, 71820, &c5_d_emlrtBCI, &c5_b_st);
    }

    c5_out[c5_i1 - 1] = c5_c;
  }

  sf_mex_destroy(&c5_s);
}

static void c5_stretchlim(SFc5_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c5_sp, real_T c5_varargin_1[71820], real_T c5_lowhigh[2])
{
  emlrtStack c5_st;
  real_T c5_b_idx;
  real_T c5_ihigh;
  real_T c5_ilow;
  real_T c5_s;
  real_T c5_y;
  int32_T c5_b_k;
  int32_T c5_i;
  int32_T c5_i1;
  int32_T c5_i2;
  int32_T c5_i3;
  int32_T c5_i4;
  int32_T c5_i5;
  int32_T c5_ib;
  int32_T c5_idx;
  int32_T c5_k;
  boolean_T c5_findHighFlag;
  boolean_T c5_findLowFlag;
  c5_st.prev = c5_sp;
  c5_st.tls = c5_sp->tls;
  c5_st.site = &c5_db_emlrtRSI;
  c5_imhist(chartInstance, &c5_st, c5_varargin_1, chartInstance->c5_N);
  for (c5_i = 0; c5_i < 65536; c5_i++) {
    chartInstance->c5_cdf[c5_i] = chartInstance->c5_N[c5_i];
  }

  for (c5_k = 0; c5_k < 65535; c5_k++) {
    c5_b_k = c5_k;
    chartInstance->c5_cdf[c5_b_k + 1] += chartInstance->c5_cdf[c5_b_k];
  }

  c5_s = c5_sumColumnB4(chartInstance, chartInstance->c5_N, 1, 1);
  for (c5_ib = 0; c5_ib < 15; c5_ib++) {
    c5_s += c5_sumColumnB4(chartInstance, chartInstance->c5_N, 1, 1 + ((c5_ib +
      1) << 12));
  }

  c5_y = c5_s;
  for (c5_i1 = 0; c5_i1 < 65536; c5_i1++) {
    chartInstance->c5_cdf[c5_i1] /= c5_y;
  }

  c5_findLowFlag = true;
  c5_findHighFlag = true;
  c5_ilow = 0.0;
  c5_ihigh = 0.0;
  for (c5_idx = 0; c5_idx < 65536; c5_idx++) {
    c5_b_idx = 1.0 + (real_T)c5_idx;
    if (c5_findLowFlag) {
      if (c5_b_idx != (real_T)(int32_T)muDoubleScalarFloor(c5_b_idx)) {
        emlrtIntegerCheckR2012b(c5_b_idx, &c5_e_emlrtDCI, (emlrtConstCTX)c5_sp);
      }

      c5_i4 = (int32_T)c5_b_idx;
      if ((c5_i4 < 1) || (c5_i4 > 65536)) {
        emlrtDynamicBoundsCheckR2012b(c5_i4, 1, 65536, &c5_e_emlrtBCI,
          (emlrtConstCTX)c5_sp);
      }

      if (chartInstance->c5_cdf[c5_i4 - 1] > 0.01) {
        c5_ilow = c5_b_idx;
        c5_findLowFlag = false;
      }
    }

    if (c5_findHighFlag) {
      if (c5_b_idx != (real_T)(int32_T)muDoubleScalarFloor(c5_b_idx)) {
        emlrtIntegerCheckR2012b(c5_b_idx, &c5_f_emlrtDCI, (emlrtConstCTX)c5_sp);
      }

      c5_i5 = (int32_T)c5_b_idx;
      if ((c5_i5 < 1) || (c5_i5 > 65536)) {
        emlrtDynamicBoundsCheckR2012b(c5_i5, 1, 65536, &c5_f_emlrtBCI,
          (emlrtConstCTX)c5_sp);
      }

      if (chartInstance->c5_cdf[c5_i5 - 1] >= 0.99) {
        c5_ihigh = c5_b_idx;
        c5_findHighFlag = false;
      }
    }
  }

  if (c5_ilow == c5_ihigh) {
    for (c5_i2 = 0; c5_i2 < 2; c5_i2++) {
      c5_lowhigh[c5_i2] = 1.0 + 65535.0 * (real_T)c5_i2;
    }
  } else {
    c5_lowhigh[0] = c5_ilow;
    c5_lowhigh[1] = c5_ihigh;
  }

  for (c5_i3 = 0; c5_i3 < 2; c5_i3++) {
    c5_lowhigh[c5_i3] = (c5_lowhigh[c5_i3] - 1.0) / 65535.0;
  }
}

static void c5_imhist(SFc5_flightControlSystemInstanceStruct *chartInstance,
                      const emlrtStack *c5_sp, real_T c5_varargin_1[71820],
                      real_T c5_yout[65536])
{
  emlrtStack c5_b_st;
  emlrtStack c5_st;
  real_T c5_a;
  real_T c5_b_a;
  real_T c5_b_i;
  real_T c5_b_x;
  real_T c5_d;
  real_T c5_d1;
  real_T c5_idx;
  real_T c5_out;
  real_T c5_x;
  int32_T c5_b_c;
  int32_T c5_c;
  int32_T c5_c_i;
  int32_T c5_i;
  int32_T c5_i1;
  int32_T c5_i2;
  int32_T c5_i3;
  int32_T c5_i4;
  boolean_T c5_b;
  boolean_T c5_b_b;
  boolean_T c5_nanFlag;
  c5_st.prev = c5_sp;
  c5_st.tls = c5_sp->tls;
  c5_b_st.prev = &c5_st;
  c5_b_st.tls = c5_st.tls;
  c5_st.site = &c5_eb_emlrtRSI;
  c5_b_st.site = &c5_fb_emlrtRSI;
  c5_out = 1.0;
  getnumcores(&c5_out);
  c5_b_st.site = &c5_gb_emlrtRSI;
  memset(&c5_yout[0], 0, sizeof(real_T) << 16);
  c5_nanFlag = false;
  for (c5_i = 0; c5_i < 71820; c5_i++) {
    c5_b_i = 1.0 + (real_T)c5_i;
    if (c5_b_i != (real_T)(int32_T)muDoubleScalarFloor(c5_b_i)) {
      emlrtIntegerCheckR2012b(c5_b_i, &c5_g_emlrtDCI, &c5_b_st);
    }

    c5_c_i = (int32_T)c5_b_i;
    if ((c5_c_i < 1) || (c5_c_i > 71820)) {
      emlrtDynamicBoundsCheckR2012b(c5_c_i, 1, 71820, &c5_g_emlrtBCI, &c5_b_st);
    }

    c5_x = c5_varargin_1[c5_c_i - 1];
    c5_b = muDoubleScalarIsNaN(c5_x);
    if (c5_b) {
      c5_nanFlag = true;
      c5_idx = 0.0;
    } else {
      if (c5_b_i != (real_T)(int32_T)muDoubleScalarFloor(c5_b_i)) {
        emlrtIntegerCheckR2012b(c5_b_i, &c5_h_emlrtDCI, &c5_b_st);
      }

      c5_i1 = (int32_T)c5_b_i;
      if ((c5_i1 < 1) || (c5_i1 > 71820)) {
        emlrtDynamicBoundsCheckR2012b(c5_i1, 1, 71820, &c5_h_emlrtBCI, &c5_b_st);
      }

      c5_idx = c5_varargin_1[c5_i1 - 1] * 65535.0 + 0.5;
    }

    if (c5_idx < 0.0) {
      c5_yout[0]++;
    } else if (c5_idx > 65535.0) {
      c5_yout[65535]++;
    } else {
      if (c5_b_i != (real_T)(int32_T)muDoubleScalarFloor(c5_b_i)) {
        emlrtIntegerCheckR2012b(c5_b_i, &c5_i_emlrtDCI, &c5_b_st);
      }

      c5_i2 = (int32_T)c5_b_i;
      if ((c5_i2 < 1) || (c5_i2 > 71820)) {
        emlrtDynamicBoundsCheckR2012b(c5_i2, 1, 71820, &c5_i_emlrtBCI, &c5_b_st);
      }

      c5_b_x = c5_varargin_1[c5_i2 - 1];
      c5_b_b = muDoubleScalarIsInf(c5_b_x);
      if (c5_b_b) {
        c5_yout[65535]++;
      } else {
        c5_a = c5_idx;
        c5_c = (int32_T)c5_a;
        c5_b_a = c5_idx;
        c5_b_c = (int32_T)c5_b_a;
        c5_d = (real_T)(c5_b_c + 1);
        if (c5_d != (real_T)(int32_T)muDoubleScalarFloor(c5_d)) {
          emlrtIntegerCheckR2012b(c5_d, &c5_j_emlrtDCI, &c5_b_st);
        }

        c5_i3 = (int32_T)muDoubleScalarFloor(c5_d);
        if ((c5_i3 < 1) || (c5_i3 > 65536)) {
          emlrtDynamicBoundsCheckR2012b(c5_i3, 1, 65536, &c5_j_emlrtBCI,
            &c5_b_st);
        }

        c5_d1 = (real_T)(c5_c + 1);
        if (c5_d1 != (real_T)(int32_T)muDoubleScalarFloor(c5_d1)) {
          emlrtIntegerCheckR2012b(c5_d1, &c5_k_emlrtDCI, &c5_b_st);
        }

        c5_i4 = (int32_T)muDoubleScalarFloor(c5_d1);
        if ((c5_i4 < 1) || (c5_i4 > 65536)) {
          emlrtDynamicBoundsCheckR2012b(c5_i4, 1, 65536, &c5_k_emlrtBCI,
            &c5_b_st);
        }

        c5_yout[c5_i4 - 1] = c5_yout[c5_i3 - 1] + 1.0;
      }
    }
  }

  if (c5_nanFlag) {
    c5_b_st.site = &c5_hb_emlrtRSI;
    c5_warning(chartInstance, &c5_b_st);
  }
}

static void c5_warning(SFc5_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c5_sp)
{
  static char_T c5_b_cv[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T c5_cv1[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack c5_st;
  const mxArray *c5_b_y = NULL;
  const mxArray *c5_c_y = NULL;
  const mxArray *c5_y = NULL;
  c5_st.prev = c5_sp;
  c5_st.tls = c5_sp->tls;
  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_create("y", c5_b_cv, 10, 0U, 1, 0U, 2, 1, 7),
                false);
  c5_b_y = NULL;
  sf_mex_assign(&c5_b_y, sf_mex_create("y", c5_cv1, 10, 0U, 1, 0U, 2, 1, 7),
                false);
  c5_c_y = NULL;
  sf_mex_assign(&c5_c_y, sf_mex_create("y", c5_cv, 10, 0U, 1, 0U, 2, 1, 27),
                false);
  c5_st.site = &c5_ib_emlrtRSI;
  c5_b_feval(chartInstance, &c5_st, c5_y, c5_feval(chartInstance, &c5_st, c5_b_y,
              c5_c_y));
}

static real_T c5_sumColumnB4(SFc5_flightControlSystemInstanceStruct
  *chartInstance, real_T c5_x[65536], int32_T c5_col, int32_T c5_vstart)
{
  real_T c5_psum1;
  real_T c5_psum2;
  real_T c5_psum3;
  real_T c5_psum4;
  int32_T c5_b_k;
  int32_T c5_i1;
  int32_T c5_i2;
  int32_T c5_i3;
  int32_T c5_i4;
  int32_T c5_k;
  (void)chartInstance;
  c5_i1 = (c5_vstart + ((c5_col - 1) << 16)) - 1;
  c5_i2 = c5_i1 + 1024;
  c5_i3 = c5_i1 + 2048;
  c5_i4 = c5_i1 + 3072;
  c5_psum1 = c5_x[c5_i1];
  c5_psum2 = c5_x[c5_i2];
  c5_psum3 = c5_x[c5_i3];
  c5_psum4 = c5_x[c5_i4];
  for (c5_k = 0; c5_k < 1023; c5_k++) {
    c5_b_k = 1 + c5_k;
    c5_psum1 += c5_x[c5_i1 + c5_b_k];
    c5_psum2 += c5_x[c5_i2 + c5_b_k];
    c5_psum3 += c5_x[c5_i3 + c5_b_k];
    c5_psum4 += c5_x[c5_i4 + c5_b_k];
  }

  return (c5_psum1 + c5_psum2) + (c5_psum3 + c5_psum4);
}

const mxArray *sf_c5_flightControlSystem_get_eml_resolved_functions_info(void)
{
  const mxArray *c5_nameCaptureInfo = NULL;
  c5_nameCaptureInfo = NULL;
  sf_mex_assign(&c5_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1, 0U, 2, 0, 1), false);
  return c5_nameCaptureInfo;
}

static const mxArray *c5_imagesc(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c5_sp, const mxArray *c5_input0, const
  mxArray *c5_input1, const mxArray *c5_input2, const mxArray *c5_input3, const
  mxArray *c5_input4)
{
  const mxArray *c5_m = NULL;
  (void)chartInstance;
  c5_m = NULL;
  sf_mex_assign(&c5_m, sf_mex_call(c5_sp, NULL, "imagesc", 0U, 5U, 14,
    sf_mex_dup(c5_input0), 14, sf_mex_dup(c5_input1), 14, sf_mex_dup(c5_input2),
    14, sf_mex_dup(c5_input3), 14, sf_mex_dup(c5_input4)), false);
  sf_mex_destroy(&c5_input0);
  sf_mex_destroy(&c5_input1);
  sf_mex_destroy(&c5_input2);
  sf_mex_destroy(&c5_input3);
  sf_mex_destroy(&c5_input4);
  return c5_m;
}

static const mxArray *c5_hot(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c5_sp)
{
  const mxArray *c5_m = NULL;
  (void)chartInstance;
  c5_m = NULL;
  sf_mex_assign(&c5_m, sf_mex_call(c5_sp, NULL, "hot", 1U, 0U), false);
  return c5_m;
}

static const mxArray *c5_colormap(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c5_sp, const mxArray *c5_input0)
{
  const mxArray *c5_m = NULL;
  (void)chartInstance;
  c5_m = NULL;
  sf_mex_assign(&c5_m, sf_mex_call(c5_sp, NULL, "colormap", 0U, 1U, 14,
    sf_mex_dup(c5_input0)), false);
  sf_mex_destroy(&c5_input0);
  return c5_m;
}

static const mxArray *c5_title(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c5_sp, const mxArray *c5_input0)
{
  const mxArray *c5_m = NULL;
  (void)chartInstance;
  c5_m = NULL;
  sf_mex_assign(&c5_m, sf_mex_call(c5_sp, NULL, "title", 0U, 1U, 14, sf_mex_dup
    (c5_input0)), false);
  sf_mex_destroy(&c5_input0);
  return c5_m;
}

static const mxArray *c5_xlabel(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c5_sp, const mxArray *c5_input0)
{
  const mxArray *c5_m = NULL;
  (void)chartInstance;
  c5_m = NULL;
  sf_mex_assign(&c5_m, sf_mex_call(c5_sp, NULL, "xlabel", 0U, 1U, 14, sf_mex_dup
    (c5_input0)), false);
  sf_mex_destroy(&c5_input0);
  return c5_m;
}

static const mxArray *c5_ylabel(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c5_sp, const mxArray *c5_input0)
{
  const mxArray *c5_m = NULL;
  (void)chartInstance;
  c5_m = NULL;
  sf_mex_assign(&c5_m, sf_mex_call(c5_sp, NULL, "ylabel", 0U, 1U, 14, sf_mex_dup
    (c5_input0)), false);
  sf_mex_destroy(&c5_input0);
  return c5_m;
}

static const mxArray *c5_b_warning(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c5_sp, const mxArray *c5_input0, const
  mxArray *c5_input1)
{
  const mxArray *c5_m = NULL;
  (void)chartInstance;
  c5_m = NULL;
  sf_mex_assign(&c5_m, sf_mex_call(c5_sp, NULL, "warning", 1U, 2U, 14,
    sf_mex_dup(c5_input0), 14, sf_mex_dup(c5_input1)), false);
  sf_mex_destroy(&c5_input0);
  sf_mex_destroy(&c5_input1);
  return c5_m;
}

static const mxArray *c5_c_warning(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c5_sp, const mxArray *c5_input0)
{
  const mxArray *c5_m = NULL;
  (void)chartInstance;
  c5_m = NULL;
  sf_mex_assign(&c5_m, sf_mex_call(c5_sp, NULL, "warning", 0U, 1U, 14,
    sf_mex_dup(c5_input0)), false);
  sf_mex_destroy(&c5_input0);
  return c5_m;
}

static const mxArray *c5_feval(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c5_sp, const mxArray *c5_input0, const
  mxArray *c5_input1)
{
  const mxArray *c5_m = NULL;
  (void)chartInstance;
  c5_m = NULL;
  sf_mex_assign(&c5_m, sf_mex_call(c5_sp, NULL, "feval", 1U, 2U, 14, sf_mex_dup
    (c5_input0), 14, sf_mex_dup(c5_input1)), false);
  sf_mex_destroy(&c5_input0);
  sf_mex_destroy(&c5_input1);
  return c5_m;
}

static void c5_b_feval(SFc5_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c5_sp, const mxArray *c5_input0, const mxArray *c5_input1)
{
  (void)chartInstance;
  sf_mex_call(c5_sp, NULL, "feval", 0U, 2U, 14, sf_mex_dup(c5_input0), 14,
              sf_mex_dup(c5_input1));
  sf_mex_destroy(&c5_input0);
  sf_mex_destroy(&c5_input1);
}

static void init_dsm_address_info(SFc5_flightControlSystemInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc5_flightControlSystemInstanceStruct
  *chartInstance)
{
  chartInstance->c5_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c5_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c5_H = (real_T (*)[71820])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c5_T = (real_T (*)[180])ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c5_R = (real_T (*)[399])ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c5_flightControlSystem_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2209604142U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3966805268U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3895971425U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3573228792U);
}

mxArray *sf_c5_flightControlSystem_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,1);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.GetnumcoresBuildable"));
  return(mxcell3p);
}

mxArray *sf_c5_flightControlSystem_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("getnumcores");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c5_flightControlSystem_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c5_flightControlSystem(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiCOAGI2IOYAYiYGCGCF8hmhfEa4OAtcXAGISyoLUkHixUXJnilAOi8xF8xPLK3"
    "wzEvLZwAA+RkJgQ=="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c5_flightControlSystem_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sfl5sZbWiiAu5NBQ4G8PxWB";
}

static void sf_opaque_initialize_c5_flightControlSystem(void *chartInstanceVar)
{
  initialize_params_c5_flightControlSystem
    ((SFc5_flightControlSystemInstanceStruct*) chartInstanceVar);
  initialize_c5_flightControlSystem((SFc5_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c5_flightControlSystem(void *chartInstanceVar)
{
  enable_c5_flightControlSystem((SFc5_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c5_flightControlSystem(void *chartInstanceVar)
{
  disable_c5_flightControlSystem((SFc5_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c5_flightControlSystem(void *chartInstanceVar)
{
  sf_gateway_c5_flightControlSystem((SFc5_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c5_flightControlSystem(SimStruct*
  S)
{
  return get_sim_state_c5_flightControlSystem
    ((SFc5_flightControlSystemInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c5_flightControlSystem(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c5_flightControlSystem((SFc5_flightControlSystemInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c5_flightControlSystem(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc5_flightControlSystemInstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_flightControlSystem_optimization_info();
    }

    mdl_cleanup_runtime_resources_c5_flightControlSystem
      ((SFc5_flightControlSystemInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c5_flightControlSystem(void *chartInstanceVar)
{
  mdl_start_c5_flightControlSystem((SFc5_flightControlSystemInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc5_flightControlSystemInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c5_flightControlSystem(void
  *chartInstanceVar)
{
  mdl_terminate_c5_flightControlSystem((SFc5_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c5_flightControlSystem(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c5_flightControlSystem
      ((SFc5_flightControlSystemInstanceStruct*)sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c5_flightControlSystem_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [20] = {
    "eNrdWMtu20YUHdlukBRpkAJF0kWAdtFFNwXSpAa6CArbeiRC7VgN5bjIphiRV+TAwxlmHnrkK/o",
    "bRT+iu35Dga76F132DkXJAqXKHAqFnRKgRkPqzL1zeO6DIo3uCcHjHp4/PyDkFo638dwhs+ODYt",
    "5YOmfX98izYt77kJAwocp0xVAS/yOUEcQgAjscsoknVti0RxVNdQ27gqbwCrTk1jAp/JxnYggKR",
    "IgLZFIZL7uapZYzcdGxInSW9XnCwiRIpOXRES5Io1PBp/9mN7OmhxZbTEFoOgCRSZS0cdLhNN7M",
    "gjLjZgLhhbapN1caTGAzt1V9YrlhGYf2BMKu0IYiC/qK/QaGGmiaibdCmA7maJlmnFFRneuE6gA",
    "yVIeBsyzCz1NrkL2KdtHegAlqpGKUt1PedAqviO1x9PMEZc29eTapacHAxjETsWNX2RQE7h91Uo",
    "GrYVOOQNEYToVnDLrdtSf5A17osnoMdp0sa8WgTWdPRdfC5nbbI2RI17TbCUWTcq79sH2ZHcMIe",
    "G6/RQ2tgZ3Z9wBrzaK+fE2ViwLPSLKCvbVQYJtSRKz6Ex6VUHnCfYnJswKcpU5SECHNC9cXC12l",
    "SauNTJsYRq3j44r2VrFdYUANaQiVc5+iTAM6nOvK027ENB1wh0aWTL7LyiuAqA0lemhFayzVBXL",
    "sm2QvuXKR4IeGKIYWGMgTRhvV/ZpyW9HnVGOGc/I405ix/Owi1sVPLXBIwwQiV08YhxPQbgFdOT",
    "9jHTnE3Y6YmbZAh4plVSPJaoiwkDiW+tMMzsSFkGPRUTINio5gg64AMGtQJbAsHGFZUtMOOl/Na",
    "wVv+05ZddqzlBpOB04bz0FgZXF7dZWQhhhVbYGtGzq0DTZg77C0C820wXZq2s5jIMr70U8bfv3o",
    "x8X86SKWurqv8ElRLMMCO6XDQd7sQZ+lkF8IKPYUs2lxOLuPyaXdOzub7e7gt0ZNHNkS92IJt7e",
    "GnwdLuPvFPNz/achZnLgkbJTkwRR5T1f9uFuB73X+l3FkBXfJ83z8cgnfWGOXLI1X8bW7wtcuaT",
    "QaOe5gCfdRyc5eCXer4OwVjw9+/fOL75/99uL3R7/89ck2+rjtqed7xfzRvD9bVLDRSpKvooeHJ",
    "T08zOsG39dvBueMHdr9l0c/fPP8297k/Chf70ey2V9S8nd+/XM8DSa4PF+qsBsV71puTu3sHeB9",
    "iLPriuvr9LNK3O+S/y5f3ATctvvzzWfv++8fb8g7pPT7+zd4H+Wxbl27afv6g/jVnc+K+XeLd85",
    "mwni0pustbmNjOlx393+i7789+ZvX2bbjr/jT7M3TQ0H5FNvc2WtEcbmn3P81i1sKqF7/LnEddW",
    "g+HlzRV9wtxbebj5mI5Fh/9fWT/Sfb1LV/AEaN++0=",
    ""
  };

  static char newstr [1393] = "";
  newstr[0] = '\0';
  for (i = 0; i < 20; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c5_flightControlSystem(SimStruct *S)
{
  const char* newstr = sf_c5_flightControlSystem_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(1080519762U));
  ssSetChecksum1(S,(1260706731U));
  ssSetChecksum2(S,(3326656316U));
  ssSetChecksum3(S,(350333212U));
}

static void mdlRTW_c5_flightControlSystem(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c5_flightControlSystem(SimStruct *S)
{
  SFc5_flightControlSystemInstanceStruct *chartInstance;
  chartInstance = (SFc5_flightControlSystemInstanceStruct *)utMalloc(sizeof
    (SFc5_flightControlSystemInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc5_flightControlSystemInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c5_flightControlSystem;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c5_flightControlSystem;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c5_flightControlSystem;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c5_flightControlSystem;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c5_flightControlSystem;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c5_flightControlSystem;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c5_flightControlSystem;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c5_flightControlSystem;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c5_flightControlSystem;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c5_flightControlSystem;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c5_flightControlSystem;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c5_flightControlSystem;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c5_flightControlSystem(chartInstance);
}

void c5_flightControlSystem_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c5_flightControlSystem(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c5_flightControlSystem(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c5_flightControlSystem(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c5_flightControlSystem_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
