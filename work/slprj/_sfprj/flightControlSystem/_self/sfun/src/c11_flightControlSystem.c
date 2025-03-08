/* Include files */

#include "flightControlSystem_sfun.h"
#include "c11_flightControlSystem.h"
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
static emlrtRSInfo c11_emlrtRSI = { 3, /* lineNo */
  "Image Processing System/MATLAB Function8",/* fcnName */
  "#flightControlSystem:2763"          /* pathName */
};

static emlrtRSInfo c11_b_emlrtRSI = { 39,/* lineNo */
  "im2uint8",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\im2uint8.m"/* pathName */
};

static emlrtRSInfo c11_c_emlrtRSI = { 195,/* lineNo */
  "im2uint8",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\im2uint8.m"/* pathName */
};

static emlrtRSInfo c11_d_emlrtRSI = { 19,/* lineNo */
  "grayto8",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\private\\grayto8.m"/* pathName */
};

static emlrtRTEInfo c11_emlrtRTEI = { 72,/* lineNo */
  17,                                  /* colNo */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763"          /* pName */
};

static emlrtRTEInfo c11_b_emlrtRTEI = { 80,/* lineNo */
  17,                                  /* colNo */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763"          /* pName */
};

static emlrtBCInfo c11_emlrtBCI = { 1, /* iFirst */
  19,                                  /* iLast */
  72,                                  /* lineNo */
  36,                                  /* colNo */
  "top_to_bottom",                     /* aName */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_emlrtDCI = { 72,/* lineNo */
  36,                                  /* colNo */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_b_emlrtBCI = { 1,/* iFirst */
  19,                                  /* iLast */
  72,                                  /* lineNo */
  60,                                  /* colNo */
  "top_to_bottom",                     /* aName */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_b_emlrtDCI = { 72,/* lineNo */
  60,                                  /* colNo */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_c_emlrtBCI = { 1,/* iFirst */
  19,                                  /* iLast */
  80,                                  /* lineNo */
  36,                                  /* colNo */
  "bottom_to_top",                     /* aName */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_c_emlrtDCI = { 80,/* lineNo */
  36,                                  /* colNo */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_d_emlrtBCI = { 1,/* iFirst */
  19,                                  /* iLast */
  80,                                  /* lineNo */
  60,                                  /* colNo */
  "bottom_to_top",                     /* aName */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_d_emlrtDCI = { 80,/* lineNo */
  60,                                  /* colNo */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_e_emlrtBCI = { 1,/* iFirst */
  60,                                  /* iLast */
  73,                                  /* lineNo */
  38,                                  /* colNo */
  "NWimage",                           /* aName */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_e_emlrtDCI = { 73,/* lineNo */
  38,                                  /* colNo */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_f_emlrtBCI = { 1,/* iFirst */
  19,                                  /* iLast */
  73,                                  /* lineNo */
  52,                                  /* colNo */
  "top_to_bottom",                     /* aName */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_f_emlrtDCI = { 73,/* lineNo */
  52,                                  /* colNo */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_g_emlrtBCI = { 1,/* iFirst */
  60,                                  /* iLast */
  73,                                  /* lineNo */
  72,                                  /* colNo */
  "NWimage",                           /* aName */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_g_emlrtDCI = { 73,/* lineNo */
  72,                                  /* colNo */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_h_emlrtBCI = { 1,/* iFirst */
  19,                                  /* iLast */
  73,                                  /* lineNo */
  86,                                  /* colNo */
  "top_to_bottom",                     /* aName */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_h_emlrtDCI = { 73,/* lineNo */
  86,                                  /* colNo */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_i_emlrtBCI = { 1,/* iFirst */
  19,                                  /* iLast */
  73,                                  /* lineNo */
  12,                                  /* colNo */
  "NW",                                /* aName */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c11_i_emlrtDCI = { 73,/* lineNo */
  12,                                  /* colNo */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_j_emlrtBCI = { 1,/* iFirst */
  60,                                  /* iLast */
  73,                                  /* lineNo */
  17,                                  /* colNo */
  "NW",                                /* aName */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c11_j_emlrtDCI = { 73,/* lineNo */
  17,                                  /* colNo */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_k_emlrtBCI = { 1,/* iFirst */
  60,                                  /* iLast */
  74,                                  /* lineNo */
  38,                                  /* colNo */
  "SEimage",                           /* aName */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_k_emlrtDCI = { 74,/* lineNo */
  38,                                  /* colNo */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_l_emlrtBCI = { 1,/* iFirst */
  19,                                  /* iLast */
  74,                                  /* lineNo */
  52,                                  /* colNo */
  "top_to_bottom",                     /* aName */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_l_emlrtDCI = { 74,/* lineNo */
  52,                                  /* colNo */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_m_emlrtBCI = { 1,/* iFirst */
  60,                                  /* iLast */
  74,                                  /* lineNo */
  72,                                  /* colNo */
  "SEimage",                           /* aName */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_m_emlrtDCI = { 74,/* lineNo */
  72,                                  /* colNo */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_n_emlrtBCI = { 1,/* iFirst */
  19,                                  /* iLast */
  74,                                  /* lineNo */
  86,                                  /* colNo */
  "top_to_bottom",                     /* aName */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_n_emlrtDCI = { 74,/* lineNo */
  86,                                  /* colNo */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_o_emlrtBCI = { 1,/* iFirst */
  19,                                  /* iLast */
  74,                                  /* lineNo */
  12,                                  /* colNo */
  "SE",                                /* aName */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c11_o_emlrtDCI = { 74,/* lineNo */
  12,                                  /* colNo */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_p_emlrtBCI = { 1,/* iFirst */
  60,                                  /* iLast */
  74,                                  /* lineNo */
  17,                                  /* colNo */
  "SE",                                /* aName */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c11_p_emlrtDCI = { 74,/* lineNo */
  17,                                  /* colNo */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_q_emlrtBCI = { 1,/* iFirst */
  60,                                  /* iLast */
  81,                                  /* lineNo */
  38,                                  /* colNo */
  "NEimage",                           /* aName */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_q_emlrtDCI = { 81,/* lineNo */
  38,                                  /* colNo */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_r_emlrtBCI = { 1,/* iFirst */
  19,                                  /* iLast */
  81,                                  /* lineNo */
  52,                                  /* colNo */
  "bottom_to_top",                     /* aName */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_r_emlrtDCI = { 81,/* lineNo */
  52,                                  /* colNo */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_s_emlrtBCI = { 1,/* iFirst */
  60,                                  /* iLast */
  81,                                  /* lineNo */
  72,                                  /* colNo */
  "NEimage",                           /* aName */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_s_emlrtDCI = { 81,/* lineNo */
  72,                                  /* colNo */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_t_emlrtBCI = { 1,/* iFirst */
  19,                                  /* iLast */
  81,                                  /* lineNo */
  86,                                  /* colNo */
  "bottom_to_top",                     /* aName */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_t_emlrtDCI = { 81,/* lineNo */
  86,                                  /* colNo */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_u_emlrtBCI = { 1,/* iFirst */
  19,                                  /* iLast */
  81,                                  /* lineNo */
  12,                                  /* colNo */
  "NE",                                /* aName */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c11_u_emlrtDCI = { 81,/* lineNo */
  12,                                  /* colNo */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_v_emlrtBCI = { 1,/* iFirst */
  60,                                  /* iLast */
  81,                                  /* lineNo */
  17,                                  /* colNo */
  "NE",                                /* aName */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c11_v_emlrtDCI = { 81,/* lineNo */
  17,                                  /* colNo */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_w_emlrtBCI = { 1,/* iFirst */
  60,                                  /* iLast */
  82,                                  /* lineNo */
  38,                                  /* colNo */
  "SWimage",                           /* aName */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_w_emlrtDCI = { 82,/* lineNo */
  38,                                  /* colNo */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_x_emlrtBCI = { 1,/* iFirst */
  19,                                  /* iLast */
  82,                                  /* lineNo */
  52,                                  /* colNo */
  "bottom_to_top",                     /* aName */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_x_emlrtDCI = { 82,/* lineNo */
  52,                                  /* colNo */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_y_emlrtBCI = { 1,/* iFirst */
  60,                                  /* iLast */
  82,                                  /* lineNo */
  72,                                  /* colNo */
  "SWimage",                           /* aName */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_y_emlrtDCI = { 82,/* lineNo */
  72,                                  /* colNo */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_ab_emlrtBCI = { 1,/* iFirst */
  19,                                  /* iLast */
  82,                                  /* lineNo */
  86,                                  /* colNo */
  "bottom_to_top",                     /* aName */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_ab_emlrtDCI = { 82,/* lineNo */
  86,                                  /* colNo */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_bb_emlrtBCI = { 1,/* iFirst */
  19,                                  /* iLast */
  82,                                  /* lineNo */
  12,                                  /* colNo */
  "SW",                                /* aName */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c11_bb_emlrtDCI = { 82,/* lineNo */
  12,                                  /* colNo */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_cb_emlrtBCI = { 1,/* iFirst */
  60,                                  /* iLast */
  82,                                  /* lineNo */
  17,                                  /* colNo */
  "SW",                                /* aName */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c11_cb_emlrtDCI = { 82,/* lineNo */
  17,                                  /* colNo */
  "Image Processing System/MATLAB Function8",/* fName */
  "#flightControlSystem:2763",         /* pName */
  1                                    /* checkKind */
};

/* Function Declarations */
static void initialize_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance);
static void initialize_params_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance);
static void mdl_start_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance);
static void mdl_terminate_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance);
static void enable_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance);
static void disable_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance);
static void sf_gateway_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance);
static void ext_mode_exec_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance);
static void c11_update_jit_animation_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance);
static void c11_do_animation_call_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance);
static void set_sim_state_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance, const mxArray *c11_st);
static void c11_emlrt_marshallIn(SFc11_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c11_nullptr, const char_T *c11_identifier,
  uint8_T c11_y[1140]);
static void c11_b_emlrt_marshallIn(SFc11_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId,
  uint8_T c11_y[1140]);
static int32_T c11__s32_add__(SFc11_flightControlSystemInstanceStruct
  *chartInstance, int32_T c11_b, int32_T c11_c, int32_T c11_EMLOvCount_src_loc,
  uint32_T c11_ssid_src_loc, int32_T c11_offset_src_loc, int32_T
  c11_length_src_loc);
static int32_T c11__s32_minus__(SFc11_flightControlSystemInstanceStruct
  *chartInstance, int32_T c11_b, int32_T c11_c, int32_T c11_EMLOvCount_src_loc,
  uint32_T c11_ssid_src_loc, int32_T c11_offset_src_loc, int32_T
  c11_length_src_loc);
static void init_dsm_address_info(SFc11_flightControlSystemInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc11_flightControlSystemInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance)
{
  emlrtStack c11_st = { NULL,          /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c11_st.tls = chartInstance->c11_fEmlrtCtx;
  emlrtLicenseCheckR2022a(&c11_st, "EMLRT:runTime:MexFunctionNeedsLicense",
    "image_toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c11_doneDoubleBufferReInit = false;
  chartInstance->c11_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void initialize_params_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance)
{
  static const uint32_T c11_decisionTxtEndIdx = 0U;
  static const uint32_T c11_decisionTxtStartIdx = 0U;
  sfSetAnimationVectors(chartInstance->S, &chartInstance->c11_JITStateAnimation
                        [0], &chartInstance->c11_JITTransitionAnimation[0]);
  covrtCreateStateflowInstanceData(chartInstance->c11_covrtInstance, 1U, 0U, 1U,
    96U);
  covrtChartInitFcn(chartInstance->c11_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c11_covrtInstance, 0U, 0U, false, false,
                    false, 0U, &c11_decisionTxtStartIdx, &c11_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c11_covrtInstance, 0U, 0, NULL, NULL, 0U,
                    NULL);
  covrtEmlInitFcn(chartInstance->c11_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  1U, 0U, 4U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c11_covrtInstance, 4U, 0U, 0U,
                     "c11_flightControlSystem", 0, -1, 2257);
  covrtEmlSaturationInitFcn(chartInstance->c11_covrtInstance, 4U, 0U, 0U, 90, -1,
    123);
  covrtEmlForInitFcn(chartInstance->c11_covrtInstance, 4U, 0U, 0U, 1562, 1581,
                     1875);
  covrtEmlForInitFcn(chartInstance->c11_covrtInstance, 4U, 0U, 1U, 1586, 1653,
                     1871);
  covrtEmlForInitFcn(chartInstance->c11_covrtInstance, 4U, 0U, 2U, 1934, 1953,
                     2247);
  covrtEmlForInitFcn(chartInstance->c11_covrtInstance, 4U, 0U, 3U, 1958, 2025,
                     2243);
}

static void mdl_cleanup_runtime_resources_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance)
{
  covrtDeleteStateflowInstanceData(chartInstance->c11_covrtInstance);
}

static void enable_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance)
{
  static real_T c11_bottom_to_top[95] = { 51.0, 52.0, 53.0, 54.0, 55.0, 56.0,
    57.0, 58.0, 59.0, 60.0, 60.0, 60.0, 60.0, 60.0, 60.0, 60.0, 60.0, 60.0, 60.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0,
    7.0, 8.0, 9.0, 10.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 2.0,
    3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 51.0, 52.0, 53.0, 54.0, 55.0, 56.0,
    57.0, 58.0, 59.0, 60.0, 60.0, 60.0, 60.0, 60.0, 60.0, 60.0, 60.0, 60.0, 60.0,
    1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0, 12.0, 13.0, 14.0,
    15.0, 16.0, 17.0, 18.0, 19.0 };

  static real_T c11_top_to_bottom[95] = { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 10.0, 9.0, 8.0, 7.0,
    6.0, 5.0, 4.0, 3.0, 2.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    51.0, 52.0, 53.0, 54.0, 55.0, 56.0, 57.0, 58.0, 59.0, 60.0, 60.0, 60.0, 60.0,
    60.0, 60.0, 60.0, 60.0, 60.0, 60.0, 60.0, 60.0, 60.0, 60.0, 60.0, 60.0, 60.0,
    60.0, 60.0, 60.0, 59.0, 58.0, 57.0, 56.0, 55.0, 54.0, 53.0, 52.0, 51.0, 1.0,
    2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0, 12.0, 13.0, 14.0, 15.0,
    16.0, 17.0, 18.0, 19.0 };

  emlrtStack c11_st = { NULL,          /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *c11_y = NULL;
  real_T c11_img[14400];
  real_T c11_b_index;
  real_T c11_b_row;
  real_T c11_d;
  real_T c11_d1;
  real_T c11_d10;
  real_T c11_d11;
  real_T c11_d12;
  real_T c11_d13;
  real_T c11_d14;
  real_T c11_d2;
  real_T c11_d3;
  real_T c11_d4;
  real_T c11_d5;
  real_T c11_d6;
  real_T c11_d7;
  real_T c11_d8;
  real_T c11_d9;
  real_T c11_z;
  int32_T c11_b_k;
  int32_T c11_c_index;
  int32_T c11_c_row;
  int32_T c11_i;
  int32_T c11_i1;
  int32_T c11_i10;
  int32_T c11_i11;
  int32_T c11_i12;
  int32_T c11_i13;
  int32_T c11_i14;
  int32_T c11_i15;
  int32_T c11_i16;
  int32_T c11_i17;
  int32_T c11_i18;
  int32_T c11_i19;
  int32_T c11_i2;
  int32_T c11_i20;
  int32_T c11_i21;
  int32_T c11_i22;
  int32_T c11_i23;
  int32_T c11_i24;
  int32_T c11_i25;
  int32_T c11_i26;
  int32_T c11_i27;
  int32_T c11_i28;
  int32_T c11_i29;
  int32_T c11_i3;
  int32_T c11_i30;
  int32_T c11_i31;
  int32_T c11_i32;
  int32_T c11_i33;
  int32_T c11_i34;
  int32_T c11_i35;
  int32_T c11_i36;
  int32_T c11_i37;
  int32_T c11_i38;
  int32_T c11_i39;
  int32_T c11_i4;
  int32_T c11_i40;
  int32_T c11_i41;
  int32_T c11_i42;
  int32_T c11_i43;
  int32_T c11_i44;
  int32_T c11_i45;
  int32_T c11_i46;
  int32_T c11_i47;
  int32_T c11_i48;
  int32_T c11_i49;
  int32_T c11_i5;
  int32_T c11_i50;
  int32_T c11_i51;
  int32_T c11_i52;
  int32_T c11_i53;
  int32_T c11_i54;
  int32_T c11_i55;
  int32_T c11_i56;
  int32_T c11_i57;
  int32_T c11_i58;
  int32_T c11_i59;
  int32_T c11_i6;
  int32_T c11_i60;
  int32_T c11_i61;
  int32_T c11_i62;
  int32_T c11_i63;
  int32_T c11_i64;
  int32_T c11_i65;
  int32_T c11_i66;
  int32_T c11_i67;
  int32_T c11_i68;
  int32_T c11_i69;
  int32_T c11_i7;
  int32_T c11_i70;
  int32_T c11_i71;
  int32_T c11_i72;
  int32_T c11_i73;
  int32_T c11_i74;
  int32_T c11_i75;
  int32_T c11_i76;
  int32_T c11_i77;
  int32_T c11_i78;
  int32_T c11_i79;
  int32_T c11_i8;
  int32_T c11_i80;
  int32_T c11_i81;
  int32_T c11_i9;
  int32_T c11_index;
  int32_T c11_k;
  int32_T c11_row;
  uint8_T c11_squareBWimage[14400];
  uint8_T c11_x[14400];
  uint8_T c11_NEimage[3600];
  uint8_T c11_NWimage[3600];
  uint8_T c11_SEimage[3600];
  uint8_T c11_SWimage[3600];
  uint8_T c11_b_E[1140];
  uint8_T c11_b_N[1140];
  uint8_T c11_b_NE[1140];
  uint8_T c11_b_NW[1140];
  uint8_T c11_b_S[1140];
  uint8_T c11_b_SE[1140];
  uint8_T c11_b_SW[1140];
  uint8_T c11_b_W[1140];
  uint8_T c11_b_x;
  uint8_T c11_u;
  boolean_T c11_covSaturation = false;
  c11_st.tls = chartInstance->c11_fEmlrtCtx;
  for (c11_i = 0; c11_i < 19200; c11_i++) {
    covrtSigUpdateFcn(chartInstance->c11_covrtInstance, 0U,
                      (*chartInstance->c11_BWimage)[c11_i]);
  }

  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c11_JITTransitionAnimation[0] = 0U;
  chartInstance->c11_sfEvent = CALL_EVENT;
  covrtEmlFcnEval(chartInstance->c11_covrtInstance, 4U, 0, 0);
  c11_i1 = 0;
  for (c11_i2 = 0; c11_i2 < 120; c11_i2++) {
    for (c11_i3 = 0; c11_i3 < 120; c11_i3++) {
      c11_img[c11_i3 + c11_i1] = (*chartInstance->c11_BWimage)[(c11_i3 + c11_i1)
        + 2400];
    }

    c11_i1 += 120;
  }

  grayto8_real64(&c11_img[0], &c11_x[0], 14400.0);
  for (c11_k = 0; c11_k < 14400; c11_k++) {
    c11_b_k = c11__s32_add__(chartInstance, 1, c11_k, 0, 1U, 90, 33);
    c11_b_x = c11_x[c11__s32_minus__(chartInstance, c11_b_k, 1, 0, 1U, 90, 33)];
    c11_z = (real_T)c11_b_x / 255.0;
    c11_d = muDoubleScalarRound(c11_z);
    c11_covSaturation = false;
    if (c11_d < 256.0) {
      if (c11_d >= 0.0) {
        c11_u = (uint8_T)c11_d;
      } else {
        c11_covSaturation = true;
        c11_u = 0U;
        sf_data_saturate_error(chartInstance->S, 1U, 90, 33);
      }
    } else if (c11_d >= 256.0) {
      c11_covSaturation = true;
      c11_u = MAX_uint8_T;
      sf_data_saturate_error(chartInstance->S, 1U, 90, 33);
    } else {
      c11_u = 0U;
    }

    covrtSaturationUpdateFcn(chartInstance->c11_covrtInstance, 4, 0, 0, 0,
      c11_covSaturation);
    c11_squareBWimage[c11__s32_minus__(chartInstance, c11_b_k, 1, 0, 1U, 90, 33)]
      = c11_u;
  }

  c11_i4 = 0;
  for (c11_i5 = 0; c11_i5 < 60; c11_i5++) {
    c11_i7 = 0;
    for (c11_i9 = 0; c11_i9 < 19; c11_i9++) {
      c11_b_N[c11_i9 + c11_i4] = c11_squareBWimage[(c11_i7 + c11_i5) + 6000];
      c11_i7 += 120;
    }

    c11_i4 += 19;
  }

  c11_i6 = 0;
  for (c11_i8 = 0; c11_i8 < 60; c11_i8++) {
    c11_i11 = 0;
    for (c11_i13 = 0; c11_i13 < 19; c11_i13++) {
      c11_b_S[c11_i13 + c11_i6] = c11_squareBWimage[(c11_i11 + c11_i8) + 6060];
      c11_i11 += 120;
    }

    c11_i6 += 19;
  }

  c11_i10 = 0;
  c11_i12 = 0;
  for (c11_i14 = 0; c11_i14 < 60; c11_i14++) {
    for (c11_i16 = 0; c11_i16 < 19; c11_i16++) {
      c11_b_W[c11_i16 + c11_i10] = c11_squareBWimage[(c11_i16 + c11_i12) + 50];
    }

    c11_i10 += 19;
    c11_i12 += 120;
  }

  c11_i15 = 0;
  c11_i17 = 0;
  for (c11_i18 = 0; c11_i18 < 60; c11_i18++) {
    for (c11_i20 = 0; c11_i20 < 19; c11_i20++) {
      c11_b_E[c11_i20 + c11_i15] = c11_squareBWimage[(c11_i20 + c11_i17) + 7250];
    }

    c11_i15 += 19;
    c11_i17 += 120;
  }

  c11_i19 = 0;
  c11_i21 = 0;
  for (c11_i22 = 0; c11_i22 < 60; c11_i22++) {
    for (c11_i24 = 0; c11_i24 < 60; c11_i24++) {
      c11_NWimage[c11_i24 + c11_i19] = c11_squareBWimage[c11_i24 + c11_i21];
    }

    c11_i19 += 60;
    c11_i21 += 120;
  }

  c11_i23 = 0;
  c11_i25 = 0;
  for (c11_i26 = 0; c11_i26 < 60; c11_i26++) {
    for (c11_i28 = 0; c11_i28 < 60; c11_i28++) {
      c11_NEimage[c11_i28 + c11_i23] = c11_squareBWimage[(c11_i28 + c11_i25) +
        7200];
    }

    c11_i23 += 60;
    c11_i25 += 120;
  }

  c11_i27 = 0;
  c11_i29 = 0;
  for (c11_i30 = 0; c11_i30 < 60; c11_i30++) {
    for (c11_i32 = 0; c11_i32 < 60; c11_i32++) {
      c11_SWimage[c11_i32 + c11_i27] = c11_squareBWimage[(c11_i32 + c11_i29) +
        60];
    }

    c11_i27 += 60;
    c11_i29 += 120;
  }

  c11_i31 = 0;
  c11_i33 = 0;
  for (c11_i34 = 0; c11_i34 < 60; c11_i34++) {
    for (c11_i35 = 0; c11_i35 < 60; c11_i35++) {
      c11_SEimage[c11_i35 + c11_i31] = c11_squareBWimage[(c11_i35 + c11_i33) +
        7260];
    }

    c11_i31 += 60;
    c11_i33 += 120;
  }

  memset(&c11_b_NW[0], 0, 1140U * sizeof(uint8_T));
  memset(&c11_b_NE[0], 0, 1140U * sizeof(uint8_T));
  memset(&c11_b_SW[0], 0, 1140U * sizeof(uint8_T));
  memset(&c11_b_SE[0], 0, 1140U * sizeof(uint8_T));
  for (c11_row = 0; c11_row < 19; c11_row++) {
    c11_b_row = 1.0 + (real_T)c11_row;
    covrtEmlForEval(chartInstance->c11_covrtInstance, 4U, 0, 0, 1);
    if (c11_b_row != (real_T)(int32_T)muDoubleScalarFloor(c11_b_row)) {
      emlrtIntegerCheckR2012b(c11_b_row, &c11_emlrtDCI, &c11_st);
    }

    c11_i36 = (int32_T)c11_b_row;
    if ((c11_i36 < 1) || (c11_i36 > 19)) {
      emlrtDynamicBoundsCheckR2012b(c11_i36, 1, 19, &c11_emlrtBCI, &c11_st);
    }

    if (c11_b_row != (real_T)(int32_T)muDoubleScalarFloor(c11_b_row)) {
      emlrtIntegerCheckR2012b(c11_b_row, &c11_b_emlrtDCI, &c11_st);
    }

    c11_i40 = (int32_T)c11_b_row;
    if ((c11_i40 < 1) || (c11_i40 > 19)) {
      emlrtDynamicBoundsCheckR2012b(c11_i40, 1, 19, &c11_b_emlrtBCI, &c11_st);
    }

    c11_d1 = (c11_top_to_bottom[c11_i36 + 37] - c11_top_to_bottom[c11_i40 - 1])
      - 1.0;
    c11_i44 = (int32_T)(c11_d1 + 1.0);
    emlrtForLoopVectorCheckR2021a(0.0, 1.0, c11_d1, mxDOUBLE_CLASS, c11_i44,
      &c11_emlrtRTEI, &c11_st);
    for (c11_index = 0; c11_index < c11_i44; c11_index++) {
      c11_b_index = (real_T)c11_index;
      covrtEmlForEval(chartInstance->c11_covrtInstance, 4U, 0, 1, 1);
      if (c11_b_row != (real_T)(int32_T)muDoubleScalarFloor(c11_b_row)) {
        emlrtIntegerCheckR2012b(c11_b_row, &c11_f_emlrtDCI, &c11_st);
      }

      c11_i50 = (int32_T)c11_b_row;
      if ((c11_i50 < 1) || (c11_i50 > 19)) {
        emlrtDynamicBoundsCheckR2012b(c11_i50, 1, 19, &c11_f_emlrtBCI, &c11_st);
      }

      c11_d3 = c11_top_to_bottom[c11_i50 - 1] + c11_b_index;
      if (c11_d3 != (real_T)(int32_T)muDoubleScalarFloor(c11_d3)) {
        emlrtIntegerCheckR2012b(c11_d3, &c11_e_emlrtDCI, &c11_st);
      }

      c11_i55 = (int32_T)c11_d3;
      if ((c11_i55 < 1) || (c11_i55 > 60)) {
        emlrtDynamicBoundsCheckR2012b(c11_i55, 1, 60, &c11_e_emlrtBCI, &c11_st);
      }

      if (c11_b_row != (real_T)(int32_T)muDoubleScalarFloor(c11_b_row)) {
        emlrtIntegerCheckR2012b(c11_b_row, &c11_h_emlrtDCI, &c11_st);
      }

      c11_i59 = (int32_T)c11_b_row;
      if ((c11_i59 < 1) || (c11_i59 > 19)) {
        emlrtDynamicBoundsCheckR2012b(c11_i59, 1, 19, &c11_h_emlrtBCI, &c11_st);
      }

      c11_d5 = c11_top_to_bottom[c11_i59 + 18] + c11_b_index;
      if (c11_d5 != (real_T)(int32_T)muDoubleScalarFloor(c11_d5)) {
        emlrtIntegerCheckR2012b(c11_d5, &c11_g_emlrtDCI, &c11_st);
      }

      c11_i64 = (int32_T)c11_d5;
      if ((c11_i64 < 1) || (c11_i64 > 60)) {
        emlrtDynamicBoundsCheckR2012b(c11_i64, 1, 60, &c11_g_emlrtBCI, &c11_st);
      }

      if (c11_b_row != (real_T)(int32_T)muDoubleScalarFloor(c11_b_row)) {
        emlrtIntegerCheckR2012b(c11_b_row, &c11_i_emlrtDCI, &c11_st);
      }

      c11_i66 = (int32_T)c11_b_row;
      if ((c11_i66 < 1) || (c11_i66 > 19)) {
        emlrtDynamicBoundsCheckR2012b(c11_i66, 1, 19, &c11_i_emlrtBCI, &c11_st);
      }

      c11_d7 = c11_b_index + 1.0;
      if (c11_d7 != (real_T)(int32_T)muDoubleScalarFloor(c11_d7)) {
        emlrtIntegerCheckR2012b(c11_d7, &c11_j_emlrtDCI, &c11_st);
      }

      c11_i68 = (int32_T)c11_d7;
      if ((c11_i68 < 1) || (c11_i68 > 60)) {
        emlrtDynamicBoundsCheckR2012b(c11_i68, 1, 60, &c11_j_emlrtBCI, &c11_st);
      }

      c11_b_NW[(c11_i66 + 19 * (c11_i68 - 1)) - 1] = c11_NWimage[(c11_i55 + 60 *
        (c11_i64 - 1)) - 1];
      if (c11_b_row != (real_T)(int32_T)muDoubleScalarFloor(c11_b_row)) {
        emlrtIntegerCheckR2012b(c11_b_row, &c11_l_emlrtDCI, &c11_st);
      }

      c11_i70 = (int32_T)c11_b_row;
      if ((c11_i70 < 1) || (c11_i70 > 19)) {
        emlrtDynamicBoundsCheckR2012b(c11_i70, 1, 19, &c11_l_emlrtBCI, &c11_st);
      }

      c11_d9 = c11_top_to_bottom[c11_i70 - 1] + c11_b_index;
      if (c11_d9 != (real_T)(int32_T)muDoubleScalarFloor(c11_d9)) {
        emlrtIntegerCheckR2012b(c11_d9, &c11_k_emlrtDCI, &c11_st);
      }

      c11_i72 = (int32_T)c11_d9;
      if ((c11_i72 < 1) || (c11_i72 > 60)) {
        emlrtDynamicBoundsCheckR2012b(c11_i72, 1, 60, &c11_k_emlrtBCI, &c11_st);
      }

      if (c11_b_row != (real_T)(int32_T)muDoubleScalarFloor(c11_b_row)) {
        emlrtIntegerCheckR2012b(c11_b_row, &c11_n_emlrtDCI, &c11_st);
      }

      c11_i74 = (int32_T)c11_b_row;
      if ((c11_i74 < 1) || (c11_i74 > 19)) {
        emlrtDynamicBoundsCheckR2012b(c11_i74, 1, 19, &c11_n_emlrtBCI, &c11_st);
      }

      c11_d11 = c11_top_to_bottom[c11_i74 + 18] + c11_b_index;
      if (c11_d11 != (real_T)(int32_T)muDoubleScalarFloor(c11_d11)) {
        emlrtIntegerCheckR2012b(c11_d11, &c11_m_emlrtDCI, &c11_st);
      }

      c11_i76 = (int32_T)c11_d11;
      if ((c11_i76 < 1) || (c11_i76 > 60)) {
        emlrtDynamicBoundsCheckR2012b(c11_i76, 1, 60, &c11_m_emlrtBCI, &c11_st);
      }

      if (c11_b_row != (real_T)(int32_T)muDoubleScalarFloor(c11_b_row)) {
        emlrtIntegerCheckR2012b(c11_b_row, &c11_o_emlrtDCI, &c11_st);
      }

      c11_i78 = (int32_T)c11_b_row;
      if ((c11_i78 < 1) || (c11_i78 > 19)) {
        emlrtDynamicBoundsCheckR2012b(c11_i78, 1, 19, &c11_o_emlrtBCI, &c11_st);
      }

      c11_d13 = c11_b_index + 1.0;
      if (c11_d13 != (real_T)(int32_T)muDoubleScalarFloor(c11_d13)) {
        emlrtIntegerCheckR2012b(c11_d13, &c11_p_emlrtDCI, &c11_st);
      }

      c11_i80 = (int32_T)c11_d13;
      if ((c11_i80 < 1) || (c11_i80 > 60)) {
        emlrtDynamicBoundsCheckR2012b(c11_i80, 1, 60, &c11_p_emlrtBCI, &c11_st);
      }

      c11_b_SE[(c11_i78 + 19 * (c11_i80 - 1)) - 1] = c11_SEimage[(c11_i72 + 60 *
        (c11_i76 - 1)) - 1];
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    covrtEmlForEval(chartInstance->c11_covrtInstance, 4U, 0, 1, 0);
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  covrtEmlForEval(chartInstance->c11_covrtInstance, 4U, 0, 0, 0);
  for (c11_c_row = 0; c11_c_row < 19; c11_c_row++) {
    c11_b_row = 1.0 + (real_T)c11_c_row;
    covrtEmlForEval(chartInstance->c11_covrtInstance, 4U, 0, 2, 1);
    if (c11_b_row != (real_T)(int32_T)muDoubleScalarFloor(c11_b_row)) {
      emlrtIntegerCheckR2012b(c11_b_row, &c11_c_emlrtDCI, &c11_st);
    }

    c11_i38 = (int32_T)c11_b_row;
    if ((c11_i38 < 1) || (c11_i38 > 19)) {
      emlrtDynamicBoundsCheckR2012b(c11_i38, 1, 19, &c11_c_emlrtBCI, &c11_st);
    }

    if (c11_b_row != (real_T)(int32_T)muDoubleScalarFloor(c11_b_row)) {
      emlrtIntegerCheckR2012b(c11_b_row, &c11_d_emlrtDCI, &c11_st);
    }

    c11_i42 = (int32_T)c11_b_row;
    if ((c11_i42 < 1) || (c11_i42 > 19)) {
      emlrtDynamicBoundsCheckR2012b(c11_i42, 1, 19, &c11_d_emlrtBCI, &c11_st);
    }

    c11_d2 = (c11_bottom_to_top[c11_i38 - 1] - c11_bottom_to_top[c11_i42 + 18])
      - 1.0;
    c11_i46 = (int32_T)(c11_d2 + 1.0);
    emlrtForLoopVectorCheckR2021a(0.0, 1.0, c11_d2, mxDOUBLE_CLASS, c11_i46,
      &c11_b_emlrtRTEI, &c11_st);
    for (c11_c_index = 0; c11_c_index < c11_i46; c11_c_index++) {
      c11_b_index = (real_T)c11_c_index;
      covrtEmlForEval(chartInstance->c11_covrtInstance, 4U, 0, 3, 1);
      if (c11_b_row != (real_T)(int32_T)muDoubleScalarFloor(c11_b_row)) {
        emlrtIntegerCheckR2012b(c11_b_row, &c11_r_emlrtDCI, &c11_st);
      }

      c11_i52 = (int32_T)c11_b_row;
      if ((c11_i52 < 1) || (c11_i52 > 19)) {
        emlrtDynamicBoundsCheckR2012b(c11_i52, 1, 19, &c11_r_emlrtBCI, &c11_st);
      }

      c11_d4 = c11_bottom_to_top[c11_i52 - 1] - c11_b_index;
      if (c11_d4 != (real_T)(int32_T)muDoubleScalarFloor(c11_d4)) {
        emlrtIntegerCheckR2012b(c11_d4, &c11_q_emlrtDCI, &c11_st);
      }

      c11_i57 = (int32_T)c11_d4;
      if ((c11_i57 < 1) || (c11_i57 > 60)) {
        emlrtDynamicBoundsCheckR2012b(c11_i57, 1, 60, &c11_q_emlrtBCI, &c11_st);
      }

      if (c11_b_row != (real_T)(int32_T)muDoubleScalarFloor(c11_b_row)) {
        emlrtIntegerCheckR2012b(c11_b_row, &c11_t_emlrtDCI, &c11_st);
      }

      c11_i62 = (int32_T)c11_b_row;
      if ((c11_i62 < 1) || (c11_i62 > 19)) {
        emlrtDynamicBoundsCheckR2012b(c11_i62, 1, 19, &c11_t_emlrtBCI, &c11_st);
      }

      c11_d6 = c11_bottom_to_top[c11_i62 + 18] + c11_b_index;
      if (c11_d6 != (real_T)(int32_T)muDoubleScalarFloor(c11_d6)) {
        emlrtIntegerCheckR2012b(c11_d6, &c11_s_emlrtDCI, &c11_st);
      }

      c11_i65 = (int32_T)c11_d6;
      if ((c11_i65 < 1) || (c11_i65 > 60)) {
        emlrtDynamicBoundsCheckR2012b(c11_i65, 1, 60, &c11_s_emlrtBCI, &c11_st);
      }

      if (c11_b_row != (real_T)(int32_T)muDoubleScalarFloor(c11_b_row)) {
        emlrtIntegerCheckR2012b(c11_b_row, &c11_u_emlrtDCI, &c11_st);
      }

      c11_i67 = (int32_T)c11_b_row;
      if ((c11_i67 < 1) || (c11_i67 > 19)) {
        emlrtDynamicBoundsCheckR2012b(c11_i67, 1, 19, &c11_u_emlrtBCI, &c11_st);
      }

      c11_d8 = c11_b_index + 1.0;
      if (c11_d8 != (real_T)(int32_T)muDoubleScalarFloor(c11_d8)) {
        emlrtIntegerCheckR2012b(c11_d8, &c11_v_emlrtDCI, &c11_st);
      }

      c11_i69 = (int32_T)c11_d8;
      if ((c11_i69 < 1) || (c11_i69 > 60)) {
        emlrtDynamicBoundsCheckR2012b(c11_i69, 1, 60, &c11_v_emlrtBCI, &c11_st);
      }

      c11_b_NE[(c11_i67 + 19 * (c11_i69 - 1)) - 1] = c11_NEimage[(c11_i57 + 60 *
        (c11_i65 - 1)) - 1];
      if (c11_b_row != (real_T)(int32_T)muDoubleScalarFloor(c11_b_row)) {
        emlrtIntegerCheckR2012b(c11_b_row, &c11_x_emlrtDCI, &c11_st);
      }

      c11_i71 = (int32_T)c11_b_row;
      if ((c11_i71 < 1) || (c11_i71 > 19)) {
        emlrtDynamicBoundsCheckR2012b(c11_i71, 1, 19, &c11_x_emlrtBCI, &c11_st);
      }

      c11_d10 = c11_bottom_to_top[c11_i71 - 1] - c11_b_index;
      if (c11_d10 != (real_T)(int32_T)muDoubleScalarFloor(c11_d10)) {
        emlrtIntegerCheckR2012b(c11_d10, &c11_w_emlrtDCI, &c11_st);
      }

      c11_i73 = (int32_T)c11_d10;
      if ((c11_i73 < 1) || (c11_i73 > 60)) {
        emlrtDynamicBoundsCheckR2012b(c11_i73, 1, 60, &c11_w_emlrtBCI, &c11_st);
      }

      if (c11_b_row != (real_T)(int32_T)muDoubleScalarFloor(c11_b_row)) {
        emlrtIntegerCheckR2012b(c11_b_row, &c11_ab_emlrtDCI, &c11_st);
      }

      c11_i75 = (int32_T)c11_b_row;
      if ((c11_i75 < 1) || (c11_i75 > 19)) {
        emlrtDynamicBoundsCheckR2012b(c11_i75, 1, 19, &c11_ab_emlrtBCI, &c11_st);
      }

      c11_d12 = c11_bottom_to_top[c11_i75 + 18] + c11_b_index;
      if (c11_d12 != (real_T)(int32_T)muDoubleScalarFloor(c11_d12)) {
        emlrtIntegerCheckR2012b(c11_d12, &c11_y_emlrtDCI, &c11_st);
      }

      c11_i77 = (int32_T)c11_d12;
      if ((c11_i77 < 1) || (c11_i77 > 60)) {
        emlrtDynamicBoundsCheckR2012b(c11_i77, 1, 60, &c11_y_emlrtBCI, &c11_st);
      }

      if (c11_b_row != (real_T)(int32_T)muDoubleScalarFloor(c11_b_row)) {
        emlrtIntegerCheckR2012b(c11_b_row, &c11_bb_emlrtDCI, &c11_st);
      }

      c11_i79 = (int32_T)c11_b_row;
      if ((c11_i79 < 1) || (c11_i79 > 19)) {
        emlrtDynamicBoundsCheckR2012b(c11_i79, 1, 19, &c11_bb_emlrtBCI, &c11_st);
      }

      c11_d14 = c11_b_index + 1.0;
      if (c11_d14 != (real_T)(int32_T)muDoubleScalarFloor(c11_d14)) {
        emlrtIntegerCheckR2012b(c11_d14, &c11_cb_emlrtDCI, &c11_st);
      }

      c11_i81 = (int32_T)c11_d14;
      if ((c11_i81 < 1) || (c11_i81 > 60)) {
        emlrtDynamicBoundsCheckR2012b(c11_i81, 1, 60, &c11_cb_emlrtBCI, &c11_st);
      }

      c11_b_SW[(c11_i79 + 19 * (c11_i81 - 1)) - 1] = c11_SWimage[(c11_i73 + 60 *
        (c11_i77 - 1)) - 1];
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    covrtEmlForEval(chartInstance->c11_covrtInstance, 4U, 0, 3, 0);
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  covrtEmlForEval(chartInstance->c11_covrtInstance, 4U, 0, 2, 0);
  c11_y = NULL;
  sf_mex_assign(&c11_y, sf_mex_create("y", c11_b_N, 3, 0U, 1, 0U, 2, 19, 60),
                false);
  sf_mex_call(&c11_st, NULL, "disp", 0U, 1U, 14, c11_y);
  for (c11_i37 = 0; c11_i37 < 1140; c11_i37++) {
    (*chartInstance->c11_N)[c11_i37] = c11_b_N[c11_i37];
  }

  for (c11_i39 = 0; c11_i39 < 1140; c11_i39++) {
    (*chartInstance->c11_E)[c11_i39] = c11_b_E[c11_i39];
  }

  for (c11_i41 = 0; c11_i41 < 1140; c11_i41++) {
    (*chartInstance->c11_S)[c11_i41] = c11_b_S[c11_i41];
  }

  for (c11_i43 = 0; c11_i43 < 1140; c11_i43++) {
    (*chartInstance->c11_W)[c11_i43] = c11_b_W[c11_i43];
  }

  for (c11_i45 = 0; c11_i45 < 1140; c11_i45++) {
    (*chartInstance->c11_NE)[c11_i45] = c11_b_NE[c11_i45];
  }

  for (c11_i47 = 0; c11_i47 < 1140; c11_i47++) {
    (*chartInstance->c11_NW)[c11_i47] = c11_b_NW[c11_i47];
  }

  for (c11_i48 = 0; c11_i48 < 1140; c11_i48++) {
    (*chartInstance->c11_SE)[c11_i48] = c11_b_SE[c11_i48];
  }

  for (c11_i49 = 0; c11_i49 < 1140; c11_i49++) {
    (*chartInstance->c11_SW)[c11_i49] = c11_b_SW[c11_i49];
  }

  for (c11_i51 = 0; c11_i51 < 1140; c11_i51++) {
    covrtSigUpdateFcn(chartInstance->c11_covrtInstance, 1U, (real_T)
                      (*chartInstance->c11_N)[c11_i51]);
  }

  for (c11_i53 = 0; c11_i53 < 1140; c11_i53++) {
    covrtSigUpdateFcn(chartInstance->c11_covrtInstance, 2U, (real_T)
                      (*chartInstance->c11_E)[c11_i53]);
  }

  for (c11_i54 = 0; c11_i54 < 1140; c11_i54++) {
    covrtSigUpdateFcn(chartInstance->c11_covrtInstance, 3U, (real_T)
                      (*chartInstance->c11_S)[c11_i54]);
  }

  for (c11_i56 = 0; c11_i56 < 1140; c11_i56++) {
    covrtSigUpdateFcn(chartInstance->c11_covrtInstance, 4U, (real_T)
                      (*chartInstance->c11_W)[c11_i56]);
  }

  for (c11_i58 = 0; c11_i58 < 1140; c11_i58++) {
    covrtSigUpdateFcn(chartInstance->c11_covrtInstance, 5U, (real_T)
                      (*chartInstance->c11_NE)[c11_i58]);
  }

  for (c11_i60 = 0; c11_i60 < 1140; c11_i60++) {
    covrtSigUpdateFcn(chartInstance->c11_covrtInstance, 6U, (real_T)
                      (*chartInstance->c11_NW)[c11_i60]);
  }

  for (c11_i61 = 0; c11_i61 < 1140; c11_i61++) {
    covrtSigUpdateFcn(chartInstance->c11_covrtInstance, 7U, (real_T)
                      (*chartInstance->c11_SE)[c11_i61]);
  }

  for (c11_i63 = 0; c11_i63 < 1140; c11_i63++) {
    covrtSigUpdateFcn(chartInstance->c11_covrtInstance, 8U, (real_T)
                      (*chartInstance->c11_SW)[c11_i63]);
  }
}

static void ext_mode_exec_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c11_update_jit_animation_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c11_do_animation_call_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance)
{
  const mxArray *c11_b_y = NULL;
  const mxArray *c11_c_y = NULL;
  const mxArray *c11_d_y = NULL;
  const mxArray *c11_e_y = NULL;
  const mxArray *c11_f_y = NULL;
  const mxArray *c11_g_y = NULL;
  const mxArray *c11_h_y = NULL;
  const mxArray *c11_i_y = NULL;
  const mxArray *c11_st;
  const mxArray *c11_y = NULL;
  c11_st = NULL;
  c11_st = NULL;
  c11_y = NULL;
  sf_mex_assign(&c11_y, sf_mex_createcellmatrix(8, 1), false);
  c11_b_y = NULL;
  sf_mex_assign(&c11_b_y, sf_mex_create("y", *chartInstance->c11_E, 3, 0U, 1, 0U,
    2, 19, 60), false);
  sf_mex_setcell(c11_y, 0, c11_b_y);
  c11_c_y = NULL;
  sf_mex_assign(&c11_c_y, sf_mex_create("y", *chartInstance->c11_N, 3, 0U, 1, 0U,
    2, 19, 60), false);
  sf_mex_setcell(c11_y, 1, c11_c_y);
  c11_d_y = NULL;
  sf_mex_assign(&c11_d_y, sf_mex_create("y", *chartInstance->c11_NE, 3, 0U, 1,
    0U, 2, 19, 60), false);
  sf_mex_setcell(c11_y, 2, c11_d_y);
  c11_e_y = NULL;
  sf_mex_assign(&c11_e_y, sf_mex_create("y", *chartInstance->c11_NW, 3, 0U, 1,
    0U, 2, 19, 60), false);
  sf_mex_setcell(c11_y, 3, c11_e_y);
  c11_f_y = NULL;
  sf_mex_assign(&c11_f_y, sf_mex_create("y", *chartInstance->c11_S, 3, 0U, 1, 0U,
    2, 19, 60), false);
  sf_mex_setcell(c11_y, 4, c11_f_y);
  c11_g_y = NULL;
  sf_mex_assign(&c11_g_y, sf_mex_create("y", *chartInstance->c11_SE, 3, 0U, 1,
    0U, 2, 19, 60), false);
  sf_mex_setcell(c11_y, 5, c11_g_y);
  c11_h_y = NULL;
  sf_mex_assign(&c11_h_y, sf_mex_create("y", *chartInstance->c11_SW, 3, 0U, 1,
    0U, 2, 19, 60), false);
  sf_mex_setcell(c11_y, 6, c11_h_y);
  c11_i_y = NULL;
  sf_mex_assign(&c11_i_y, sf_mex_create("y", *chartInstance->c11_W, 3, 0U, 1, 0U,
    2, 19, 60), false);
  sf_mex_setcell(c11_y, 7, c11_i_y);
  sf_mex_assign(&c11_st, c11_y, false);
  return c11_st;
}

static void set_sim_state_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance, const mxArray *c11_st)
{
  const mxArray *c11_u;
  int32_T c11_i;
  int32_T c11_i1;
  int32_T c11_i2;
  int32_T c11_i3;
  int32_T c11_i4;
  int32_T c11_i5;
  int32_T c11_i6;
  int32_T c11_i7;
  uint8_T c11_uv[1140];
  uint8_T c11_uv1[1140];
  uint8_T c11_uv2[1140];
  uint8_T c11_uv3[1140];
  uint8_T c11_uv4[1140];
  uint8_T c11_uv5[1140];
  uint8_T c11_uv6[1140];
  uint8_T c11_uv7[1140];
  chartInstance->c11_doneDoubleBufferReInit = true;
  c11_u = sf_mex_dup(c11_st);
  c11_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c11_u, 0)), "E",
                       c11_uv);
  for (c11_i = 0; c11_i < 1140; c11_i++) {
    (*chartInstance->c11_E)[c11_i] = c11_uv[c11_i];
  }

  c11_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c11_u, 1)), "N",
                       c11_uv1);
  for (c11_i1 = 0; c11_i1 < 1140; c11_i1++) {
    (*chartInstance->c11_N)[c11_i1] = c11_uv1[c11_i1];
  }

  c11_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c11_u, 2)), "NE",
                       c11_uv2);
  for (c11_i2 = 0; c11_i2 < 1140; c11_i2++) {
    (*chartInstance->c11_NE)[c11_i2] = c11_uv2[c11_i2];
  }

  c11_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c11_u, 3)), "NW",
                       c11_uv3);
  for (c11_i3 = 0; c11_i3 < 1140; c11_i3++) {
    (*chartInstance->c11_NW)[c11_i3] = c11_uv3[c11_i3];
  }

  c11_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c11_u, 4)), "S",
                       c11_uv4);
  for (c11_i4 = 0; c11_i4 < 1140; c11_i4++) {
    (*chartInstance->c11_S)[c11_i4] = c11_uv4[c11_i4];
  }

  c11_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c11_u, 5)), "SE",
                       c11_uv5);
  for (c11_i5 = 0; c11_i5 < 1140; c11_i5++) {
    (*chartInstance->c11_SE)[c11_i5] = c11_uv5[c11_i5];
  }

  c11_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c11_u, 6)), "SW",
                       c11_uv6);
  for (c11_i6 = 0; c11_i6 < 1140; c11_i6++) {
    (*chartInstance->c11_SW)[c11_i6] = c11_uv6[c11_i6];
  }

  c11_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c11_u, 7)), "W",
                       c11_uv7);
  for (c11_i7 = 0; c11_i7 < 1140; c11_i7++) {
    (*chartInstance->c11_W)[c11_i7] = c11_uv7[c11_i7];
  }

  sf_mex_destroy(&c11_u);
  sf_mex_destroy(&c11_st);
}

const mxArray *sf_c11_flightControlSystem_get_eml_resolved_functions_info(void)
{
  const mxArray *c11_nameCaptureInfo = NULL;
  c11_nameCaptureInfo = NULL;
  sf_mex_assign(&c11_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1, 0U, 2, 0, 1), false);
  return c11_nameCaptureInfo;
}

static void c11_emlrt_marshallIn(SFc11_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c11_nullptr, const char_T *c11_identifier,
  uint8_T c11_y[1140])
{
  emlrtMsgIdentifier c11_thisId;
  c11_thisId.fIdentifier = (const char_T *)c11_identifier;
  c11_thisId.fParent = NULL;
  c11_thisId.bParentIsCell = false;
  c11_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c11_nullptr), &c11_thisId,
    c11_y);
  sf_mex_destroy(&c11_nullptr);
}

static void c11_b_emlrt_marshallIn(SFc11_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId,
  uint8_T c11_y[1140])
{
  int32_T c11_i;
  uint8_T c11_uv[1140];
  (void)chartInstance;
  sf_mex_import(c11_parentId, sf_mex_dup(c11_u), c11_uv, 1, 3, 0U, 1, 0U, 2, 19,
                60);
  for (c11_i = 0; c11_i < 1140; c11_i++) {
    c11_y[c11_i] = c11_uv[c11_i];
  }

  sf_mex_destroy(&c11_u);
}

static int32_T c11__s32_add__(SFc11_flightControlSystemInstanceStruct
  *chartInstance, int32_T c11_b, int32_T c11_c, int32_T c11_EMLOvCount_src_loc,
  uint32_T c11_ssid_src_loc, int32_T c11_offset_src_loc, int32_T
  c11_length_src_loc)
{
  int32_T c11_a;
  (void)c11_EMLOvCount_src_loc;
  c11_a = c11_b + c11_c;
  if (((c11_a ^ c11_b) & (c11_a ^ c11_c)) < 0) {
    sf_data_overflow_error(chartInstance->S, c11_ssid_src_loc,
      c11_offset_src_loc, c11_length_src_loc);
  }

  return c11_a;
}

static int32_T c11__s32_minus__(SFc11_flightControlSystemInstanceStruct
  *chartInstance, int32_T c11_b, int32_T c11_c, int32_T c11_EMLOvCount_src_loc,
  uint32_T c11_ssid_src_loc, int32_T c11_offset_src_loc, int32_T
  c11_length_src_loc)
{
  int32_T c11_a;
  (void)c11_EMLOvCount_src_loc;
  c11_a = c11_b - c11_c;
  if (((c11_b ^ c11_a) & (c11_b ^ c11_c)) < 0) {
    sf_data_overflow_error(chartInstance->S, c11_ssid_src_loc,
      c11_offset_src_loc, c11_length_src_loc);
  }

  return c11_a;
}

static void init_dsm_address_info(SFc11_flightControlSystemInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc11_flightControlSystemInstanceStruct
  *chartInstance)
{
  chartInstance->c11_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c11_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c11_N = (uint8_T (*)[1140])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c11_E = (uint8_T (*)[1140])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c11_S = (uint8_T (*)[1140])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c11_W = (uint8_T (*)[1140])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c11_NE = (uint8_T (*)[1140])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 5);
  chartInstance->c11_BWimage = (real_T (*)[19200])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c11_NW = (uint8_T (*)[1140])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 6);
  chartInstance->c11_SE = (uint8_T (*)[1140])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 7);
  chartInstance->c11_SW = (uint8_T (*)[1140])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 8);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c11_flightControlSystem_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(854469213U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(597791568U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(4084579832U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3046165613U);
}

mxArray *sf_c11_flightControlSystem_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,1);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.Grayto8Buildable"));
  return(mxcell3p);
}

mxArray *sf_c11_flightControlSystem_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("grayto8_real64");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c11_flightControlSystem_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c11_flightControlSystem(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiCOYGNgACIGDiBmYoAAViifEYmGiLPA+QpAXFJZkAoSLy5K9kwB0nmJuWB+Ymm"
    "FZ15aPth8CwaE+WxYzGdEMp8TKg4BH+wp06/iANJvgKSfhYB+ASDLFRousPAZOPcrkeV+v0Hjfg"
    "mi3M+E4n4mBj/XweJ+EfLcHz5Y3K9GVvoJHjTpR4as8A8eNOlHgTz3D5r0o0FW+glHSj8Ac6Ila"
    "g=="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c11_flightControlSystem_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "spNmfeuNV9HNFANymvMuU8B";
}

static void sf_opaque_initialize_c11_flightControlSystem(void *chartInstanceVar)
{
  initialize_params_c11_flightControlSystem
    ((SFc11_flightControlSystemInstanceStruct*) chartInstanceVar);
  initialize_c11_flightControlSystem((SFc11_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c11_flightControlSystem(void *chartInstanceVar)
{
  enable_c11_flightControlSystem((SFc11_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c11_flightControlSystem(void *chartInstanceVar)
{
  disable_c11_flightControlSystem((SFc11_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c11_flightControlSystem(void *chartInstanceVar)
{
  sf_gateway_c11_flightControlSystem((SFc11_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c11_flightControlSystem(SimStruct*
  S)
{
  return get_sim_state_c11_flightControlSystem
    ((SFc11_flightControlSystemInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c11_flightControlSystem(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c11_flightControlSystem((SFc11_flightControlSystemInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c11_flightControlSystem(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc11_flightControlSystemInstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_flightControlSystem_optimization_info();
    }

    mdl_cleanup_runtime_resources_c11_flightControlSystem
      ((SFc11_flightControlSystemInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c11_flightControlSystem(void *chartInstanceVar)
{
  mdl_start_c11_flightControlSystem((SFc11_flightControlSystemInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc11_flightControlSystemInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c11_flightControlSystem(void
  *chartInstanceVar)
{
  mdl_terminate_c11_flightControlSystem((SFc11_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c11_flightControlSystem(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c11_flightControlSystem
      ((SFc11_flightControlSystemInstanceStruct*)sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c11_flightControlSystem_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [22] = {
    "eNrdWd1u40QUnlSldNGyKhISe1HECiG0EkKiuwItEoJt88MGNWnAaYv2Bk3s43joeOydn6ThKbj",
    "hHeAteAdueAMu4ZJLzjhOGtyQehyJBiy5zsT55nxz/J2fcUmt3SF43MPz+31CdvC6i+cWmR4v5e",
    "Pawjn9fpt8ko97rxDiR1TqtggT4n74SQBDEJ4JQ3bpiBUm7lFJY1XBrqAxfAUq4UazRLiRZyIEC",
    "cLHCdJEaie7isWGM3HRMsK3ltV5xPzIixLDgyOckAYngk/+yW5qdA8tNpgEX7cAAh3JxAyjFqfD",
    "1V6QelyPwL9QJnb2lQLtmdQuVXUM1yzl0LwEvy2UpugFdcN6PU011PWls0KY8mboJE45o6K8ryO",
    "qPEhRHRpO0wD/nhiN3itpF+0NmKA6kYzyZszrVuElsT2OPDsoa+7sZx3rBgzMcMjE0HpXmhgErh",
    "91UsJXYT0ZgaRDOBGOMWhX17zMHvBcl+VjsG1lWSkGTTx9KqoSNrPbHKGHVEW7LV/UKefKDdtP0",
    "mMYAc/sN6imFbBT+w5gpVjQT86otFHgGElGsBcGcmw9EQEr/4RHBVSWcLuYPEvAWWwlBQG6eU59",
    "PtFNmjRKJ3Edw6hxfFzS3nVsW2iQIfWhdO6TlClAwpmuHO0GTNEBt2j0ks5WWXoGEJWhRIVGNMa",
    "JvEAfuybZK1/ZSHBDQzCEBmjIEkYT1X1GuSnJOVaY4aw8ThVmLDe7iLXxUwnsUz+CwNYTxqEDyk",
    "6gSudnrCOHuNoR05MGKF+ytGwkGQUBFhLrpf4khVNxIZKxaMkk9vKOYIWuADBrUCmwLBxhWZKTF",
    "pIvx1rCi75VVpX2LKaa04HVxucgsLLYtdpKSH2MqqbA1g0JrYP12HdY2oViSmM7NWlmMRBk/ej9",
    "mls/+lo+fjyPpbbqS3xSFMuwwE7pcJA1e9BnMWRfeBR7iukwP6zdD8iV3Ttbq+1u4adaRRxZE/d",
    "sAbe9xD9vLOD28rF/cPBNyNkwsllYy4R7E3R8fI3H3RL+Xsa/iCPXcFd+nl0fLuBrS+yShes6z+",
    "fpAu7Vgp3tAm4n99l7P7/5y+/tb3+IxI+//fTlR1+sY3/3ZTc938vH+7P+bF7BRteSfFU9qLQbh",
    "2C6Zx8/67YOu5N41DGnT46y+b7eWc13t8B3Nn6Ap8YEl+VL6beDfK9lx9RM9wB2/icLfHdu8Med",
    "BT0R8sdn6+HfeVp8jts34PfwU7Og29vj/3Yl/t2N4X+/FP+tv/HfIt3mpvB/vRr/803h/24l/Xg",
    "bo5/9Sv73NkY/D6rx3xj9PKykn/OCfja9z7qtvu42eZbp+2oVcbsVceRfxq27Ptd+9r/++1V5gB",
    "R+v7fB6yAr8pPLvmbT1vUrcdt3vJWPP52/c6xHjAdL3nrkt4+Bhsvu/k/0/aej/2b7LLtfUPk/T",
    "Z4/PhSUTxSbvrKZfd2T9n39/JYEqpa/S7qNOkSW7JuX1fm7hfi24zETQTJW7x88+vDROnXtL/Lg",
    "GVs=",
    ""
  };

  static char newstr [1505] = "";
  newstr[0] = '\0';
  for (i = 0; i < 22; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c11_flightControlSystem(SimStruct *S)
{
  const char* newstr = sf_c11_flightControlSystem_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(3541942315U));
  ssSetChecksum1(S,(2506770927U));
  ssSetChecksum2(S,(3886575208U));
  ssSetChecksum3(S,(1245073833U));
}

static void mdlRTW_c11_flightControlSystem(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c11_flightControlSystem(SimStruct *S)
{
  SFc11_flightControlSystemInstanceStruct *chartInstance;
  chartInstance = (SFc11_flightControlSystemInstanceStruct *)utMalloc(sizeof
    (SFc11_flightControlSystemInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc11_flightControlSystemInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c11_flightControlSystem;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c11_flightControlSystem;
  chartInstance->chartInfo.mdlStart =
    sf_opaque_mdl_start_c11_flightControlSystem;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c11_flightControlSystem;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c11_flightControlSystem;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c11_flightControlSystem;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c11_flightControlSystem;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c11_flightControlSystem;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c11_flightControlSystem;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c11_flightControlSystem;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c11_flightControlSystem;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c11_flightControlSystem;
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

  mdl_setup_runtime_resources_c11_flightControlSystem(chartInstance);
}

void c11_flightControlSystem_method_dispatcher(SimStruct *S, int_T method, void *
  data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c11_flightControlSystem(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c11_flightControlSystem(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c11_flightControlSystem(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c11_flightControlSystem_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
