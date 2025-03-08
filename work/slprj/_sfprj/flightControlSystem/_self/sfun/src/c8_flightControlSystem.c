/* Include files */

#include "flightControlSystem_sfun.h"
#include "c8_flightControlSystem.h"
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
static emlrtRSInfo c8_emlrtRSI = { 5,  /* lineNo */
  "Image Processing System/MATLAB Function5",/* fcnName */
  "#flightControlSystem:2749"          /* pathName */
};

static emlrtRSInfo c8_b_emlrtRSI = { 39,/* lineNo */
  "im2uint8",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\im2uint8.m"/* pathName */
};

static emlrtRSInfo c8_c_emlrtRSI = { 195,/* lineNo */
  "im2uint8",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\im2uint8.m"/* pathName */
};

static emlrtRSInfo c8_d_emlrtRSI = { 19,/* lineNo */
  "grayto8",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\private\\grayto8.m"/* pathName */
};

static emlrtBCInfo c8_emlrtBCI = { 1,  /* iFirst */
  120,                                 /* iLast */
  33,                                  /* lineNo */
  27,                                  /* colNo */
  "squareBWimage",                     /* aName */
  "Image Processing System/MATLAB Function5",/* fName */
  "#flightControlSystem:2749",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_emlrtDCI = { 33, /* lineNo */
  27,                                  /* colNo */
  "Image Processing System/MATLAB Function5",/* fName */
  "#flightControlSystem:2749",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_b_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  33,                                  /* lineNo */
  30,                                  /* colNo */
  "squareBWimage",                     /* aName */
  "Image Processing System/MATLAB Function5",/* fName */
  "#flightControlSystem:2749",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_b_emlrtDCI = { 33,/* lineNo */
  30,                                  /* colNo */
  "Image Processing System/MATLAB Function5",/* fName */
  "#flightControlSystem:2749",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_c_emlrtBCI = { 1,/* iFirst */
  60,                                  /* iLast */
  33,                                  /* lineNo */
  8,                                   /* colNo */
  "NW",                                /* aName */
  "Image Processing System/MATLAB Function5",/* fName */
  "#flightControlSystem:2749",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_c_emlrtDCI = { 33,/* lineNo */
  8,                                   /* colNo */
  "Image Processing System/MATLAB Function5",/* fName */
  "#flightControlSystem:2749",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_d_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  34,                                  /* lineNo */
  27,                                  /* colNo */
  "squareBWimage",                     /* aName */
  "Image Processing System/MATLAB Function5",/* fName */
  "#flightControlSystem:2749",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_d_emlrtDCI = { 34,/* lineNo */
  27,                                  /* colNo */
  "Image Processing System/MATLAB Function5",/* fName */
  "#flightControlSystem:2749",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_e_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  34,                                  /* lineNo */
  33,                                  /* colNo */
  "squareBWimage",                     /* aName */
  "Image Processing System/MATLAB Function5",/* fName */
  "#flightControlSystem:2749",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_e_emlrtDCI = { 34,/* lineNo */
  33,                                  /* colNo */
  "Image Processing System/MATLAB Function5",/* fName */
  "#flightControlSystem:2749",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_f_emlrtBCI = { 1,/* iFirst */
  60,                                  /* iLast */
  34,                                  /* lineNo */
  8,                                   /* colNo */
  "SE",                                /* aName */
  "Image Processing System/MATLAB Function5",/* fName */
  "#flightControlSystem:2749",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_f_emlrtDCI = { 34,/* lineNo */
  8,                                   /* colNo */
  "Image Processing System/MATLAB Function5",/* fName */
  "#flightControlSystem:2749",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_g_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  41,                                  /* lineNo */
  27,                                  /* colNo */
  "squareBWimage",                     /* aName */
  "Image Processing System/MATLAB Function5",/* fName */
  "#flightControlSystem:2749",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_g_emlrtDCI = { 41,/* lineNo */
  27,                                  /* colNo */
  "Image Processing System/MATLAB Function5",/* fName */
  "#flightControlSystem:2749",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_h_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  41,                                  /* lineNo */
  33,                                  /* colNo */
  "squareBWimage",                     /* aName */
  "Image Processing System/MATLAB Function5",/* fName */
  "#flightControlSystem:2749",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_h_emlrtDCI = { 41,/* lineNo */
  33,                                  /* colNo */
  "Image Processing System/MATLAB Function5",/* fName */
  "#flightControlSystem:2749",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_i_emlrtBCI = { 1,/* iFirst */
  60,                                  /* iLast */
  41,                                  /* lineNo */
  8,                                   /* colNo */
  "SW",                                /* aName */
  "Image Processing System/MATLAB Function5",/* fName */
  "#flightControlSystem:2749",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_i_emlrtDCI = { 41,/* lineNo */
  8,                                   /* colNo */
  "Image Processing System/MATLAB Function5",/* fName */
  "#flightControlSystem:2749",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_j_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  42,                                  /* lineNo */
  27,                                  /* colNo */
  "squareBWimage",                     /* aName */
  "Image Processing System/MATLAB Function5",/* fName */
  "#flightControlSystem:2749",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_j_emlrtDCI = { 42,/* lineNo */
  27,                                  /* colNo */
  "Image Processing System/MATLAB Function5",/* fName */
  "#flightControlSystem:2749",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_k_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  42,                                  /* lineNo */
  34,                                  /* colNo */
  "squareBWimage",                     /* aName */
  "Image Processing System/MATLAB Function5",/* fName */
  "#flightControlSystem:2749",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_k_emlrtDCI = { 42,/* lineNo */
  34,                                  /* colNo */
  "Image Processing System/MATLAB Function5",/* fName */
  "#flightControlSystem:2749",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_l_emlrtBCI = { 1,/* iFirst */
  60,                                  /* iLast */
  42,                                  /* lineNo */
  8,                                   /* colNo */
  "NE",                                /* aName */
  "Image Processing System/MATLAB Function5",/* fName */
  "#flightControlSystem:2749",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_l_emlrtDCI = { 42,/* lineNo */
  8,                                   /* colNo */
  "Image Processing System/MATLAB Function5",/* fName */
  "#flightControlSystem:2749",         /* pName */
  1                                    /* checkKind */
};

/* Function Declarations */
static void initialize_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance);
static void initialize_params_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance);
static void mdl_start_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance);
static void mdl_terminate_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance);
static void enable_c8_flightControlSystem(SFc8_flightControlSystemInstanceStruct
  *chartInstance);
static void disable_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance);
static void sf_gateway_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance);
static void ext_mode_exec_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance);
static void c8_update_jit_animation_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance);
static void c8_do_animation_call_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance);
static void set_sim_state_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance, const mxArray *c8_st);
static void c8_emlrt_marshallIn(SFc8_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c8_nullptr, const char_T *c8_identifier,
  uint8_T c8_y[60]);
static void c8_b_emlrt_marshallIn(SFc8_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c8_u, const emlrtMsgIdentifier *c8_parentId,
  uint8_T c8_y[60]);
static void c8_c_emlrt_marshallIn(SFc8_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c8_nullptr, const char_T *c8_identifier, real_T
  c8_y[60]);
static void c8_d_emlrt_marshallIn(SFc8_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c8_u, const emlrtMsgIdentifier *c8_parentId,
  real_T c8_y[60]);
static int32_T c8__s32_add__(SFc8_flightControlSystemInstanceStruct
  *chartInstance, int32_T c8_b, int32_T c8_c, int32_T c8_EMLOvCount_src_loc,
  uint32_T c8_ssid_src_loc, int32_T c8_offset_src_loc, int32_T c8_length_src_loc);
static int32_T c8__s32_minus__(SFc8_flightControlSystemInstanceStruct
  *chartInstance, int32_T c8_b, int32_T c8_c, int32_T c8_EMLOvCount_src_loc,
  uint32_T c8_ssid_src_loc, int32_T c8_offset_src_loc, int32_T c8_length_src_loc);
static void init_dsm_address_info(SFc8_flightControlSystemInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc8_flightControlSystemInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance)
{
  emlrtStack c8_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c8_st.tls = chartInstance->c8_fEmlrtCtx;
  emlrtLicenseCheckR2022a(&c8_st, "EMLRT:runTime:MexFunctionNeedsLicense",
    "image_toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c8_doneDoubleBufferReInit = false;
  chartInstance->c8_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void initialize_params_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance)
{
  static const uint32_T c8_decisionTxtEndIdx = 0U;
  static const uint32_T c8_decisionTxtStartIdx = 0U;
  sfSetAnimationVectors(chartInstance->S, &chartInstance->c8_JITStateAnimation[0],
                        &chartInstance->c8_JITTransitionAnimation[0]);
  covrtCreateStateflowInstanceData(chartInstance->c8_covrtInstance, 1U, 0U, 1U,
    69U);
  covrtChartInitFcn(chartInstance->c8_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c8_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c8_decisionTxtStartIdx, &c8_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c8_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c8_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  1U, 0U, 2U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 0U,
                     "c8_flightControlSystem", 0, -1, 992);
  covrtEmlSaturationInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 0U, 146, -1,
    179);
  covrtEmlForInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 0U, 738, 752, 828);
  covrtEmlForInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 1U, 896, 910, 990);
}

static void mdl_cleanup_runtime_resources_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance)
{
  covrtDeleteStateflowInstanceData(chartInstance->c8_covrtInstance);
}

static void enable_c8_flightControlSystem(SFc8_flightControlSystemInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance)
{
  emlrtStack c8_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  real_T c8_img[14400];
  real_T c8_b_NE[60];
  real_T c8_b_NW[60];
  real_T c8_b_SE[60];
  real_T c8_b_SW[60];
  real_T c8_c_i;
  real_T c8_d;
  real_T c8_d1;
  real_T c8_d2;
  real_T c8_d3;
  real_T c8_d4;
  real_T c8_d5;
  real_T c8_z;
  int32_T c8_b_i;
  int32_T c8_b_k;
  int32_T c8_d_i;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i10;
  int32_T c8_i11;
  int32_T c8_i12;
  int32_T c8_i13;
  int32_T c8_i14;
  int32_T c8_i15;
  int32_T c8_i16;
  int32_T c8_i17;
  int32_T c8_i18;
  int32_T c8_i19;
  int32_T c8_i2;
  int32_T c8_i20;
  int32_T c8_i21;
  int32_T c8_i22;
  int32_T c8_i23;
  int32_T c8_i24;
  int32_T c8_i25;
  int32_T c8_i26;
  int32_T c8_i27;
  int32_T c8_i28;
  int32_T c8_i29;
  int32_T c8_i3;
  int32_T c8_i30;
  int32_T c8_i31;
  int32_T c8_i32;
  int32_T c8_i33;
  int32_T c8_i34;
  int32_T c8_i35;
  int32_T c8_i36;
  int32_T c8_i37;
  int32_T c8_i4;
  int32_T c8_i5;
  int32_T c8_i6;
  int32_T c8_i7;
  int32_T c8_i8;
  int32_T c8_i9;
  int32_T c8_k;
  uint8_T c8_squareBWimage[14400];
  uint8_T c8_x[14400];
  uint8_T c8_b_E[60];
  uint8_T c8_b_N[60];
  uint8_T c8_b_S[60];
  uint8_T c8_b_W[60];
  uint8_T c8_b_x;
  uint8_T c8_u;
  boolean_T c8_covSaturation = false;
  c8_st.tls = chartInstance->c8_fEmlrtCtx;
  for (c8_i = 0; c8_i < 19200; c8_i++) {
    covrtSigUpdateFcn(chartInstance->c8_covrtInstance, 0U,
                      (*chartInstance->c8_BWimage)[c8_i]);
  }

  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c8_JITTransitionAnimation[0] = 0U;
  chartInstance->c8_sfEvent = CALL_EVENT;
  covrtEmlFcnEval(chartInstance->c8_covrtInstance, 4U, 0, 0);
  c8_i1 = 0;
  for (c8_i2 = 0; c8_i2 < 120; c8_i2++) {
    for (c8_i3 = 0; c8_i3 < 120; c8_i3++) {
      c8_img[c8_i3 + c8_i1] = (*chartInstance->c8_BWimage)[(c8_i3 + c8_i1) +
        2400];
    }

    c8_i1 += 120;
  }

  grayto8_real64(&c8_img[0], &c8_x[0], 14400.0);
  for (c8_k = 0; c8_k < 14400; c8_k++) {
    c8_b_k = c8__s32_add__(chartInstance, 1, c8_k, 0, 1U, 146, 33);
    c8_b_x = c8_x[c8__s32_minus__(chartInstance, c8_b_k, 1, 0, 1U, 146, 33)];
    c8_z = (real_T)c8_b_x / 255.0;
    c8_d = muDoubleScalarRound(c8_z);
    c8_covSaturation = false;
    if (c8_d < 256.0) {
      if (c8_d >= 0.0) {
        c8_u = (uint8_T)c8_d;
      } else {
        c8_covSaturation = true;
        c8_u = 0U;
        sf_data_saturate_error(chartInstance->S, 1U, 146, 33);
      }
    } else if (c8_d >= 256.0) {
      c8_covSaturation = true;
      c8_u = MAX_uint8_T;
      sf_data_saturate_error(chartInstance->S, 1U, 146, 33);
    } else {
      c8_u = 0U;
    }

    covrtSaturationUpdateFcn(chartInstance->c8_covrtInstance, 4, 0, 0, 0,
      c8_covSaturation);
    c8_squareBWimage[c8__s32_minus__(chartInstance, c8_b_k, 1, 0, 1U, 146, 33)] =
      c8_u;
  }

  for (c8_i4 = 0; c8_i4 < 60; c8_i4++) {
    c8_b_N[c8_i4] = c8_squareBWimage[c8_i4 + 7200];
  }

  for (c8_i5 = 0; c8_i5 < 60; c8_i5++) {
    c8_b_S[c8_i5] = c8_squareBWimage[c8_i5 + 7260];
  }

  c8_i6 = 0;
  for (c8_i7 = 0; c8_i7 < 60; c8_i7++) {
    c8_b_W[c8_i7] = c8_squareBWimage[c8_i6 + 60];
    c8_i6 += 120;
  }

  c8_i8 = 0;
  for (c8_i9 = 0; c8_i9 < 60; c8_i9++) {
    c8_b_E[c8_i9] = c8_squareBWimage[c8_i8 + 7260];
    c8_i8 += 120;
  }

  for (c8_b_i = 0; c8_b_i < 60; c8_b_i++) {
    c8_c_i = 1.0 + (real_T)c8_b_i;
    covrtEmlForEval(chartInstance->c8_covrtInstance, 4U, 0, 0, 1);
    if (c8_c_i != (real_T)(int32_T)muDoubleScalarFloor(c8_c_i)) {
      emlrtIntegerCheckR2012b(c8_c_i, &c8_emlrtDCI, &c8_st);
    }

    c8_i11 = (int32_T)c8_c_i;
    if ((c8_i11 < 1) || (c8_i11 > 120)) {
      emlrtDynamicBoundsCheckR2012b(c8_i11, 1, 120, &c8_emlrtBCI, &c8_st);
    }

    if (c8_c_i != (real_T)(int32_T)muDoubleScalarFloor(c8_c_i)) {
      emlrtIntegerCheckR2012b(c8_c_i, &c8_b_emlrtDCI, &c8_st);
    }

    c8_i15 = (int32_T)c8_c_i;
    if ((c8_i15 < 1) || (c8_i15 > 120)) {
      emlrtDynamicBoundsCheckR2012b(c8_i15, 1, 120, &c8_b_emlrtBCI, &c8_st);
    }

    if (c8_c_i != (real_T)(int32_T)muDoubleScalarFloor(c8_c_i)) {
      emlrtIntegerCheckR2012b(c8_c_i, &c8_c_emlrtDCI, &c8_st);
    }

    c8_i20 = (int32_T)c8_c_i;
    if ((c8_i20 < 1) || (c8_i20 > 60)) {
      emlrtDynamicBoundsCheckR2012b(c8_i20, 1, 60, &c8_c_emlrtBCI, &c8_st);
    }

    c8_b_NW[c8_i20 - 1] = (real_T)c8_squareBWimage[(c8_i11 + 120 * (c8_i15 - 1))
      - 1];
    c8_d2 = c8_c_i + 60.0;
    if (c8_d2 != (real_T)(int32_T)muDoubleScalarFloor(c8_d2)) {
      emlrtIntegerCheckR2012b(c8_d2, &c8_d_emlrtDCI, &c8_st);
    }

    c8_i25 = (int32_T)c8_d2;
    if ((c8_i25 < 1) || (c8_i25 > 120)) {
      emlrtDynamicBoundsCheckR2012b(c8_i25, 1, 120, &c8_d_emlrtBCI, &c8_st);
    }

    c8_d4 = c8_c_i + 60.0;
    if (c8_d4 != (real_T)(int32_T)muDoubleScalarFloor(c8_d4)) {
      emlrtIntegerCheckR2012b(c8_d4, &c8_e_emlrtDCI, &c8_st);
    }

    c8_i30 = (int32_T)c8_d4;
    if ((c8_i30 < 1) || (c8_i30 > 120)) {
      emlrtDynamicBoundsCheckR2012b(c8_i30, 1, 120, &c8_e_emlrtBCI, &c8_st);
    }

    if (c8_c_i != (real_T)(int32_T)muDoubleScalarFloor(c8_c_i)) {
      emlrtIntegerCheckR2012b(c8_c_i, &c8_f_emlrtDCI, &c8_st);
    }

    c8_i35 = (int32_T)c8_c_i;
    if ((c8_i35 < 1) || (c8_i35 > 60)) {
      emlrtDynamicBoundsCheckR2012b(c8_i35, 1, 60, &c8_f_emlrtBCI, &c8_st);
    }

    c8_b_SE[c8_i35 - 1] = (real_T)c8_squareBWimage[(c8_i25 + 120 * (c8_i30 - 1))
      - 1];
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  covrtEmlForEval(chartInstance->c8_covrtInstance, 4U, 0, 0, 0);
  for (c8_d_i = 0; c8_d_i < 60; c8_d_i++) {
    c8_c_i = 1.0 + (real_T)c8_d_i;
    covrtEmlForEval(chartInstance->c8_covrtInstance, 4U, 0, 1, 1);
    c8_d1 = 61.0 - c8_c_i;
    if (c8_d1 != (real_T)(int32_T)muDoubleScalarFloor(c8_d1)) {
      emlrtIntegerCheckR2012b(c8_d1, &c8_g_emlrtDCI, &c8_st);
    }

    c8_i14 = (int32_T)c8_d1;
    if ((c8_i14 < 1) || (c8_i14 > 120)) {
      emlrtDynamicBoundsCheckR2012b(c8_i14, 1, 120, &c8_g_emlrtBCI, &c8_st);
    }

    if (c8_c_i != (real_T)(int32_T)muDoubleScalarFloor(c8_c_i)) {
      emlrtIntegerCheckR2012b(c8_c_i, &c8_h_emlrtDCI, &c8_st);
    }

    c8_i18 = (int32_T)c8_c_i;
    if ((c8_i18 < 1) || (c8_i18 > 120)) {
      emlrtDynamicBoundsCheckR2012b(c8_i18, 1, 120, &c8_h_emlrtBCI, &c8_st);
    }

    if (c8_c_i != (real_T)(int32_T)muDoubleScalarFloor(c8_c_i)) {
      emlrtIntegerCheckR2012b(c8_c_i, &c8_i_emlrtDCI, &c8_st);
    }

    c8_i23 = (int32_T)c8_c_i;
    if ((c8_i23 < 1) || (c8_i23 > 60)) {
      emlrtDynamicBoundsCheckR2012b(c8_i23, 1, 60, &c8_i_emlrtBCI, &c8_st);
    }

    c8_b_SW[c8_i23 - 1] = (real_T)c8_squareBWimage[(c8_i14 + 120 * (c8_i18 - 1))
      - 1];
    c8_d3 = 121.0 - c8_c_i;
    if (c8_d3 != (real_T)(int32_T)muDoubleScalarFloor(c8_d3)) {
      emlrtIntegerCheckR2012b(c8_d3, &c8_j_emlrtDCI, &c8_st);
    }

    c8_i28 = (int32_T)c8_d3;
    if ((c8_i28 < 1) || (c8_i28 > 120)) {
      emlrtDynamicBoundsCheckR2012b(c8_i28, 1, 120, &c8_j_emlrtBCI, &c8_st);
    }

    c8_d5 = c8_c_i + 60.0;
    if (c8_d5 != (real_T)(int32_T)muDoubleScalarFloor(c8_d5)) {
      emlrtIntegerCheckR2012b(c8_d5, &c8_k_emlrtDCI, &c8_st);
    }

    c8_i33 = (int32_T)c8_d5;
    if ((c8_i33 < 1) || (c8_i33 > 120)) {
      emlrtDynamicBoundsCheckR2012b(c8_i33, 1, 120, &c8_k_emlrtBCI, &c8_st);
    }

    if (c8_c_i != (real_T)(int32_T)muDoubleScalarFloor(c8_c_i)) {
      emlrtIntegerCheckR2012b(c8_c_i, &c8_l_emlrtDCI, &c8_st);
    }

    c8_i37 = (int32_T)c8_c_i;
    if ((c8_i37 < 1) || (c8_i37 > 60)) {
      emlrtDynamicBoundsCheckR2012b(c8_i37, 1, 60, &c8_l_emlrtBCI, &c8_st);
    }

    c8_b_NE[c8_i37 - 1] = (real_T)c8_squareBWimage[(c8_i28 + 120 * (c8_i33 - 1))
      - 1];
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  covrtEmlForEval(chartInstance->c8_covrtInstance, 4U, 0, 1, 0);
  for (c8_i10 = 0; c8_i10 < 60; c8_i10++) {
    (*chartInstance->c8_N)[c8_i10] = c8_b_N[c8_i10];
  }

  for (c8_i12 = 0; c8_i12 < 60; c8_i12++) {
    (*chartInstance->c8_E)[c8_i12] = c8_b_E[c8_i12];
  }

  for (c8_i13 = 0; c8_i13 < 60; c8_i13++) {
    (*chartInstance->c8_S)[c8_i13] = c8_b_S[c8_i13];
  }

  for (c8_i16 = 0; c8_i16 < 60; c8_i16++) {
    (*chartInstance->c8_W)[c8_i16] = c8_b_W[c8_i16];
  }

  for (c8_i17 = 0; c8_i17 < 60; c8_i17++) {
    (*chartInstance->c8_NE)[c8_i17] = c8_b_NE[c8_i17];
  }

  for (c8_i19 = 0; c8_i19 < 60; c8_i19++) {
    (*chartInstance->c8_NW)[c8_i19] = c8_b_NW[c8_i19];
  }

  for (c8_i21 = 0; c8_i21 < 60; c8_i21++) {
    (*chartInstance->c8_SE)[c8_i21] = c8_b_SE[c8_i21];
  }

  for (c8_i22 = 0; c8_i22 < 60; c8_i22++) {
    (*chartInstance->c8_SW)[c8_i22] = c8_b_SW[c8_i22];
  }

  for (c8_i24 = 0; c8_i24 < 60; c8_i24++) {
    covrtSigUpdateFcn(chartInstance->c8_covrtInstance, 1U, (real_T)
                      (*chartInstance->c8_N)[c8_i24]);
  }

  for (c8_i26 = 0; c8_i26 < 60; c8_i26++) {
    covrtSigUpdateFcn(chartInstance->c8_covrtInstance, 2U, (real_T)
                      (*chartInstance->c8_E)[c8_i26]);
  }

  for (c8_i27 = 0; c8_i27 < 60; c8_i27++) {
    covrtSigUpdateFcn(chartInstance->c8_covrtInstance, 3U, (real_T)
                      (*chartInstance->c8_S)[c8_i27]);
  }

  for (c8_i29 = 0; c8_i29 < 60; c8_i29++) {
    covrtSigUpdateFcn(chartInstance->c8_covrtInstance, 4U, (real_T)
                      (*chartInstance->c8_W)[c8_i29]);
  }

  for (c8_i31 = 0; c8_i31 < 60; c8_i31++) {
    covrtSigUpdateFcn(chartInstance->c8_covrtInstance, 5U,
                      (*chartInstance->c8_NE)[c8_i31]);
  }

  for (c8_i32 = 0; c8_i32 < 60; c8_i32++) {
    covrtSigUpdateFcn(chartInstance->c8_covrtInstance, 6U,
                      (*chartInstance->c8_NW)[c8_i32]);
  }

  for (c8_i34 = 0; c8_i34 < 60; c8_i34++) {
    covrtSigUpdateFcn(chartInstance->c8_covrtInstance, 7U,
                      (*chartInstance->c8_SE)[c8_i34]);
  }

  for (c8_i36 = 0; c8_i36 < 60; c8_i36++) {
    covrtSigUpdateFcn(chartInstance->c8_covrtInstance, 8U,
                      (*chartInstance->c8_SW)[c8_i36]);
  }
}

static void ext_mode_exec_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c8_update_jit_animation_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c8_do_animation_call_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance)
{
  const mxArray *c8_b_y = NULL;
  const mxArray *c8_c_y = NULL;
  const mxArray *c8_d_y = NULL;
  const mxArray *c8_e_y = NULL;
  const mxArray *c8_f_y = NULL;
  const mxArray *c8_g_y = NULL;
  const mxArray *c8_h_y = NULL;
  const mxArray *c8_i_y = NULL;
  const mxArray *c8_st;
  const mxArray *c8_y = NULL;
  c8_st = NULL;
  c8_st = NULL;
  c8_y = NULL;
  sf_mex_assign(&c8_y, sf_mex_createcellmatrix(8, 1), false);
  c8_b_y = NULL;
  sf_mex_assign(&c8_b_y, sf_mex_create("y", *chartInstance->c8_E, 3, 0U, 1, 0U,
    2, 1, 60), false);
  sf_mex_setcell(c8_y, 0, c8_b_y);
  c8_c_y = NULL;
  sf_mex_assign(&c8_c_y, sf_mex_create("y", *chartInstance->c8_N, 3, 0U, 1, 0U,
    2, 1, 60), false);
  sf_mex_setcell(c8_y, 1, c8_c_y);
  c8_d_y = NULL;
  sf_mex_assign(&c8_d_y, sf_mex_create("y", *chartInstance->c8_NE, 0, 0U, 1, 0U,
    2, 1, 60), false);
  sf_mex_setcell(c8_y, 2, c8_d_y);
  c8_e_y = NULL;
  sf_mex_assign(&c8_e_y, sf_mex_create("y", *chartInstance->c8_NW, 0, 0U, 1, 0U,
    2, 1, 60), false);
  sf_mex_setcell(c8_y, 3, c8_e_y);
  c8_f_y = NULL;
  sf_mex_assign(&c8_f_y, sf_mex_create("y", *chartInstance->c8_S, 3, 0U, 1, 0U,
    2, 1, 60), false);
  sf_mex_setcell(c8_y, 4, c8_f_y);
  c8_g_y = NULL;
  sf_mex_assign(&c8_g_y, sf_mex_create("y", *chartInstance->c8_SE, 0, 0U, 1, 0U,
    2, 1, 60), false);
  sf_mex_setcell(c8_y, 5, c8_g_y);
  c8_h_y = NULL;
  sf_mex_assign(&c8_h_y, sf_mex_create("y", *chartInstance->c8_SW, 0, 0U, 1, 0U,
    2, 1, 60), false);
  sf_mex_setcell(c8_y, 6, c8_h_y);
  c8_i_y = NULL;
  sf_mex_assign(&c8_i_y, sf_mex_create("y", *chartInstance->c8_W, 3, 0U, 1, 0U,
    2, 1, 60), false);
  sf_mex_setcell(c8_y, 7, c8_i_y);
  sf_mex_assign(&c8_st, c8_y, false);
  return c8_st;
}

static void set_sim_state_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance, const mxArray *c8_st)
{
  const mxArray *c8_u;
  real_T c8_dv[60];
  real_T c8_dv1[60];
  real_T c8_dv2[60];
  real_T c8_dv3[60];
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i2;
  int32_T c8_i3;
  int32_T c8_i4;
  int32_T c8_i5;
  int32_T c8_i6;
  int32_T c8_i7;
  uint8_T c8_uv[60];
  uint8_T c8_uv1[60];
  uint8_T c8_uv2[60];
  uint8_T c8_uv3[60];
  chartInstance->c8_doneDoubleBufferReInit = true;
  c8_u = sf_mex_dup(c8_st);
  c8_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c8_u, 0)), "E",
                      c8_uv);
  for (c8_i = 0; c8_i < 60; c8_i++) {
    (*chartInstance->c8_E)[c8_i] = c8_uv[c8_i];
  }

  c8_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c8_u, 1)), "N",
                      c8_uv1);
  for (c8_i1 = 0; c8_i1 < 60; c8_i1++) {
    (*chartInstance->c8_N)[c8_i1] = c8_uv1[c8_i1];
  }

  c8_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c8_u, 2)), "NE",
                        c8_dv);
  for (c8_i2 = 0; c8_i2 < 60; c8_i2++) {
    (*chartInstance->c8_NE)[c8_i2] = c8_dv[c8_i2];
  }

  c8_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c8_u, 3)), "NW",
                        c8_dv1);
  for (c8_i3 = 0; c8_i3 < 60; c8_i3++) {
    (*chartInstance->c8_NW)[c8_i3] = c8_dv1[c8_i3];
  }

  c8_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c8_u, 4)), "S",
                      c8_uv2);
  for (c8_i4 = 0; c8_i4 < 60; c8_i4++) {
    (*chartInstance->c8_S)[c8_i4] = c8_uv2[c8_i4];
  }

  c8_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c8_u, 5)), "SE",
                        c8_dv2);
  for (c8_i5 = 0; c8_i5 < 60; c8_i5++) {
    (*chartInstance->c8_SE)[c8_i5] = c8_dv2[c8_i5];
  }

  c8_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c8_u, 6)), "SW",
                        c8_dv3);
  for (c8_i6 = 0; c8_i6 < 60; c8_i6++) {
    (*chartInstance->c8_SW)[c8_i6] = c8_dv3[c8_i6];
  }

  c8_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c8_u, 7)), "W",
                      c8_uv3);
  for (c8_i7 = 0; c8_i7 < 60; c8_i7++) {
    (*chartInstance->c8_W)[c8_i7] = c8_uv3[c8_i7];
  }

  sf_mex_destroy(&c8_u);
  sf_mex_destroy(&c8_st);
}

const mxArray *sf_c8_flightControlSystem_get_eml_resolved_functions_info(void)
{
  const mxArray *c8_nameCaptureInfo = NULL;
  c8_nameCaptureInfo = NULL;
  sf_mex_assign(&c8_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1, 0U, 2, 0, 1), false);
  return c8_nameCaptureInfo;
}

static void c8_emlrt_marshallIn(SFc8_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c8_nullptr, const char_T *c8_identifier,
  uint8_T c8_y[60])
{
  emlrtMsgIdentifier c8_thisId;
  c8_thisId.fIdentifier = (const char_T *)c8_identifier;
  c8_thisId.fParent = NULL;
  c8_thisId.bParentIsCell = false;
  c8_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c8_nullptr), &c8_thisId, c8_y);
  sf_mex_destroy(&c8_nullptr);
}

static void c8_b_emlrt_marshallIn(SFc8_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c8_u, const emlrtMsgIdentifier *c8_parentId,
  uint8_T c8_y[60])
{
  int32_T c8_i;
  uint8_T c8_uv[60];
  (void)chartInstance;
  sf_mex_import(c8_parentId, sf_mex_dup(c8_u), c8_uv, 1, 3, 0U, 1, 0U, 2, 1, 60);
  for (c8_i = 0; c8_i < 60; c8_i++) {
    c8_y[c8_i] = c8_uv[c8_i];
  }

  sf_mex_destroy(&c8_u);
}

static void c8_c_emlrt_marshallIn(SFc8_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c8_nullptr, const char_T *c8_identifier, real_T
  c8_y[60])
{
  emlrtMsgIdentifier c8_thisId;
  c8_thisId.fIdentifier = (const char_T *)c8_identifier;
  c8_thisId.fParent = NULL;
  c8_thisId.bParentIsCell = false;
  c8_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c8_nullptr), &c8_thisId, c8_y);
  sf_mex_destroy(&c8_nullptr);
}

static void c8_d_emlrt_marshallIn(SFc8_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c8_u, const emlrtMsgIdentifier *c8_parentId,
  real_T c8_y[60])
{
  real_T c8_dv[60];
  int32_T c8_i;
  (void)chartInstance;
  sf_mex_import(c8_parentId, sf_mex_dup(c8_u), c8_dv, 1, 0, 0U, 1, 0U, 2, 1, 60);
  for (c8_i = 0; c8_i < 60; c8_i++) {
    c8_y[c8_i] = c8_dv[c8_i];
  }

  sf_mex_destroy(&c8_u);
}

static int32_T c8__s32_add__(SFc8_flightControlSystemInstanceStruct
  *chartInstance, int32_T c8_b, int32_T c8_c, int32_T c8_EMLOvCount_src_loc,
  uint32_T c8_ssid_src_loc, int32_T c8_offset_src_loc, int32_T c8_length_src_loc)
{
  int32_T c8_a;
  (void)c8_EMLOvCount_src_loc;
  c8_a = c8_b + c8_c;
  if (((c8_a ^ c8_b) & (c8_a ^ c8_c)) < 0) {
    sf_data_overflow_error(chartInstance->S, c8_ssid_src_loc, c8_offset_src_loc,
      c8_length_src_loc);
  }

  return c8_a;
}

static int32_T c8__s32_minus__(SFc8_flightControlSystemInstanceStruct
  *chartInstance, int32_T c8_b, int32_T c8_c, int32_T c8_EMLOvCount_src_loc,
  uint32_T c8_ssid_src_loc, int32_T c8_offset_src_loc, int32_T c8_length_src_loc)
{
  int32_T c8_a;
  (void)c8_EMLOvCount_src_loc;
  c8_a = c8_b - c8_c;
  if (((c8_b ^ c8_a) & (c8_b ^ c8_c)) < 0) {
    sf_data_overflow_error(chartInstance->S, c8_ssid_src_loc, c8_offset_src_loc,
      c8_length_src_loc);
  }

  return c8_a;
}

static void init_dsm_address_info(SFc8_flightControlSystemInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc8_flightControlSystemInstanceStruct
  *chartInstance)
{
  chartInstance->c8_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c8_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c8_BWimage = (real_T (*)[19200])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c8_N = (uint8_T (*)[60])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c8_E = (uint8_T (*)[60])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c8_S = (uint8_T (*)[60])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c8_W = (uint8_T (*)[60])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c8_NE = (real_T (*)[60])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 5);
  chartInstance->c8_NW = (real_T (*)[60])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 6);
  chartInstance->c8_SE = (real_T (*)[60])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 7);
  chartInstance->c8_SW = (real_T (*)[60])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 8);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c8_flightControlSystem_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1045394399U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(607124901U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2664241580U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1037551236U);
}

mxArray *sf_c8_flightControlSystem_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,1);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.Grayto8Buildable"));
  return(mxcell3p);
}

mxArray *sf_c8_flightControlSystem_jit_fallback_info(void)
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

mxArray *sf_c8_flightControlSystem_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c8_flightControlSystem(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiCOYGNgACIGDiBmYoAAViifEYmGiLPA+QpAXFJZkAoSLy5K9kwB0nmJuWB+Ymm"
    "FZ15aPth8CwaE+WxYzGdEMp8TKg4BH+wp0y/hANJvgKSfhYB+ASDLFRousPAZOPeLkOV+v0Hjfi"
    "Wi3M+E4n4mBj/XweJ+FfLcHz5Y3C9DVvoJHjTpR42s8A8eNOlHgzz3D5r0o0BW+glHSj8ASaIla"
    "g=="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c8_flightControlSystem_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "s4JYsdJEFxJFFJOjA6MLD1E";
}

static void sf_opaque_initialize_c8_flightControlSystem(void *chartInstanceVar)
{
  initialize_params_c8_flightControlSystem
    ((SFc8_flightControlSystemInstanceStruct*) chartInstanceVar);
  initialize_c8_flightControlSystem((SFc8_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c8_flightControlSystem(void *chartInstanceVar)
{
  enable_c8_flightControlSystem((SFc8_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c8_flightControlSystem(void *chartInstanceVar)
{
  disable_c8_flightControlSystem((SFc8_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c8_flightControlSystem(void *chartInstanceVar)
{
  sf_gateway_c8_flightControlSystem((SFc8_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c8_flightControlSystem(SimStruct*
  S)
{
  return get_sim_state_c8_flightControlSystem
    ((SFc8_flightControlSystemInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c8_flightControlSystem(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c8_flightControlSystem((SFc8_flightControlSystemInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c8_flightControlSystem(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc8_flightControlSystemInstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_flightControlSystem_optimization_info();
    }

    mdl_cleanup_runtime_resources_c8_flightControlSystem
      ((SFc8_flightControlSystemInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c8_flightControlSystem(void *chartInstanceVar)
{
  mdl_start_c8_flightControlSystem((SFc8_flightControlSystemInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc8_flightControlSystemInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c8_flightControlSystem(void
  *chartInstanceVar)
{
  mdl_terminate_c8_flightControlSystem((SFc8_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c8_flightControlSystem(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c8_flightControlSystem
      ((SFc8_flightControlSystemInstanceStruct*)sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c8_flightControlSystem_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [22] = {
    "eNrdWd1u40QUnkTd0kXLqkj87EUlVgihvUFiu4D2YgXbTRxIlLQRTrewN2hqn8RDx+Ps/OSHp9g",
    "n4Tl4ASQk7ngCLrnkjOOkwQ2pxwE1YMl1Js4355vj7/yMSyrNDsHjLp6vDgjZxesenlUyO25l48",
    "rSOft+hzzJxt3XCQkiKnVT9BPifgRJCAMQvun32cQRK0zcpZLGqoRdQWP4GlTCjWaJcCPPRB8ki",
    "AAnGCZSO9lVLDaciYuGEYG1rM4iFkR+lBgePsMJaXgi+PTv7A6N7qLFOpMQ6AZAqCOZmEHU4HSw",
    "3gtSj2sRBBfKxM6+UqB9M7RLVR3DNRty8CYQNIXSFL2grlmvr6mGmp44K4Qpf45O4iFnVBT3dUS",
    "VD0NUh4bTYYh/T4xG7xW0i/bOmaA6kYxyL+Y1q/CC2C5Hnh2UNXf2s451Hc7NYMDEwHpXmhgErh",
    "91UsBX/VoyAkkHcCIcY9CuzpukD3ihy+Ix2LSyLBWDJp49FVUKm9r1RughVdJuIxA1yrlyw/aSY",
    "RtGwFP7dappCezMvgNYKRb2kudU2ihwjCQj2EsDGbaWiJAVf8KjHCpNuMeYPAvAWWwlBSG6eUF9",
    "MdF1mjRKJ3ENw6jebhe0dxXbFBpknwZQOPdJyhQg4VRXjnZDpug5t2j0kk5XWXgGEKWhRPWNqI8",
    "TeYE+dk2yl76ykeCGhnAAddCQJgwP1f2cclOQc6www1l5nCrMWG52EWvjpxQ4oEEEoa0njEMHlJ",
    "1AFc7PWEeOcLUjpqd1UIFkw6KRZBSEWEisl3rTIZyKC5GMRUMmsZ91BGt0BYBZg0qBZeEZliU5b",
    "SD5YqwlvOxZZZVpz2KqOT232vgSBFYWu1ZbCWmAUeUJbN2Q0CZYn/2ApV0opjS2U1MvjYEw7Ufv",
    "Vdz60Tez8aNFLDVVT+KToliGBXZKR+dpswc9FkP6hU+xp5gNs8Pa/Zhc2r1dXW+3ip8qJXFkQ9x",
    "XS7idFf55Zwm3n42Dx9/1ORtENglrmXB/in6Pr/K4U8Dfq/jnceQK7tLP8+uDJXxlhV2ydN3k+T",
    "xdwr2Rs7OTw+1mPjt88tuPv976+QW8qv709lHrcBP7e6+56fluNj6Y92eLCja6kuSL6OHdnB7sW",
    "H3S+laFLa8xaTUarZPvjz7rtOsPvXS+b3bX893L8Z2P7+OpMcGl+VIGzTDba9kxNbM9gJ3/8RLf",
    "3Wv8cXtJT4T8/sVm+HtP889x5xr8Pn7ycrq9Of5vleJ/vDX83y/Ev/oX/lVy7G0L/w/K8T/bFv4",
    "HpfTjb41+Pizlf39r9POgHP+t0c/9Uvo5y+ln2/usm+rrbpJnkb6vUhK3R/69PvOfxG26Ptd+9r",
    "/++3V5gOR+v7/F6yBr8pPLvmbb1vULcdt3vJeNP1+8c6xFjIcr3npkt9tA+6vu/k/0/Yej/+b7L",
    "LtfUNk/TV48OhKUTxWbvbKZf92V9n394pYEqla/S7qJOkRW7JtX1fk7ufi24zETYTJWHz08/PRw",
    "k7r2J8hIFto=",
    ""
  };

  static char newstr [1513] = "";
  newstr[0] = '\0';
  for (i = 0; i < 22; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c8_flightControlSystem(SimStruct *S)
{
  const char* newstr = sf_c8_flightControlSystem_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(2934062130U));
  ssSetChecksum1(S,(1523910107U));
  ssSetChecksum2(S,(3355611237U));
  ssSetChecksum3(S,(843727125U));
}

static void mdlRTW_c8_flightControlSystem(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c8_flightControlSystem(SimStruct *S)
{
  SFc8_flightControlSystemInstanceStruct *chartInstance;
  chartInstance = (SFc8_flightControlSystemInstanceStruct *)utMalloc(sizeof
    (SFc8_flightControlSystemInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc8_flightControlSystemInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c8_flightControlSystem;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c8_flightControlSystem;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c8_flightControlSystem;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c8_flightControlSystem;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c8_flightControlSystem;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c8_flightControlSystem;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c8_flightControlSystem;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c8_flightControlSystem;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c8_flightControlSystem;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c8_flightControlSystem;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c8_flightControlSystem;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c8_flightControlSystem;
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

  mdl_setup_runtime_resources_c8_flightControlSystem(chartInstance);
}

void c8_flightControlSystem_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c8_flightControlSystem(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c8_flightControlSystem(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c8_flightControlSystem(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c8_flightControlSystem_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
