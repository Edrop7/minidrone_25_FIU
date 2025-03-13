/* Include files */

#include "flightControlSystem_sfun.h"
#include "c11_flightControlSystem.h"
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
  uint8_T c11_y[1600]);
static void c11_b_emlrt_marshallIn(SFc11_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId,
  uint8_T c11_y[1600]);
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
    108U);
  covrtChartInitFcn(chartInstance->c11_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c11_covrtInstance, 0U, 0U, false, false,
                    false, 0U, &c11_decisionTxtStartIdx, &c11_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c11_covrtInstance, 0U, 0, NULL, NULL, 0U,
                    NULL);
  covrtEmlInitFcn(chartInstance->c11_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  1U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c11_covrtInstance, 4U, 0U, 0U,
                     "c11_flightControlSystem", 0, -1, 2678);
  covrtEmlSaturationInitFcn(chartInstance->c11_covrtInstance, 4U, 0U, 0U, 90, -1,
    123);
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
  real_T c11_img[14400];
  real_T c11_d;
  real_T c11_z;
  int32_T c11_b_k;
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
  int32_T c11_i5;
  int32_T c11_i6;
  int32_T c11_i7;
  int32_T c11_i8;
  int32_T c11_i9;
  int32_T c11_k;
  uint8_T c11_squareBWimage[14400];
  uint8_T c11_x[14400];
  uint8_T c11_b_x;
  uint8_T c11_u;
  boolean_T c11_covSaturation = false;
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
  c11_i5 = 0;
  for (c11_i6 = 0; c11_i6 < 40; c11_i6++) {
    for (c11_i8 = 0; c11_i8 < 40; c11_i8++) {
      (*chartInstance->c11_N)[c11_i8 + c11_i4] = c11_squareBWimage[(c11_i8 +
        c11_i5) + 4800];
    }

    c11_i4 += 40;
    c11_i5 += 120;
  }

  c11_i7 = 0;
  c11_i9 = 0;
  for (c11_i10 = 0; c11_i10 < 40; c11_i10++) {
    for (c11_i12 = 0; c11_i12 < 40; c11_i12++) {
      (*chartInstance->c11_E)[c11_i12 + c11_i7] = c11_squareBWimage[(c11_i12 +
        c11_i9) + 9640];
    }

    c11_i7 += 40;
    c11_i9 += 120;
  }

  c11_i11 = 0;
  c11_i13 = 0;
  for (c11_i14 = 0; c11_i14 < 40; c11_i14++) {
    for (c11_i16 = 0; c11_i16 < 40; c11_i16++) {
      (*chartInstance->c11_S)[c11_i16 + c11_i11] = c11_squareBWimage[(c11_i16 +
        c11_i13) + 4880];
    }

    c11_i11 += 40;
    c11_i13 += 120;
  }

  c11_i15 = 0;
  c11_i17 = 0;
  for (c11_i18 = 0; c11_i18 < 40; c11_i18++) {
    for (c11_i20 = 0; c11_i20 < 40; c11_i20++) {
      (*chartInstance->c11_W)[c11_i20 + c11_i15] = c11_squareBWimage[(c11_i20 +
        c11_i17) + 40];
    }

    c11_i15 += 40;
    c11_i17 += 120;
  }

  c11_i19 = 0;
  c11_i21 = 0;
  for (c11_i22 = 0; c11_i22 < 40; c11_i22++) {
    for (c11_i24 = 0; c11_i24 < 40; c11_i24++) {
      (*chartInstance->c11_NE)[c11_i24 + c11_i19] = c11_squareBWimage[(c11_i24 +
        c11_i21) + 9600];
    }

    c11_i19 += 40;
    c11_i21 += 120;
  }

  c11_i23 = 0;
  c11_i25 = 0;
  for (c11_i26 = 0; c11_i26 < 40; c11_i26++) {
    for (c11_i28 = 0; c11_i28 < 40; c11_i28++) {
      (*chartInstance->c11_NW)[c11_i28 + c11_i23] = c11_squareBWimage[c11_i28 +
        c11_i25];
    }

    c11_i23 += 40;
    c11_i25 += 120;
  }

  c11_i27 = 0;
  c11_i29 = 0;
  for (c11_i30 = 0; c11_i30 < 40; c11_i30++) {
    for (c11_i32 = 0; c11_i32 < 40; c11_i32++) {
      (*chartInstance->c11_SE)[c11_i32 + c11_i27] = c11_squareBWimage[(c11_i32 +
        c11_i29) + 9680];
    }

    c11_i27 += 40;
    c11_i29 += 120;
  }

  c11_i31 = 0;
  c11_i33 = 0;
  for (c11_i34 = 0; c11_i34 < 40; c11_i34++) {
    for (c11_i36 = 0; c11_i36 < 40; c11_i36++) {
      (*chartInstance->c11_SW)[c11_i36 + c11_i31] = c11_squareBWimage[(c11_i36 +
        c11_i33) + 80];
    }

    c11_i31 += 40;
    c11_i33 += 120;
  }

  for (c11_i35 = 0; c11_i35 < 1600; c11_i35++) {
    covrtSigUpdateFcn(chartInstance->c11_covrtInstance, 1U, (real_T)
                      (*chartInstance->c11_N)[c11_i35]);
  }

  for (c11_i37 = 0; c11_i37 < 1600; c11_i37++) {
    covrtSigUpdateFcn(chartInstance->c11_covrtInstance, 2U, (real_T)
                      (*chartInstance->c11_E)[c11_i37]);
  }

  for (c11_i38 = 0; c11_i38 < 1600; c11_i38++) {
    covrtSigUpdateFcn(chartInstance->c11_covrtInstance, 3U, (real_T)
                      (*chartInstance->c11_S)[c11_i38]);
  }

  for (c11_i39 = 0; c11_i39 < 1600; c11_i39++) {
    covrtSigUpdateFcn(chartInstance->c11_covrtInstance, 4U, (real_T)
                      (*chartInstance->c11_W)[c11_i39]);
  }

  for (c11_i40 = 0; c11_i40 < 1600; c11_i40++) {
    covrtSigUpdateFcn(chartInstance->c11_covrtInstance, 5U, (real_T)
                      (*chartInstance->c11_NE)[c11_i40]);
  }

  for (c11_i41 = 0; c11_i41 < 1600; c11_i41++) {
    covrtSigUpdateFcn(chartInstance->c11_covrtInstance, 6U, (real_T)
                      (*chartInstance->c11_NW)[c11_i41]);
  }

  for (c11_i42 = 0; c11_i42 < 1600; c11_i42++) {
    covrtSigUpdateFcn(chartInstance->c11_covrtInstance, 7U, (real_T)
                      (*chartInstance->c11_SE)[c11_i42]);
  }

  for (c11_i43 = 0; c11_i43 < 1600; c11_i43++) {
    covrtSigUpdateFcn(chartInstance->c11_covrtInstance, 8U, (real_T)
                      (*chartInstance->c11_SW)[c11_i43]);
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
    2, 40, 40), false);
  sf_mex_setcell(c11_y, 0, c11_b_y);
  c11_c_y = NULL;
  sf_mex_assign(&c11_c_y, sf_mex_create("y", *chartInstance->c11_N, 3, 0U, 1, 0U,
    2, 40, 40), false);
  sf_mex_setcell(c11_y, 1, c11_c_y);
  c11_d_y = NULL;
  sf_mex_assign(&c11_d_y, sf_mex_create("y", *chartInstance->c11_NE, 3, 0U, 1,
    0U, 2, 40, 40), false);
  sf_mex_setcell(c11_y, 2, c11_d_y);
  c11_e_y = NULL;
  sf_mex_assign(&c11_e_y, sf_mex_create("y", *chartInstance->c11_NW, 3, 0U, 1,
    0U, 2, 40, 40), false);
  sf_mex_setcell(c11_y, 3, c11_e_y);
  c11_f_y = NULL;
  sf_mex_assign(&c11_f_y, sf_mex_create("y", *chartInstance->c11_S, 3, 0U, 1, 0U,
    2, 40, 40), false);
  sf_mex_setcell(c11_y, 4, c11_f_y);
  c11_g_y = NULL;
  sf_mex_assign(&c11_g_y, sf_mex_create("y", *chartInstance->c11_SE, 3, 0U, 1,
    0U, 2, 40, 40), false);
  sf_mex_setcell(c11_y, 5, c11_g_y);
  c11_h_y = NULL;
  sf_mex_assign(&c11_h_y, sf_mex_create("y", *chartInstance->c11_SW, 3, 0U, 1,
    0U, 2, 40, 40), false);
  sf_mex_setcell(c11_y, 6, c11_h_y);
  c11_i_y = NULL;
  sf_mex_assign(&c11_i_y, sf_mex_create("y", *chartInstance->c11_W, 3, 0U, 1, 0U,
    2, 40, 40), false);
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
  uint8_T c11_uv[1600];
  uint8_T c11_uv1[1600];
  uint8_T c11_uv2[1600];
  uint8_T c11_uv3[1600];
  uint8_T c11_uv4[1600];
  uint8_T c11_uv5[1600];
  uint8_T c11_uv6[1600];
  uint8_T c11_uv7[1600];
  chartInstance->c11_doneDoubleBufferReInit = true;
  c11_u = sf_mex_dup(c11_st);
  c11_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c11_u, 0)), "E",
                       c11_uv);
  for (c11_i = 0; c11_i < 1600; c11_i++) {
    (*chartInstance->c11_E)[c11_i] = c11_uv[c11_i];
  }

  c11_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c11_u, 1)), "N",
                       c11_uv1);
  for (c11_i1 = 0; c11_i1 < 1600; c11_i1++) {
    (*chartInstance->c11_N)[c11_i1] = c11_uv1[c11_i1];
  }

  c11_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c11_u, 2)), "NE",
                       c11_uv2);
  for (c11_i2 = 0; c11_i2 < 1600; c11_i2++) {
    (*chartInstance->c11_NE)[c11_i2] = c11_uv2[c11_i2];
  }

  c11_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c11_u, 3)), "NW",
                       c11_uv3);
  for (c11_i3 = 0; c11_i3 < 1600; c11_i3++) {
    (*chartInstance->c11_NW)[c11_i3] = c11_uv3[c11_i3];
  }

  c11_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c11_u, 4)), "S",
                       c11_uv4);
  for (c11_i4 = 0; c11_i4 < 1600; c11_i4++) {
    (*chartInstance->c11_S)[c11_i4] = c11_uv4[c11_i4];
  }

  c11_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c11_u, 5)), "SE",
                       c11_uv5);
  for (c11_i5 = 0; c11_i5 < 1600; c11_i5++) {
    (*chartInstance->c11_SE)[c11_i5] = c11_uv5[c11_i5];
  }

  c11_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c11_u, 6)), "SW",
                       c11_uv6);
  for (c11_i6 = 0; c11_i6 < 1600; c11_i6++) {
    (*chartInstance->c11_SW)[c11_i6] = c11_uv6[c11_i6];
  }

  c11_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c11_u, 7)), "W",
                       c11_uv7);
  for (c11_i7 = 0; c11_i7 < 1600; c11_i7++) {
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
  uint8_T c11_y[1600])
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
  uint8_T c11_y[1600])
{
  int32_T c11_i;
  uint8_T c11_uv[1600];
  (void)chartInstance;
  sf_mex_import(c11_parentId, sf_mex_dup(c11_u), c11_uv, 1, 3, 0U, 1, 0U, 2, 40,
                40);
  for (c11_i = 0; c11_i < 1600; c11_i++) {
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
  chartInstance->c11_N = (uint8_T (*)[1600])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c11_E = (uint8_T (*)[1600])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c11_S = (uint8_T (*)[1600])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c11_W = (uint8_T (*)[1600])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c11_NE = (uint8_T (*)[1600])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 5);
  chartInstance->c11_BWimage = (real_T (*)[19200])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c11_NW = (uint8_T (*)[1600])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 6);
  chartInstance->c11_SE = (uint8_T (*)[1600])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 7);
  chartInstance->c11_SW = (uint8_T (*)[1600])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 8);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c11_flightControlSystem_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3531403735U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(219284402U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(4121029297U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1927849306U);
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
  return "sAAmNgXbiI8yMdW3UN1t3ME";
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
    "eNrdWd1u40QUnkSldNFSFYHEXlRitUJob5DoVki9QLBpftigJo1wul1xgyb2STzb8dg7P0nDA3D",
    "NLW/BO/ASvAG3XHLJGcdJgxtSjyPRgCXXmTjfnG+Ov/MzLqm0OwSPfTx/OiRkF697eFbJ7HgrG1",
    "eWztn3O+SLbNx7hxA/pFK3xTAm7ocfBzAC4ZnhkF07YoWJelTSSJWwK2gE34KKudEsFm7kmRiCB",
    "OHjBEkstZNdxSLDmbhqGeFby+oyZH7ohbHhwSlOSINzwaf/ZDcxuocWG0yCr1sAgQ5lbEZhi9PR",
    "ei9IPamH4F8pEzn7SoH2TGKXqjqGa5ZwaF6D3xZKU/SCumO9nqYa6vraWSFMeXN0HCWcUVHc1yF",
    "VHiSoDg0XSYB/z41G7xW0i/YGTFAdS0Z5M+J1q/CC2B5Hnh2UNXf2s450AwZmNGJiZL0rTQQC14",
    "86KeCrYT0eg6QjOBeOMWhX17xOH/BCl8VjsG1lWSoGTTR7KqoUNrXbHKOHVEm7LV/UKefKDduPk",
    "zMYA0/tN6imJbAz+w5gpVjQj19SaaPAMZKMYG8MZNh6LAJW/AmPc6g04XYxeRaAs8hKCgJ084L6",
    "YqK7NGmUjqM6hlHj7KygvdvYttAgh9SHwrlPUqYACae6crQbMEUH3KLRSzpdZeEZQJSGEjU0ojG",
    "J5RX62DXJ3vjKRoIbGoIRNEBDmjCaqO6XlJuCnCOFGc7K40JhxnKzi1gbP6XAPvVDCGw9YRw6oO",
    "wEqnB+xjpSw9WOmZ42QPmSJUUjySgIsJBYL/WnCVyIKxFPREvGkZd1BGt0BYBZg0qBZeEUy5Kct",
    "pB8MdYS3vStssq0ZxHVnA6sNr4GgZXFrtVWQupjVDUFtm5IaBOsx37A0i4UUxrbqWkzjYEg7Ucf",
    "Vdz60fey8fEiltqqL/FJUSzDAjul2iBt9qDPIki/8Cj2FLNhdli7n5Ebuw+q6+1W8VOlJI5siHu",
    "xhNtZ4Z8Pl3AH2dg/Ovp+yNkotFlYy5h7U3R8dIvHwwL+XsU/jyO3cDd+nl+fLuErK+ySpesmz+",
    "f5Eu7dnJ2dHG4389nrH5+c/P7zN7/sv/71xWnl/ckm9vfedtPzfjY+nPdniwo2vpXky+pB1WpRd",
    "/RqwNon005weXzRPdLHnWY636vd9Xz3cnzn48d4akxwab6UfjvI9lp2TM1sD2DnP1niu3uHPx4s",
    "6YmQP77aDP/x8/xz3LkDf4Cfmjnd3h//J6X4d7eG/6NC/Kt/418l3ea28P+gHP/LbeH/SSn9eFu",
    "jn8NS/ve2Rj+Py/HfGv08LaWfy5x+tr3Puq++7j55Fun7KiVxeyVx5F/Gbbo+1372v/77dXmA5H",
    "5/sMXrIGvyk8u+ZtvW9Rtx23d8lI2/XLxzrIeMByveemS3z4AOV939n+j7T0f/zfdZdr+gsn+af",
    "HdcE5RPFZu9spl/3ZP2ff3ilgSqVr9Luo86RFbsm1fV+Ye5+LbjCRNBPFGfHj37/Nkmde0vhxAW",
    "5w==",
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
  ssSetChecksum0(S,(941786730U));
  ssSetChecksum1(S,(2957679079U));
  ssSetChecksum2(S,(1220766222U));
  ssSetChecksum3(S,(1997734210U));
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
