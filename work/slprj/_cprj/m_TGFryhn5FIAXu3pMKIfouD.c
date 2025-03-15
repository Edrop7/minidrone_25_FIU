/* Include files */

#include "modelInterface.h"
#include "m_TGFryhn5FIAXu3pMKIfouD.h"
#include <string.h>
#include <xmmintrin.h>
#include "mwmathutil.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 1,     /* lineNo */
  "CircleIdentifier",                  /* fcnName */
  "C:\\Users\\samov\\MATLAB\\Projects\\examples\\parrotMinidroneCompetition11\\CircleIdentifier.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 1,   /* lineNo */
  "System",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\System.p"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 1,   /* lineNo */
  "SystemProp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemProp.p"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 1,   /* lineNo */
  "SystemCore",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 6,   /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 19,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 21,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 26,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 7,   /* lineNo */
  "CircleIdentifier",                  /* fcnName */
  "C:\\Users\\samov\\MATLAB\\Projects\\examples\\parrotMinidroneCompetition11\\CircleIdentifier.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 10,  /* lineNo */
  "CircleIdentifier",                  /* fcnName */
  "C:\\Users\\samov\\MATLAB\\Projects\\examples\\parrotMinidroneCompetition11\\CircleIdentifier.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 17,  /* lineNo */
  "CircleIdentifier",                  /* fcnName */
  "C:\\Users\\samov\\MATLAB\\Projects\\examples\\parrotMinidroneCompetition11\\CircleIdentifier.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 139, /* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 743, /* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 744, /* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 749, /* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 750, /* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 759, /* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 115, /* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 814, /* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 452, /* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 805, /* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 5,   /* lineNo */
  "detectCirclesHough",                /* fcnName */
  "C:\\Users\\samov\\MATLAB\\Projects\\examples\\parrotMinidroneCompetition11\\detectCirclesHough.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 8,   /* lineNo */
  "detectCirclesHough",                /* fcnName */
  "C:\\Users\\samov\\MATLAB\\Projects\\examples\\parrotMinidroneCompetition11\\detectCirclesHough.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 15,  /* lineNo */
  "detectCirclesHough",                /* fcnName */
  "C:\\Users\\samov\\MATLAB\\Projects\\examples\\parrotMinidroneCompetition11\\detectCirclesHough.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 274, /* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 19, /* lineNo */
  "ind2sub",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 439,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 474,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 463,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 93, /* lineNo */
  "validateattributes",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 74, /* lineNo */
  "randi",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\randfun\\randi.m"/* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 107,/* lineNo */
  "rand",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\randfun\\rand.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 45, /* lineNo */
  "eml_rand",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 23, /* lineNo */
  "eml_rand_mt19937ar_stateful",       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_mt19937ar_stateful.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 51, /* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 1,     /* lineNo */
  1,                                   /* colNo */
  "SystemCore",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 13,  /* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 14,  /* lineNo */
  25,                                  /* colNo */
  "warning",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pName */
};

static emlrtMCInfo d_emlrtMCI = { 14,  /* lineNo */
  9,                                   /* colNo */
  "warning",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pName */
};

static emlrtMCInfo e_emlrtMCI = { 454, /* lineNo */
  5,                                   /* colNo */
  "houghpeaks",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pName */
};

static emlrtMCInfo f_emlrtMCI = { 474, /* lineNo */
  1,                                   /* colNo */
  "houghpeaks",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pName */
};

static emlrtMCInfo g_emlrtMCI = { 14,  /* lineNo */
  37,                                  /* colNo */
  "validatefinite",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pName */
};

static emlrtMCInfo h_emlrtMCI = { 13,  /* lineNo */
  37,                                  /* colNo */
  "validateinteger",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validateinteger.m"/* pName */
};

static emlrtMCInfo i_emlrtMCI = { 14,  /* lineNo */
  37,                                  /* colNo */
  "validatepositive",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatepositive.m"/* pName */
};

static emlrtMCInfo j_emlrtMCI = { 14,  /* lineNo */
  37,                                  /* colNo */
  "validateodd",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validateodd.m"/* pName */
};

static emlrtMCInfo k_emlrtMCI = { 21,  /* lineNo */
  15,                                  /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\ind2sub.m"/* pName */
};

static emlrtMCInfo l_emlrtMCI = { 125, /* lineNo */
  13,                                  /* colNo */
  "eml_rand_mt19937ar",                /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+randfun\\eml_rand_mt19937ar.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  142,                                 /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\edge.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  143,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\edge.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { 1,   /* iFirst */
  120,                                 /* iLast */
  156,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { 1,   /* iFirst */
  160,                                 /* iLast */
  156,                                 /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  799,                                 /* lineNo */
  70,                                  /* colNo */
  "",                                  /* aName */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\edge.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  804,                                 /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\edge.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { 1,   /* iFirst */
  120,                                 /* iLast */
  348,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "hough",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\hough.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { 1,   /* iFirst */
  399,                                 /* iLast */
  301,                                 /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "hough",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\hough.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  14,                                  /* lineNo */
  39,                                  /* colNo */
  "peaks",                             /* aName */
  "detectCirclesHough",                /* fName */
  "C:\\Users\\samov\\MATLAB\\Projects\\examples\\parrotMinidroneCompetition11\\detectCirclesHough.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  14,                                  /* lineNo */
  59,                                  /* colNo */
  "peaks",                             /* aName */
  "detectCirclesHough",                /* fName */
  "C:\\Users\\samov\\MATLAB\\Projects\\examples\\parrotMinidroneCompetition11\\detectCirclesHough.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  14,                                  /* lineNo */
  36,                                  /* colNo */
  "peaks",                             /* aName */
  "detectCirclesHough",                /* fName */
  "C:\\Users\\samov\\MATLAB\\Projects\\examples\\parrotMinidroneCompetition11\\detectCirclesHough.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { 1,   /* iFirst */
  180,                                 /* iLast */
  14,                                  /* lineNo */
  50,                                  /* colNo */
  "theta",                             /* aName */
  "detectCirclesHough",                /* fName */
  "C:\\Users\\samov\\MATLAB\\Projects\\examples\\parrotMinidroneCompetition11\\detectCirclesHough.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  14,                                  /* lineNo */
  56,                                  /* colNo */
  "peaks",                             /* aName */
  "detectCirclesHough",                /* fName */
  "C:\\Users\\samov\\MATLAB\\Projects\\examples\\parrotMinidroneCompetition11\\detectCirclesHough.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { 1,   /* iFirst */
  10,                                  /* iLast */
  122,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "houghpeaks",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\houghpeaks.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { 1,   /* iFirst */
  399,                                 /* iLast */
  119,                                 /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "houghpeaks",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\houghpeaks.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRSInfo kb_emlrtRSI = { 14, /* lineNo */
  "validateodd",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validateodd.m"/* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 13, /* lineNo */
  "validateinteger",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validateinteger.m"/* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 125,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 14, /* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pathName */
};

/* Function Declarations */
static void cgxe_mdl_start(InstanceStruct_TGFryhn5FIAXu3pMKIfouD *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_TGFryhn5FIAXu3pMKIfouD
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_TGFryhn5FIAXu3pMKIfouD
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_TGFryhn5FIAXu3pMKIfouD
  *moduleInstance);
static void cgxe_mdl_derivative(InstanceStruct_TGFryhn5FIAXu3pMKIfouD
  *moduleInstance);
static void cgxe_mdl_enable(InstanceStruct_TGFryhn5FIAXu3pMKIfouD
  *moduleInstance);
static void cgxe_mdl_disable(InstanceStruct_TGFryhn5FIAXu3pMKIfouD
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_TGFryhn5FIAXu3pMKIfouD
  *moduleInstance);
static void mw__internal__system__init__fcn
  (InstanceStruct_TGFryhn5FIAXu3pMKIfouD *moduleInstance);
static void mw__internal__system__terminate__fcn
  (InstanceStruct_TGFryhn5FIAXu3pMKIfouD *moduleInstance);
static void mw__internal__call__setup(InstanceStruct_TGFryhn5FIAXu3pMKIfouD
  *moduleInstance, const emlrtStack *sp);
static void mw__internal__call__reset(InstanceStruct_TGFryhn5FIAXu3pMKIfouD
  *moduleInstance, const emlrtStack *sp);
static void mw__internal__call__step(InstanceStruct_TGFryhn5FIAXu3pMKIfouD
  *moduleInstance, const emlrtStack *sp, uint8_T b_u0[57600], real_T c_y0[10],
  real_T c_y1[5], real_T *b_y2);
static void CircleIdentifier_stepImpl(InstanceStruct_TGFryhn5FIAXu3pMKIfouD
  *moduleInstance, const emlrtStack *sp, uint8_T image[57600], real_T centers[10],
  real_T radii[5]);
static void rgb2gray(uint8_T X[57600], uint8_T b_I[19200]);
static void edge(InstanceStruct_TGFryhn5FIAXu3pMKIfouD *moduleInstance, const
                 emlrtStack *sp, uint8_T varargin_1[19200], boolean_T
                 varargout_1[19200]);
static void im2single(uint8_T img[19200], real32_T s[19200]);
static void imfilter(InstanceStruct_TGFryhn5FIAXu3pMKIfouD *moduleInstance,
                     const emlrtStack *sp, real32_T varargin_1[19200], real32_T
                     b[19200]);
static void padImage(const emlrtStack *sp, real32_T a_tmp[19200], real32_T b_a
                     [21120]);
static void b_imfilter(const emlrtStack *sp, real32_T varargin_1[19200],
  real32_T b[19200]);
static void b_padImage(const emlrtStack *sp, real32_T a_tmp[19200], real32_T
  b_a[20640]);
static void c_imfilter(const emlrtStack *sp, real32_T varargin_1[19200],
  real32_T b[19200]);
static void d_imfilter(InstanceStruct_TGFryhn5FIAXu3pMKIfouD *moduleInstance,
  const emlrtStack *sp, real32_T varargin_1[19200], real32_T b[19200]);
static void imhist(const emlrtStack *sp, real32_T varargin_1[19200], real_T
                   yout[64]);
static void warning(const emlrtStack *sp);
static void thinAndThreshold(const emlrtStack *sp, boolean_T E[19200], real32_T
  c_dx[19200], real32_T b_dy[19200], real32_T magGrad[19200], real_T
  lowThresh_data[], int32_T lowThresh_size[1], real_T highThresh_data[], int32_T
  highThresh_size[1], boolean_T b_H[19200]);
static void hough(const emlrtStack *sp, boolean_T varargin_1[19200], real_T h
                  [71820]);
static void detectCirclesHough(InstanceStruct_TGFryhn5FIAXu3pMKIfouD
  *moduleInstance, const emlrtStack *sp, boolean_T edges[19200], real_T centers
  [10], real_T radii[5]);
static void houghpeaks(InstanceStruct_TGFryhn5FIAXu3pMKIfouD *moduleInstance,
  const emlrtStack *sp, real_T varargin_1[71820], real_T peaks_data[], int32_T
  peaks_size[2]);
static void validateattributes(const emlrtStack *sp, real_T b_a[71820]);
static void b_validateattributes(const emlrtStack *sp, real_T b_a[2]);
static real_T minimum(real_T x[180]);
static real_T maximum(real_T x[180]);
static void diff(real_T x[180], real_T y[179]);
static void b_diff(real_T x[179], real_T y[178]);
static real_T sumColumnB(real_T x[178]);
static void b_maximum(real_T x[71820], real_T *ex, int32_T *idx);
static real_T b_rand(InstanceStruct_TGFryhn5FIAXu3pMKIfouD *moduleInstance,
                     const emlrtStack *sp);
static const mxArray *emlrt_marshallOut(InstanceStruct_TGFryhn5FIAXu3pMKIfouD
  *moduleInstance);
static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_TGFryhn5FIAXu3pMKIfouD *moduleInstance);
static void emlrt_marshallIn(InstanceStruct_TGFryhn5FIAXu3pMKIfouD
  *moduleInstance, const emlrtStack *sp, const mxArray *u);
static uint32_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
  const char_T *identifier);
static uint32_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static boolean_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
  const char_T *identifier);
static boolean_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
  const char_T *identifier, uint32_T y[625]);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, uint32_T y[625]);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
  const char_T *identifier, uint32_T y[2]);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, uint32_T y[2]);
static CircleIdentifier j_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *nullptr, const char_T *identifier);
static CircleIdentifier k_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *u, const emlrtMsgIdentifier *parentId);
static int32_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void cgxe_mdl_set_sim_state(InstanceStruct_TGFryhn5FIAXu3pMKIfouD
  *moduleInstance, const mxArray *st);
static const mxArray *message(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, emlrtMCInfo *location);
static const mxArray *getString(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location);
static void error(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                  emlrtMCInfo *location);
static const mxArray *feval(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, emlrtMCInfo *location);
static void b_feval(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                    emlrtMCInfo *location);
static const mxArray *b_message(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location);
static uint32_T m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static boolean_T n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, uint32_T ret[625]);
static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, uint32_T ret[2]);
static int32_T q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static void imreconstruct(boolean_T marker[19200], boolean_T mask[19200]);
static real_T eml_rand_mt19937ar(const emlrtStack *sp, uint32_T d_state[625]);
static void init_simulink_io_address(InstanceStruct_TGFryhn5FIAXu3pMKIfouD
  *moduleInstance);

/* Function Definitions */
static void cgxe_mdl_start(InstanceStruct_TGFryhn5FIAXu3pMKIfouD *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  init_simulink_io_address(moduleInstance);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__system__init__fcn(moduleInstance);
  mw__internal__call__setup(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_initialize(InstanceStruct_TGFryhn5FIAXu3pMKIfouD
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  emlrtLicenseCheckR2022a(&st, "EMLRT:runTime:MexFunctionNeedsLicense",
    "image_toolbox", 2);
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__reset(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_outputs(InstanceStruct_TGFryhn5FIAXu3pMKIfouD
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  real_T y_tmp0[10];
  real_T y_tmp1[5];
  real_T y_tmp2;
  int32_T i;
  uint8_T uv[57600];
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  memcpy(&uv[0], &(*moduleInstance->u0)[0], 57600U * sizeof(uint8_T));
  mw__internal__call__step(moduleInstance, &st, uv, y_tmp0, y_tmp1, &y_tmp2);
  memcpy(&(*moduleInstance->b_y0)[0], &y_tmp0[0], 10U * sizeof(real_T));
  for (i = 0; i < 5; i++) {
    (*moduleInstance->b_y1)[i] = y_tmp1[i];
  }

  *moduleInstance->y2 = y_tmp2;
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_update(InstanceStruct_TGFryhn5FIAXu3pMKIfouD
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_derivative(InstanceStruct_TGFryhn5FIAXu3pMKIfouD
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_enable(InstanceStruct_TGFryhn5FIAXu3pMKIfouD
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_disable(InstanceStruct_TGFryhn5FIAXu3pMKIfouD
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_TGFryhn5FIAXu3pMKIfouD
  *moduleInstance)
{
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__system__terminate__fcn(moduleInstance);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void mw__internal__system__init__fcn
  (InstanceStruct_TGFryhn5FIAXu3pMKIfouD *moduleInstance)
{
  static uint32_T uv[625] = { 5489U, 1301868182U, 2938499221U, 2950281878U,
    1875628136U, 751856242U, 944701696U, 2243192071U, 694061057U, 219885934U,
    2066767472U, 3182869408U, 485472502U, 2336857883U, 1071588843U, 3418470598U,
    951210697U, 3693558366U, 2923482051U, 1793174584U, 2982310801U, 1586906132U,
    1951078751U, 1808158765U, 1733897588U, 431328322U, 4202539044U, 530658942U,
    1714810322U, 3025256284U, 3342585396U, 1937033938U, 2640572511U, 1654299090U,
    3692403553U, 4233871309U, 3497650794U, 862629010U, 2943236032U, 2426458545U,
    1603307207U, 1133453895U, 3099196360U, 2208657629U, 2747653927U, 931059398U,
    761573964U, 3157853227U, 785880413U, 730313442U, 124945756U, 2937117055U,
    3295982469U, 1724353043U, 3021675344U, 3884886417U, 4010150098U, 4056961966U,
    699635835U, 2681338818U, 1339167484U, 720757518U, 2800161476U, 2376097373U,
    1532957371U, 3902664099U, 1238982754U, 3725394514U, 3449176889U, 3570962471U,
    4287636090U, 4087307012U, 3603343627U, 202242161U, 2995682783U, 1620962684U,
    3704723357U, 371613603U, 2814834333U, 2111005706U, 624778151U, 2094172212U,
    4284947003U, 1211977835U, 991917094U, 1570449747U, 2962370480U, 1259410321U,
    170182696U, 146300961U, 2836829791U, 619452428U, 2723670296U, 1881399711U,
    1161269684U, 1675188680U, 4132175277U, 780088327U, 3409462821U, 1036518241U,
    1834958505U, 3048448173U, 161811569U, 618488316U, 44795092U, 3918322701U,
    1924681712U, 3239478144U, 383254043U, 4042306580U, 2146983041U, 3992780527U,
    3518029708U, 3545545436U, 3901231469U, 1896136409U, 2028528556U, 2339662006U,
    501326714U, 2060962201U, 2502746480U, 561575027U, 581893337U, 3393774360U,
    1778912547U, 3626131687U, 2175155826U, 319853231U, 986875531U, 819755096U,
    2915734330U, 2688355739U, 3482074849U, 2736559U, 2296975761U, 1029741190U,
    2876812646U, 690154749U, 579200347U, 4027461746U, 1285330465U, 2701024045U,
    4117700889U, 759495121U, 3332270341U, 2313004527U, 2277067795U, 4131855432U,
    2722057515U, 1264804546U, 3848622725U, 2211267957U, 4100593547U, 959123777U,
    2130745407U, 3194437393U, 486673947U, 1377371204U, 17472727U, 352317554U,
    3955548058U, 159652094U, 1232063192U, 3835177280U, 49423123U, 3083993636U,
    733092U, 2120519771U, 2573409834U, 1112952433U, 3239502554U, 761045320U,
    1087580692U, 2540165110U, 641058802U, 1792435497U, 2261799288U, 1579184083U,
    627146892U, 2165744623U, 2200142389U, 2167590760U, 2381418376U, 1793358889U,
    3081659520U, 1663384067U, 2009658756U, 2689600308U, 739136266U, 2304581039U,
    3529067263U, 591360555U, 525209271U, 3131882996U, 294230224U, 2076220115U,
    3113580446U, 1245621585U, 1386885462U, 3203270426U, 123512128U, 12350217U,
    354956375U, 4282398238U, 3356876605U, 3888857667U, 157639694U, 2616064085U,
    1563068963U, 2762125883U, 4045394511U, 4180452559U, 3294769488U, 1684529556U,
    1002945951U, 3181438866U, 22506664U, 691783457U, 2685221343U, 171579916U,
    3878728600U, 2475806724U, 2030324028U, 3331164912U, 1708711359U, 1970023127U,
    2859691344U, 2588476477U, 2748146879U, 136111222U, 2967685492U, 909517429U,
    2835297809U, 3206906216U, 3186870716U, 341264097U, 2542035121U, 3353277068U,
    548223577U, 3170936588U, 1678403446U, 297435620U, 2337555430U, 466603495U,
    1132321815U, 1208589219U, 696392160U, 894244439U, 2562678859U, 470224582U,
    3306867480U, 201364898U, 2075966438U, 1767227936U, 2929737987U, 3674877796U,
    2654196643U, 3692734598U, 3528895099U, 2796780123U, 3048728353U, 842329300U,
    191554730U, 2922459673U, 3489020079U, 3979110629U, 1022523848U, 2202932467U,
    3583655201U, 3565113719U, 587085778U, 4176046313U, 3013713762U, 950944241U,
    396426791U, 3784844662U, 3477431613U, 3594592395U, 2782043838U, 3392093507U,
    3106564952U, 2829419931U, 1358665591U, 2206918825U, 3170783123U, 31522386U,
    2988194168U, 1782249537U, 1105080928U, 843500134U, 1225290080U, 1521001832U,
    3605886097U, 2802786495U, 2728923319U, 3996284304U, 903417639U, 1171249804U,
    1020374987U, 2824535874U, 423621996U, 1988534473U, 2493544470U, 1008604435U,
    1756003503U, 1488867287U, 1386808992U, 732088248U, 1780630732U, 2482101014U,
    976561178U, 1543448953U, 2602866064U, 2021139923U, 1952599828U, 2360242564U,
    2117959962U, 2753061860U, 2388623612U, 4138193781U, 2962920654U, 2284970429U,
    766920861U, 3457264692U, 2879611383U, 815055854U, 2332929068U, 1254853997U,
    3740375268U, 3799380844U, 4091048725U, 2006331129U, 1982546212U, 686850534U,
    1907447564U, 2682801776U, 2780821066U, 998290361U, 1342433871U, 4195430425U,
    607905174U, 3902331779U, 2454067926U, 1708133115U, 1170874362U, 2008609376U,
    3260320415U, 2211196135U, 433538229U, 2728786374U, 2189520818U, 262554063U,
    1182318347U, 3710237267U, 1221022450U, 715966018U, 2417068910U, 2591870721U,
    2870691989U, 3418190842U, 4238214053U, 1540704231U, 1575580968U, 2095917976U,
    4078310857U, 2313532447U, 2110690783U, 4056346629U, 4061784526U, 1123218514U,
    551538993U, 597148360U, 4120175196U, 3581618160U, 3181170517U, 422862282U,
    3227524138U, 1713114790U, 662317149U, 1230418732U, 928171837U, 1324564878U,
    1928816105U, 1786535431U, 2878099422U, 3290185549U, 539474248U, 1657512683U,
    552370646U, 1671741683U, 3655312128U, 1552739510U, 2605208763U, 1441755014U,
    181878989U, 3124053868U, 1447103986U, 3183906156U, 1728556020U, 3502241336U,
    3055466967U, 1013272474U, 818402132U, 1715099063U, 2900113506U, 397254517U,
    4194863039U, 1009068739U, 232864647U, 2540223708U, 2608288560U, 2415367765U,
    478404847U, 3455100648U, 3182600021U, 2115988978U, 434269567U, 4117179324U,
    3461774077U, 887256537U, 3545801025U, 286388911U, 3451742129U, 1981164769U,
    786667016U, 3310123729U, 3097811076U, 2224235657U, 2959658883U, 3370969234U,
    2514770915U, 3345656436U, 2677010851U, 2206236470U, 271648054U, 2342188545U,
    4292848611U, 3646533909U, 3754009956U, 3803931226U, 4160647125U, 1477814055U,
    4043852216U, 1876372354U, 3133294443U, 3871104810U, 3177020907U, 2074304428U,
    3479393793U, 759562891U, 164128153U, 1839069216U, 2114162633U, 3989947309U,
    3611054956U, 1333547922U, 835429831U, 494987340U, 171987910U, 1252001001U,
    370809172U, 3508925425U, 2535703112U, 1276855041U, 1922855120U, 835673414U,
    3030664304U, 613287117U, 171219893U, 3423096126U, 3376881639U, 2287770315U,
    1658692645U, 1262815245U, 3957234326U, 1168096164U, 2968737525U, 2655813712U,
    2132313144U, 3976047964U, 326516571U, 353088456U, 3679188938U, 3205649712U,
    2654036126U, 1249024881U, 880166166U, 691800469U, 2229503665U, 1673458056U,
    4032208375U, 1851778863U, 2563757330U, 376742205U, 1794655231U, 340247333U,
    1505873033U, 396524441U, 879666767U, 3335579166U, 3260764261U, 3335999539U,
    506221798U, 4214658741U, 975887814U, 2080536343U, 3360539560U, 571586418U,
    138896374U, 4234352651U, 2737620262U, 3928362291U, 1516365296U, 38056726U,
    3599462320U, 3585007266U, 3850961033U, 471667319U, 1536883193U, 2310166751U,
    1861637689U, 2530999841U, 4139843801U, 2710569485U, 827578615U, 2012334720U,
    2907369459U, 3029312804U, 2820112398U, 1965028045U, 35518606U, 2478379033U,
    643747771U, 1924139484U, 4123405127U, 3811735531U, 3429660832U, 3285177704U,
    1948416081U, 1311525291U, 1183517742U, 1739192232U, 3979815115U, 2567840007U,
    4116821529U, 213304419U, 4125718577U, 1473064925U, 2442436592U, 1893310111U,
    4195361916U, 3747569474U, 828465101U, 2991227658U, 750582866U, 1205170309U,
    1409813056U, 678418130U, 1171531016U, 3821236156U, 354504587U, 4202874632U,
    3882511497U, 1893248677U, 1903078632U, 26340130U, 2069166240U, 3657122492U,
    3725758099U, 831344905U, 811453383U, 3447711422U, 2434543565U, 4166886888U,
    3358210805U, 4142984013U, 2988152326U, 3527824853U, 982082992U, 2809155763U,
    190157081U, 3340214818U, 2365432395U, 2548636180U, 2894533366U, 3474657421U,
    2372634704U, 2845748389U, 43024175U, 2774226648U, 1987702864U, 3186502468U,
    453610222U, 4204736567U, 1392892630U, 2471323686U, 2470534280U, 3541393095U,
    4269885866U, 3909911300U, 759132955U, 1482612480U, 667715263U, 1795580598U,
    2337923983U, 3390586366U, 581426223U, 1515718634U, 476374295U, 705213300U,
    363062054U, 2084697697U, 2407503428U, 2292957699U, 2426213835U, 2199989172U,
    1987356470U, 4026755612U, 2147252133U, 270400031U, 1367820199U, 2369854699U,
    2844269403U, 79981964U, 624U };

  emlrtStack st;
  int32_T i;

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX,
                  "C:\\Users\\samov\\MATLAB\\Projects\\examples\\parrotMinidroneCompetition11\\CircleIdentifier.m",
                  0U, 2U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 1U,
               "CircleIdentifier_stepImpl", 156, -1, 1145);
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 0U,
               "CircleIdentifier_CircleIdentifier", 9, -1, 25);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 0U, 263,
                      -1, 1133);

  /* Initialize If Information */
  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX,
                  "C:\\Users\\samov\\MATLAB\\Projects\\examples\\parrotMinidroneCompetition11\\detectCirclesHough.m",
                  1U, 1U, 2U, 0U, 0U, 0U, 0U, 1U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 1U, 0U,
               "detectCirclesHough", 0, -1, 650);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 1U, 1U, 511,
                      -1, 616);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 1U, 0U, 193,
                      -1, 456);

  /* Initialize If Information */
  /* Initialize MCDC Information */
  /* Initialize For Information */
  covrtForInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 1U, 0U, 482, 502,
               646);

  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 1U);
  st.site = NULL;
  moduleInstance->method = 7U;
  moduleInstance->method_not_empty = true;
  st.site = NULL;
  moduleInstance->state = 1144108930U;
  moduleInstance->state_not_empty = true;
  st.site = NULL;
  for (i = 0; i < 2; i++) {
    moduleInstance->b_state[i] = 158852560U * (uint32_T)i + 362436069U;
  }

  moduleInstance->b_state_not_empty = true;
  st.site = NULL;
  memcpy(&moduleInstance->c_state[0], &uv[0], 625U * sizeof(uint32_T));
  moduleInstance->c_state_not_empty = true;
}

static void mw__internal__system__terminate__fcn
  (InstanceStruct_TGFryhn5FIAXu3pMKIfouD *moduleInstance)
{
  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);
}

static void mw__internal__call__setup(InstanceStruct_TGFryhn5FIAXu3pMKIfouD
  *moduleInstance, const emlrtStack *sp)
{
  static const int32_T iv[2] = { 1, 51 };

  static const int32_T iv1[2] = { 1, 51 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T b_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static char_T d_u[5] = { 's', 'e', 't', 'u', 'p' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T u[51];
  char_T c_u[5];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &e_emlrtRSI;
    covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0);
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &d_emlrtRSI;
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &f_emlrtRSI;
  if (moduleInstance->sysobj.isInitialized != 0) {
    for (i = 0; i < 51; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 51, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 51; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 51, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      c_u[i] = d_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 5, m, &c_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &d_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  moduleInstance->sysobj.isInitialized = 1;
}

static void mw__internal__call__reset(InstanceStruct_TGFryhn5FIAXu3pMKIfouD
  *moduleInstance, const emlrtStack *sp)
{
  static const int32_T iv[2] = { 1, 45 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T b_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T d_u[5] = { 'r', 'e', 's', 'e', 't' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T u[45];
  char_T c_u[5];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &e_emlrtRSI;
    covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0);
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &d_emlrtRSI;
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &g_emlrtRSI;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      c_u[i] = d_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 5, m, &c_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &d_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }
}

static void mw__internal__call__step(InstanceStruct_TGFryhn5FIAXu3pMKIfouD
  *moduleInstance, const emlrtStack *sp, uint8_T b_u0[57600], real_T c_y0[10],
  real_T c_y1[5], real_T *b_y2)
{
  static const int32_T iv[2] = { 1, 51 };

  static const int32_T iv1[2] = { 1, 51 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T b_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static char_T d_u[5] = { 's', 'e', 't', 'u', 'p' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  real_T varargout_2[5];
  int32_T i;
  char_T u[51];
  char_T c_u[5];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &e_emlrtRSI;
    covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0);
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &d_emlrtRSI;
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &h_emlrtRSI;
  if (moduleInstance->sysobj.isInitialized != 1) {
    b_st.site = &d_emlrtRSI;
    c_st.site = &d_emlrtRSI;
    if (moduleInstance->sysobj.isInitialized != 0) {
      for (i = 0; i < 51; i++) {
        u[i] = b_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(&c_st, 51, m, &u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 51; i++) {
        u[i] = b_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(&c_st, 51, m, &u[0]);
      emlrtAssign(&b_y, m);
      for (i = 0; i < 5; i++) {
        c_u[i] = d_u[i];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(&c_st, 5, m, &c_u[0]);
      emlrtAssign(&c_y, m);
      d_st.site = &d_emlrtRSI;
      error(&d_st, y, getString(&d_st, message(&d_st, b_y, c_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
    }

    moduleInstance->sysobj.isInitialized = 1;
  }

  b_st.site = &d_emlrtRSI;
  CircleIdentifier_stepImpl(moduleInstance, &b_st, b_u0, c_y0, varargout_2);
  for (i = 0; i < 5; i++) {
    c_y1[i] = varargout_2[i];
  }

  *b_y2 = 5.0;
}

static void CircleIdentifier_stepImpl(InstanceStruct_TGFryhn5FIAXu3pMKIfouD
  *moduleInstance, const emlrtStack *sp, uint8_T image[57600], real_T centers[10],
  real_T radii[5])
{
  emlrtStack st;
  uint8_T grayImg[19200];
  boolean_T edges[19200];
  st.prev = sp;
  st.tls = sp->tls;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 1);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0);

  /*  Convert to grayscale */
  st.site = &i_emlrtRSI;
  rgb2gray(image, grayImg);

  /*  Apply edge detection */
  st.site = &j_emlrtRSI;
  edge(moduleInstance, &st, grayImg, edges);

  /*  Define radius range */
  /*  Custom Hough Transform-based circle detection */
  st.site = &k_emlrtRSI;
  detectCirclesHough(moduleInstance, &st, edges, centers, radii);

  /*  Ensure fixed-size outputs for Simulink compatibility */
  /*  Adjust based on expected max circles */
  /*  Store only detected circles (ensuring fixed-size arrays) */
}

static void rgb2gray(uint8_T X[57600], uint8_T b_I[19200])
{
  rgb2gray_tbb_uint8(&X[0], 19200.0, &b_I[0], true);
}

static void edge(InstanceStruct_TGFryhn5FIAXu3pMKIfouD *moduleInstance, const
                 emlrtStack *sp, uint8_T varargin_1[19200], boolean_T
                 varargout_1[19200])
{
  __m128 r;
  emlrtStack st;
  real_T counts[64];
  real_T highThresh_data[1];
  real_T lowThresh_data[1];
  real_T sum;
  int32_T highThresh_size[1];
  int32_T lowThresh_size[1];
  int32_T idx;
  real32_T magmax;
  int8_T b_idx;
  boolean_T bv[19200];
  st.prev = sp;
  st.tls = sp->tls;
  im2single(varargin_1, moduleInstance->a);
  st.site = &m_emlrtRSI;
  imfilter(moduleInstance, &st, moduleInstance->a, moduleInstance->dx);
  for (idx = 0; idx < 160; idx++) {
    memcpy(&moduleInstance->b_dx[idx * 120], &moduleInstance->dx[idx * 120],
           120U * sizeof(real32_T));
  }

  st.site = &n_emlrtRSI;
  b_imfilter(&st, moduleInstance->b_dx, moduleInstance->dx);
  st.site = &o_emlrtRSI;
  c_imfilter(&st, moduleInstance->a, moduleInstance->dy);
  for (idx = 0; idx < 160; idx++) {
    memcpy(&moduleInstance->b_dx[idx * 120], &moduleInstance->dy[idx * 120],
           120U * sizeof(real32_T));
  }

  st.site = &p_emlrtRSI;
  d_imfilter(moduleInstance, &st, moduleInstance->b_dx, moduleInstance->dy);
  moduleInstance->a[0] = muSingleScalarHypot(moduleInstance->dx[0],
    moduleInstance->dy[0]);
  magmax = muSingleScalarHypot(moduleInstance->dx[0], moduleInstance->dy[0]);
  for (idx = 0; idx < 19199; idx++) {
    moduleInstance->a[idx + 1] = muSingleScalarHypot(moduleInstance->dx[idx + 1],
      moduleInstance->dy[idx + 1]);
    magmax = muSingleScalarMax(moduleInstance->a[idx + 1], magmax);
  }

  if (magmax > 0.0F) {
    for (idx = 0; idx <= 19196; idx += 4) {
      r = _mm_loadu_ps(&moduleInstance->a[idx]);
      _mm_storeu_ps(&moduleInstance->a[idx], _mm_div_ps(r, _mm_set1_ps(magmax)));
    }
  }

  st.site = &q_emlrtRSI;
  imhist(&st, moduleInstance->a, counts);
  sum = 0.0;
  b_idx = 1;
  while ((!(sum > 13440.0)) && (b_idx <= 64)) {
    sum += counts[b_idx - 1];
    b_idx++;
  }

  if ((b_idx > 64) && (!(sum > 13440.0))) {
    highThresh_size[0] = 0;
    lowThresh_size[0] = 0;
  } else {
    highThresh_size[0] = 1;
    highThresh_data[0] = ((real_T)b_idx - 1.0) / 64.0;
    lowThresh_size[0] = 1;
    lowThresh_data[0] = 0.4 * (((real_T)b_idx - 1.0) / 64.0);
  }

  for (idx = 0; idx < 19200; idx++) {
    bv[idx] = false;
  }

  st.site = &l_emlrtRSI;
  thinAndThreshold(&st, bv, moduleInstance->dx, moduleInstance->dy,
                   moduleInstance->a, lowThresh_data, lowThresh_size,
                   highThresh_data, highThresh_size, varargout_1);
  emlrtDynamicBoundsCheckR2012b(1, 1, lowThresh_size[0], &emlrtBCI,
    (emlrtConstCTX)sp);
  emlrtDynamicBoundsCheckR2012b(1, 1, highThresh_size[0], &b_emlrtBCI,
    (emlrtConstCTX)sp);
}

static void im2single(uint8_T img[19200], real32_T s[19200])
{
  int32_T i;
  for (i = 0; i < 19200; i++) {
    s[i] = (real32_T)img[i] / 255.0F;
  }
}

static void imfilter(InstanceStruct_TGFryhn5FIAXu3pMKIfouD *moduleInstance,
                     const emlrtStack *sp, real32_T varargin_1[19200], real32_T
                     b[19200])
{
  static real_T kernel[13] = { 3.4813359214923059E-5, 0.00054457256285105158,
    0.0051667606200595222, 0.029732654490475543, 0.10377716120747747,
    0.21969625200024598, 0.28209557151935094, 0.21969625200024598,
    0.10377716120747747, 0.029732654490475543, 0.0051667606200595222,
    0.00054457256285105158, 3.4813359214923059E-5 };

  emlrtStack st;
  real_T connDimsT[2];
  real_T outSizeT[2];
  real_T padSizeT[2];
  real_T startT[2];
  int32_T i;
  boolean_T conn[13];
  boolean_T tooBig;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &r_emlrtRSI;
  padImage(&st, varargin_1, moduleInstance->aTmp);
  tooBig = true;
  for (i = 0; i < 2; i++) {
    tooBig = false;
  }

  if (!tooBig) {
    for (i = 0; i < 2; i++) {
      padSizeT[i] = 28.0 * (real_T)i + 132.0;
      outSizeT[i] = 40.0 * (real_T)i + 120.0;
      connDimsT[i] = -12.0 * (real_T)i + 13.0;
    }

    ippfilter_real32(&moduleInstance->aTmp[0], &b[0], &outSizeT[0], 2.0,
                     &padSizeT[0], &kernel[0], &connDimsT[0], true);
  } else {
    for (i = 0; i < 13; i++) {
      conn[i] = true;
    }

    for (i = 0; i < 2; i++) {
      padSizeT[i] = 28.0 * (real_T)i + 132.0;
      outSizeT[i] = 40.0 * (real_T)i + 120.0;
      connDimsT[i] = -12.0 * (real_T)i + 13.0;
      startT[i] = -6.0 * (real_T)i + 6.0;
    }

    imfilter_real32(&moduleInstance->aTmp[0], &b[0], 2.0, &outSizeT[0], 2.0,
                    &padSizeT[0], &kernel[0], 13.0, &conn[0], 2.0, &connDimsT[0],
                    &startT[0], 2.0, true, true);
  }
}

static void padImage(const emlrtStack *sp, real32_T a_tmp[19200], real32_T b_a
                     [21120])
{
  static uint8_T idxA[320] = { 1U, 1U, 1U, 1U, 1U, 1U, 1U, 2U, 3U, 4U, 5U, 6U,
    7U, 8U, 9U, 10U, 11U, 12U, 13U, 14U, 15U, 16U, 17U, 18U, 19U, 20U, 21U, 22U,
    23U, 24U, 25U, 26U, 27U, 28U, 29U, 30U, 31U, 32U, 33U, 34U, 35U, 36U, 37U,
    38U, 39U, 40U, 41U, 42U, 43U, 44U, 45U, 46U, 47U, 48U, 49U, 50U, 51U, 52U,
    53U, 54U, 55U, 56U, 57U, 58U, 59U, 60U, 61U, 62U, 63U, 64U, 65U, 66U, 67U,
    68U, 69U, 70U, 71U, 72U, 73U, 74U, 75U, 76U, 77U, 78U, 79U, 80U, 81U, 82U,
    83U, 84U, 85U, 86U, 87U, 88U, 89U, 90U, 91U, 92U, 93U, 94U, 95U, 96U, 97U,
    98U, 99U, 100U, 101U, 102U, 103U, 104U, 105U, 106U, 107U, 108U, 109U, 110U,
    111U, 112U, 113U, 114U, 115U, 116U, 117U, 118U, 119U, 120U, 120U, 120U, 120U,
    120U, 120U, 120U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 1U, 2U, 3U, 4U, 5U, 6U,
    7U, 8U, 9U, 10U, 11U, 12U, 13U, 14U, 15U, 16U, 17U, 18U, 19U, 20U, 21U, 22U,
    23U, 24U, 25U, 26U, 27U, 28U, 29U, 30U, 31U, 32U, 33U, 34U, 35U, 36U, 37U,
    38U, 39U, 40U, 41U, 42U, 43U, 44U, 45U, 46U, 47U, 48U, 49U, 50U, 51U, 52U,
    53U, 54U, 55U, 56U, 57U, 58U, 59U, 60U, 61U, 62U, 63U, 64U, 65U, 66U, 67U,
    68U, 69U, 70U, 71U, 72U, 73U, 74U, 75U, 76U, 77U, 78U, 79U, 80U, 81U, 82U,
    83U, 84U, 85U, 86U, 87U, 88U, 89U, 90U, 91U, 92U, 93U, 94U, 95U, 96U, 97U,
    98U, 99U, 100U, 101U, 102U, 103U, 104U, 105U, 106U, 107U, 108U, 109U, 110U,
    111U, 112U, 113U, 114U, 115U, 116U, 117U, 118U, 119U, 120U, 121U, 122U, 123U,
    124U, 125U, 126U, 127U, 128U, 129U, 130U, 131U, 132U, 133U, 134U, 135U, 136U,
    137U, 138U, 139U, 140U, 141U, 142U, 143U, 144U, 145U, 146U, 147U, 148U, 149U,
    150U, 151U, 152U, 153U, 154U, 155U, 156U, 157U, 158U, 159U, 160U };

  emlrtStack st;
  int32_T i;
  int32_T j;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &s_emlrtRSI;
  for (j = 0; j < 160; j++) {
    for (i = 0; i < 132; i++) {
      b_a[i + 132 * j] = a_tmp[(emlrtDynamicBoundsCheckR2012b((int32_T)idxA[i],
        1, 120, &c_emlrtBCI, &st) + 120 * (emlrtDynamicBoundsCheckR2012b
        ((int32_T)idxA[j + 160], 1, 160, &d_emlrtBCI, &st) - 1)) - 1];
    }
  }
}

static void b_imfilter(const emlrtStack *sp, real32_T varargin_1[19200],
  real32_T b[19200])
{
  static real_T b_kernel[13] = { 0.0020299751839417137, 0.0102182810143517,
    0.058116735860084034, 0.19634433732941292, 0.37823877042972087,
    0.35505190018248872, 0.0, -0.35505190018248872, -0.37823877042972087,
    -0.19634433732941292, -0.058116735860084034, -0.0102182810143517,
    -0.0020299751839417137 };

  static real_T nonZeroKernel[12] = { 0.0020299751839417137, 0.0102182810143517,
    0.058116735860084034, 0.19634433732941292, 0.37823877042972087,
    0.35505190018248872, -0.35505190018248872, -0.37823877042972087,
    -0.19634433732941292, -0.058116735860084034, -0.0102182810143517,
    -0.0020299751839417137 };

  static boolean_T b_conn[13] = { true, true, true, true, true, true, false,
    true, true, true, true, true, true };

  emlrtStack st;
  real_T kernel[13];
  real_T connDimsT[2];
  real_T outSizeT[2];
  real_T padSizeT[2];
  real_T startT[2];
  int32_T i;
  real32_T c_aTmp[20640];
  boolean_T conn[13];
  boolean_T tooBig;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &r_emlrtRSI;
  b_padImage(&st, varargin_1, c_aTmp);
  tooBig = true;
  for (i = 0; i < 2; i++) {
    tooBig = false;
  }

  if (!tooBig) {
    memcpy(&kernel[0], &b_kernel[0], 13U * sizeof(real_T));
    for (i = 0; i < 2; i++) {
      padSizeT[i] = 52.0 * (real_T)i + 120.0;
      outSizeT[i] = 40.0 * (real_T)i + 120.0;
      connDimsT[i] = 12.0 * (real_T)i + 1.0;
    }

    ippfilter_real32(&c_aTmp[0], &b[0], &outSizeT[0], 2.0, &padSizeT[0],
                     &kernel[0], &connDimsT[0], true);
  } else {
    for (i = 0; i < 13; i++) {
      conn[i] = b_conn[i];
    }

    for (i = 0; i < 2; i++) {
      padSizeT[i] = 52.0 * (real_T)i + 120.0;
      outSizeT[i] = 40.0 * (real_T)i + 120.0;
      connDimsT[i] = 12.0 * (real_T)i + 1.0;
      startT[i] = 6.0 * (real_T)i;
    }

    imfilter_real32(&c_aTmp[0], &b[0], 2.0, &outSizeT[0], 2.0, &padSizeT[0],
                    &nonZeroKernel[0], 12.0, &conn[0], 2.0, &connDimsT[0],
                    &startT[0], 2.0, true, true);
  }
}

static void b_padImage(const emlrtStack *sp, real32_T a_tmp[19200], real32_T
  b_a[20640])
{
  static uint8_T idxA[344] = { 1U, 2U, 3U, 4U, 5U, 6U, 7U, 8U, 9U, 10U, 11U, 12U,
    13U, 14U, 15U, 16U, 17U, 18U, 19U, 20U, 21U, 22U, 23U, 24U, 25U, 26U, 27U,
    28U, 29U, 30U, 31U, 32U, 33U, 34U, 35U, 36U, 37U, 38U, 39U, 40U, 41U, 42U,
    43U, 44U, 45U, 46U, 47U, 48U, 49U, 50U, 51U, 52U, 53U, 54U, 55U, 56U, 57U,
    58U, 59U, 60U, 61U, 62U, 63U, 64U, 65U, 66U, 67U, 68U, 69U, 70U, 71U, 72U,
    73U, 74U, 75U, 76U, 77U, 78U, 79U, 80U, 81U, 82U, 83U, 84U, 85U, 86U, 87U,
    88U, 89U, 90U, 91U, 92U, 93U, 94U, 95U, 96U, 97U, 98U, 99U, 100U, 101U, 102U,
    103U, 104U, 105U, 106U, 107U, 108U, 109U, 110U, 111U, 112U, 113U, 114U, 115U,
    116U, 117U, 118U, 119U, 120U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 2U, 3U, 4U, 5U, 6U, 7U, 8U, 9U, 10U, 11U,
    12U, 13U, 14U, 15U, 16U, 17U, 18U, 19U, 20U, 21U, 22U, 23U, 24U, 25U, 26U,
    27U, 28U, 29U, 30U, 31U, 32U, 33U, 34U, 35U, 36U, 37U, 38U, 39U, 40U, 41U,
    42U, 43U, 44U, 45U, 46U, 47U, 48U, 49U, 50U, 51U, 52U, 53U, 54U, 55U, 56U,
    57U, 58U, 59U, 60U, 61U, 62U, 63U, 64U, 65U, 66U, 67U, 68U, 69U, 70U, 71U,
    72U, 73U, 74U, 75U, 76U, 77U, 78U, 79U, 80U, 81U, 82U, 83U, 84U, 85U, 86U,
    87U, 88U, 89U, 90U, 91U, 92U, 93U, 94U, 95U, 96U, 97U, 98U, 99U, 100U, 101U,
    102U, 103U, 104U, 105U, 106U, 107U, 108U, 109U, 110U, 111U, 112U, 113U, 114U,
    115U, 116U, 117U, 118U, 119U, 120U, 121U, 122U, 123U, 124U, 125U, 126U, 127U,
    128U, 129U, 130U, 131U, 132U, 133U, 134U, 135U, 136U, 137U, 138U, 139U, 140U,
    141U, 142U, 143U, 144U, 145U, 146U, 147U, 148U, 149U, 150U, 151U, 152U, 153U,
    154U, 155U, 156U, 157U, 158U, 159U, 160U, 160U, 160U, 160U, 160U, 160U, 160U
  };

  emlrtStack st;
  int32_T i;
  int32_T j;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &s_emlrtRSI;
  for (j = 0; j < 172; j++) {
    for (i = 0; i < 120; i++) {
      b_a[i + 120 * j] = a_tmp[(emlrtDynamicBoundsCheckR2012b((int32_T)idxA[i],
        1, 120, &c_emlrtBCI, &st) + 120 * (emlrtDynamicBoundsCheckR2012b
        ((int32_T)idxA[j + 172], 1, 160, &d_emlrtBCI, &st) - 1)) - 1];
    }
  }
}

static void c_imfilter(const emlrtStack *sp, real32_T varargin_1[19200],
  real32_T b[19200])
{
  static real_T b_kernel[13] = { 3.4813359214923059E-5, 0.00054457256285105158,
    0.0051667606200595222, 0.029732654490475543, 0.10377716120747747,
    0.21969625200024598, 0.28209557151935094, 0.21969625200024598,
    0.10377716120747747, 0.029732654490475543, 0.0051667606200595222,
    0.00054457256285105158, 3.4813359214923059E-5 };

  static real_T nonZeroKernel[13] = { 3.4813359214923059E-5,
    0.00054457256285105158, 0.0051667606200595222, 0.029732654490475543,
    0.10377716120747747, 0.21969625200024598, 0.28209557151935094,
    0.21969625200024598, 0.10377716120747747, 0.029732654490475543,
    0.0051667606200595222, 0.00054457256285105158, 3.4813359214923059E-5 };

  emlrtStack st;
  real_T kernel[13];
  real_T connDimsT[2];
  real_T outSizeT[2];
  real_T padSizeT[2];
  real_T startT[2];
  int32_T i;
  real32_T c_aTmp[20640];
  boolean_T conn[13];
  boolean_T tooBig;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &r_emlrtRSI;
  b_padImage(&st, varargin_1, c_aTmp);
  tooBig = true;
  for (i = 0; i < 2; i++) {
    tooBig = false;
  }

  if (!tooBig) {
    memcpy(&kernel[0], &b_kernel[0], 13U * sizeof(real_T));
    for (i = 0; i < 2; i++) {
      padSizeT[i] = 52.0 * (real_T)i + 120.0;
      outSizeT[i] = 40.0 * (real_T)i + 120.0;
      connDimsT[i] = 12.0 * (real_T)i + 1.0;
    }

    ippfilter_real32(&c_aTmp[0], &b[0], &outSizeT[0], 2.0, &padSizeT[0],
                     &kernel[0], &connDimsT[0], true);
  } else {
    for (i = 0; i < 13; i++) {
      conn[i] = true;
    }

    for (i = 0; i < 2; i++) {
      padSizeT[i] = 52.0 * (real_T)i + 120.0;
      outSizeT[i] = 40.0 * (real_T)i + 120.0;
      connDimsT[i] = 12.0 * (real_T)i + 1.0;
      startT[i] = 6.0 * (real_T)i;
    }

    imfilter_real32(&c_aTmp[0], &b[0], 2.0, &outSizeT[0], 2.0, &padSizeT[0],
                    &nonZeroKernel[0], 13.0, &conn[0], 2.0, &connDimsT[0],
                    &startT[0], 2.0, true, true);
  }
}

static void d_imfilter(InstanceStruct_TGFryhn5FIAXu3pMKIfouD *moduleInstance,
  const emlrtStack *sp, real32_T varargin_1[19200], real32_T b[19200])
{
  static real_T kernel[13] = { 0.0020299751839417137, 0.0102182810143517,
    0.058116735860084034, 0.19634433732941292, 0.37823877042972087,
    0.35505190018248872, 0.0, -0.35505190018248872, -0.37823877042972087,
    -0.19634433732941292, -0.058116735860084034, -0.0102182810143517,
    -0.0020299751839417137 };

  static real_T nonZeroKernel[12] = { 0.0020299751839417137, 0.0102182810143517,
    0.058116735860084034, 0.19634433732941292, 0.37823877042972087,
    0.35505190018248872, -0.35505190018248872, -0.37823877042972087,
    -0.19634433732941292, -0.058116735860084034, -0.0102182810143517,
    -0.0020299751839417137 };

  static boolean_T conn[13] = { true, true, true, true, true, true, false, true,
    true, true, true, true, true };

  emlrtStack st;
  real_T connDimsT[2];
  real_T outSizeT[2];
  real_T padSizeT[2];
  real_T startT[2];
  int32_T i;
  boolean_T tooBig;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &r_emlrtRSI;
  padImage(&st, varargin_1, moduleInstance->b_aTmp);
  tooBig = true;
  for (i = 0; i < 2; i++) {
    tooBig = false;
  }

  if (!tooBig) {
    for (i = 0; i < 2; i++) {
      padSizeT[i] = 28.0 * (real_T)i + 132.0;
      outSizeT[i] = 40.0 * (real_T)i + 120.0;
      connDimsT[i] = -12.0 * (real_T)i + 13.0;
    }

    ippfilter_real32(&moduleInstance->b_aTmp[0], &b[0], &outSizeT[0], 2.0,
                     &padSizeT[0], &kernel[0], &connDimsT[0], true);
  } else {
    for (i = 0; i < 2; i++) {
      padSizeT[i] = 28.0 * (real_T)i + 132.0;
      outSizeT[i] = 40.0 * (real_T)i + 120.0;
      connDimsT[i] = -12.0 * (real_T)i + 13.0;
      startT[i] = -6.0 * (real_T)i + 6.0;
    }

    imfilter_real32(&moduleInstance->b_aTmp[0], &b[0], 2.0, &outSizeT[0], 2.0,
                    &padSizeT[0], &nonZeroKernel[0], 12.0, &conn[0], 2.0,
                    &connDimsT[0], &startT[0], 2.0, true, true);
  }
}

static void imhist(const emlrtStack *sp, real32_T varargin_1[19200], real_T
                   yout[64])
{
  emlrtStack st;
  real_T out;
  int32_T i;
  real32_T b_varargin_1;
  real32_T idx;
  boolean_T nanFlag;
  st.prev = sp;
  st.tls = sp->tls;
  out = 1.0;
  getnumcores(&out);
  for (i = 0; i < 64; i++) {
    yout[i] = 0.0;
  }

  nanFlag = false;
  for (i = 0; i < 19200; i++) {
    b_varargin_1 = varargin_1[i];
    if (muSingleScalarIsNaN(b_varargin_1)) {
      nanFlag = true;
      idx = 0.0F;
    } else {
      idx = b_varargin_1 * 63.0F + 0.5F;
    }

    if (idx > 63.0F) {
      yout[63]++;
    } else if (muSingleScalarIsInf(b_varargin_1)) {
      yout[63]++;
    } else {
      yout[(int32_T)idx]++;
    }
  }

  if (nanFlag) {
    st.site = &t_emlrtRSI;
    warning(&st);
  }
}

static void warning(const emlrtStack *sp)
{
  static const int32_T iv[2] = { 1, 7 };

  static const int32_T iv1[2] = { 1, 7 };

  static const int32_T iv2[2] = { 1, 27 };

  static char_T b_msgID[27] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'i', 'm', 'h',
    'i', 's', 't', 'c', ':', 'i', 'n', 'p', 'u', 't', 'H', 'a', 's', 'N', 'a',
    'N', 's' };

  static char_T b_u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T c_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T msgID[27];
  char_T u[7];
  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 27; i++) {
    msgID[i] = b_msgID[i];
  }

  for (i = 0; i < 7; i++) {
    u[i] = b_u[i];
  }

  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 7, m, &u[0]);
  emlrtAssign(&y, m);
  for (i = 0; i < 7; i++) {
    u[i] = c_u[i];
  }

  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 7, m, &u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 27, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  st.site = &nb_emlrtRSI;
  b_feval(&st, y, feval(&st, b_y, c_y, &c_emlrtMCI), &d_emlrtMCI);
}

static void thinAndThreshold(const emlrtStack *sp, boolean_T E[19200], real32_T
  c_dx[19200], real32_T b_dy[19200], real32_T magGrad[19200], real_T
  lowThresh_data[], int32_T lowThresh_size[1], real_T highThresh_data[], int32_T
  highThresh_size[1], boolean_T b_H[19200])
{
  emlrtStack st;
  real_T szT[2];
  real_T highThresh;
  int32_T i;
  emlrtDynamicBoundsCheckR2012b(1, 1, lowThresh_size[0], &e_emlrtBCI,
    (emlrtConstCTX)sp);
  for (i = 0; i < 2; i++) {
    szT[i] = 40.0 * (real_T)i + 120.0;
  }

  cannythresholding_real32_tbb(&c_dx[0], &b_dy[0], &magGrad[0], &szT[0],
    lowThresh_data[0], &E[0]);
  emlrtDynamicBoundsCheckR2012b(1, 1, highThresh_size[0], &f_emlrtBCI,
    (emlrtConstCTX)sp);
  highThresh = highThresh_data[0];
  for (i = 0; i < 19200; i++) {
    b_H[i] = ((real_T)magGrad[i] > highThresh);
  }

  st.site = &u_emlrtRSI;
  imreconstruct(b_H, E);
}

static void hough(const emlrtStack *sp, boolean_T varargin_1[19200], real_T h
                  [71820])
{
  real_T cost[180];
  real_T sint[180];
  real_T b_cost;
  real_T b_sint;
  int32_T rhoIdxVector[399];
  int32_T i;
  int32_T j;
  int32_T k;
  int32_T tempNum;
  int8_T nonZeroPixelMatrix[19200];
  int8_T numNonZeros[160];
  int8_T tempBin[120];
  for (i = 0; i < 180; i++) {
    cost[i] = muDoubleScalarCos(((((real_T)i + 1.0) - 1.0) - 90.0) *
      3.1415926535897931 / 180.0);
    sint[i] = muDoubleScalarSin(((((real_T)i + 1.0) - 1.0) - 90.0) *
      3.1415926535897931 / 180.0);
  }

  for (j = 0; j < 160; j++) {
    tempNum = 0;
    for (i = 0; i < 120; i++) {
      if (varargin_1[i + 120 * j]) {
        tempNum++;
        tempBin[emlrtDynamicBoundsCheckR2012b(tempNum, 1, 120, &g_emlrtBCI,
          (emlrtConstCTX)sp) - 1] = (int8_T)(i + 1);
      }
    }

    numNonZeros[j] = (int8_T)tempNum;
    k = 0;
    while ((k < 120) && (!(k + 1 > tempNum))) {
      nonZeroPixelMatrix[k + 120 * j] = tempBin[k];
      k++;
    }
  }

  for (k = 0; k < 180; k++) {
    for (i = 0; i < 399; i++) {
      rhoIdxVector[i] = 0;
    }

    for (j = 0; j < 160; j++) {
      tempNum = numNonZeros[j];
      for (i = 0; i < tempNum; i++) {
        b_sint = sint[k];
        b_cost = cost[k];
        rhoIdxVector[emlrtDynamicBoundsCheckR2012b((int32_T)((((((real_T)j + 1.0)
          - 1.0) * b_cost + ((real_T)nonZeroPixelMatrix[i + 120 * j] - 1.0) *
          b_sint) - -199.0) + 0.5) + 1, 1, 399, &h_emlrtBCI, (emlrtConstCTX)sp)
          - 1] = rhoIdxVector[(int32_T)((((((real_T)j + 1.0) - 1.0) * b_cost +
          ((real_T)nonZeroPixelMatrix[i + 120 * j] - 1.0) * b_sint) - -199.0) +
          0.5)] + 1;
      }
    }

    for (tempNum = 0; tempNum < 399; tempNum++) {
      h[tempNum + 399 * k] = (real_T)rhoIdxVector[tempNum];
    }
  }
}

static void detectCirclesHough(InstanceStruct_TGFryhn5FIAXu3pMKIfouD
  *moduleInstance, const emlrtStack *sp, boolean_T edges[19200], real_T centers
  [10], real_T radii[5])
{
  emlrtStack b_st;
  emlrtStack st;
  real_T peaks_data[20];
  real_T r;
  int32_T peaks_size[2];
  int32_T b_i;
  int32_T i;
  int32_T i1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 1, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 1, 0);

  /*  Custom Hough Transform-based circle detection (codegen compatible) */
  /*  Perform standard Hough Transform */
  st.site = &v_emlrtRSI;
  hough(&st, edges, moduleInstance->H);

  /*  Find peaks in Hough Transform (probable circles) */
  st.site = &w_emlrtRSI;
  houghpeaks(moduleInstance, &st, moduleInstance->H, peaks_data, peaks_size);

  /*  Max 10 circles */
  for (i = 0; i < 10; i++) {
    centers[i] = 0.0;
  }

  /*  Fixed-size array for Simulink */
  for (b_i = 0; b_i < 5; b_i++) {
    radii[b_i] = 0.0;
  }

  /*  Ensure fixed-size */
  i = (int32_T)muDoubleScalarMin((real_T)peaks_size[0], 5.0);
  for (b_i = 0; b_i < i; b_i++) {
    covrtLogFor(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 1, 0, 0, 1);
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 1, 1);
    emlrtDynamicBoundsCheckR2012b(1, 1, peaks_size[1], &i_emlrtBCI,
      (emlrtConstCTX)sp);
    emlrtDynamicBoundsCheckR2012b(2, 1, peaks_size[1], &j_emlrtBCI,
      (emlrtConstCTX)sp);
    centers[b_i] = -199.0 + (real_T)((int32_T)
      peaks_data[emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, peaks_size[0],
      &k_emlrtBCI, (emlrtConstCTX)sp) - 1] - 1);
    i1 = (int32_T)peaks_data[(emlrtDynamicBoundsCheckR2012b(b_i + 1, 1,
      peaks_size[0], &m_emlrtBCI, (emlrtConstCTX)sp) + peaks_size[0]) - 1];
    centers[b_i + 5] = -90.0 + ((real_T)emlrtDynamicBoundsCheckR2012b(i1, 1, 180,
      &l_emlrtBCI, (emlrtConstCTX)sp) - 1.0);
    st.site = &x_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    r = b_rand(moduleInstance, &b_st);
    radii[b_i] = muDoubleScalarFloor(r * 13.0) + 8.0;

    /*  Approximate radius */
    cgxertListenForCtrlC(moduleInstance->S);
  }

  covrtLogFor(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 1, 0, 0, 0);
}

static void houghpeaks(InstanceStruct_TGFryhn5FIAXu3pMKIfouD *moduleInstance,
  const emlrtStack *sp, real_T varargin_1[71820], real_T peaks_data[], int32_T
  peaks_size[2])
{
  static const int32_T iv[2] = { 1, 43 };

  static const int32_T iv1[2] = { 1, 43 };

  static char_T b_u[43] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'h', 'o', 'u',
    'g', 'h', 'p', 'e', 'a', 'k', 's', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd',
    'T', 'h', 'e', 't', 'a', 'V', 'e', 'c', 't', 'o', 'r', 'S', 'p', 'a', 'c',
    'i', 'n', 'g' };

  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  real_T dv1[180];
  real_T dv2[179];
  real_T dv3[178];
  real_T dv[2];
  real_T maxTheta;
  real_T maxVal;
  real_T thresholdDefault;
  int32_T peakCoordinates[20];
  int32_T peakIdx;
  int32_T rho;
  int32_T rhoMin;
  int32_T rhoToRemove;
  int32_T theta;
  int32_T thetaToRemove;
  int32_T v1;
  int32_T vk;
  char_T u[43];
  boolean_T isDone;
  boolean_T isThetaAntisymmetric;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &y_emlrtRSI;
  validateattributes(&st, varargin_1);
  maxVal = 0.0;
  for (v1 = 0; v1 < 71820; v1++) {
    maxTheta = varargin_1[v1];
    if (maxTheta > maxVal) {
      maxVal = maxTheta;
    }
  }

  thresholdDefault = 0.5 * maxVal;
  for (v1 = 0; v1 < 2; v1++) {
    dv[v1] = -4.0 * (real_T)v1 + 9.0;
  }

  st.site = &bb_emlrtRSI;
  b_validateattributes(&st, dv);
  st.site = &db_emlrtRSI;
  b_st.site = &eb_emlrtRSI;
  st.site = &cb_emlrtRSI;
  for (v1 = 0; v1 < 180; v1++) {
    dv1[v1] = (real_T)v1 - 90.0;
  }

  diff(dv1, dv2);
  b_diff(dv2, dv3);
  if (muDoubleScalarAbs(sumColumnB(dv3)) > 1.4901161193847656E-8) {
    for (v1 = 0; v1 < 43; v1++) {
      u[v1] = b_u[v1];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 43, m, &u[0]);
    emlrtAssign(&y, m);
    for (v1 = 0; v1 < 43; v1++) {
      u[v1] = b_u[v1];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 43, m, &u[0]);
    emlrtAssign(&b_y, m);
    st.site = &cb_emlrtRSI;
    error(&st, y, getString(&st, b_message(&st, b_y, &f_emlrtMCI), &f_emlrtMCI),
          &f_emlrtMCI);
  }

  isDone = false;
  memcpy(&moduleInstance->hnew[0], &varargin_1[0], 71820U * sizeof(real_T));
  peakIdx = 0;
  for (v1 = 0; v1 < 180; v1++) {
    dv1[v1] = (real_T)v1 - 90.0;
  }

  maxVal = minimum(dv1);
  for (v1 = 0; v1 < 180; v1++) {
    dv1[v1] = (real_T)v1 - 90.0;
  }

  maxTheta = maximum(dv1);
  isThetaAntisymmetric = (muDoubleScalarAbs(maxVal + muDoubleScalarAbs(maxTheta
    - maxVal) / 179.0 * 5.0) <= maxTheta);
  while (!isDone) {
    b_maximum(moduleInstance->hnew, &maxVal, &v1);
    st.site = &ab_emlrtRSI;
    vk = (int32_T)((uint32_T)(v1 - 1) / 399U);
    v1 -= vk * 399;
    if (moduleInstance->hnew[(emlrtDynamicBoundsCheckR2012b(v1, 1, 399,
          &o_emlrtBCI, (emlrtConstCTX)sp) + 399 * vk) - 1] >= thresholdDefault)
    {
      peakIdx++;
      peakCoordinates[emlrtDynamicBoundsCheckR2012b(peakIdx, 1, 10, &n_emlrtBCI,
        (emlrtConstCTX)sp) - 1] = v1;
      peakCoordinates[peakIdx + 9] = vk + 1;
      rhoMin = v1;
      if (v1 - 4 < 1) {
        rhoMin = 5;
      }

      if (v1 + 4 > 399) {
        v1 = 395;
      }

      for (theta = vk - 1; theta <= vk + 3; theta++) {
        for (rho = rhoMin - 4; rho <= v1 + 4; rho++) {
          rhoToRemove = rho;
          thetaToRemove = theta;
          if (isThetaAntisymmetric) {
            if (theta > 180) {
              rhoToRemove = 400 - rho;
              thetaToRemove = theta - 180;
            } else if (theta < 1) {
              rhoToRemove = 400 - rho;
              thetaToRemove = theta + 180;
            }
          }

          if ((thetaToRemove > 180) || (thetaToRemove < 1)) {
          } else {
            moduleInstance->hnew[(rhoToRemove + 399 * (thetaToRemove - 1)) - 1] =
              0.0;
          }
        }
      }

      isDone = (peakIdx == 10);
    } else {
      isDone = true;
    }
  }

  if (peakIdx == 0) {
    peaks_size[0] = 0;
    peaks_size[1] = 0;
  } else {
    peaks_size[0] = peakIdx;
    peaks_size[1] = 2;
    for (v1 = 0; v1 < 2; v1++) {
      for (rhoMin = 0; rhoMin < peakIdx; rhoMin++) {
        peaks_data[rhoMin + peakIdx * v1] = (real_T)peakCoordinates[rhoMin + 10 *
          v1];
      }
    }
  }
}

static void validateattributes(const emlrtStack *sp, real_T b_a[71820])
{
  static const int32_T iv[2] = { 1, 33 };

  static const int32_T iv1[2] = { 1, 47 };

  static const int32_T iv2[2] = { 1, 18 };

  static char_T d_u[47] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'I', 'n', 't', 'e', 'g', 'e', 'r' };

  static char_T b_u[33] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'h', 'o', 'u',
    'g', 'h', 'p', 'e', 'a', 'k', 's', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'I', 'n', 't', 'e', 'g', 'e', 'r' };

  static char_T f_u[18] = { 'i', 'n', 'p', 'u', 't', ' ', 'n', 'u', 'm', 'b',
    'e', 'r', ' ', '1', ',', ' ', 'H', ',' };

  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T k;
  char_T c_u[47];
  char_T u[33];
  char_T e_u[18];
  boolean_T exitg1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &eb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  st.site = &eb_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 71820)) {
    if (muDoubleScalarFloor(b_a[k]) == b_a[k]) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (k = 0; k < 33; k++) {
      u[k] = b_u[k];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 33, m, &u[0]);
    emlrtAssign(&y, m);
    for (k = 0; k < 47; k++) {
      c_u[k] = d_u[k];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 47, m, &c_u[0]);
    emlrtAssign(&b_y, m);
    for (k = 0; k < 18; k++) {
      e_u[k] = f_u[k];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 18, m, &e_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &lb_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &h_emlrtMCI),
           &h_emlrtMCI), &h_emlrtMCI);
  }
}

static void b_validateattributes(const emlrtStack *sp, real_T b_a[2])
{
  static const int32_T iv[2] = { 1, 33 };

  static const int32_T iv1[2] = { 1, 47 };

  static const int32_T iv2[2] = { 1, 29 };

  static const int32_T iv3[2] = { 1, 9 };

  static const int32_T iv4[2] = { 1, 43 };

  static const int32_T iv5[2] = { 1, 9 };

  static char_T e_u[47] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'I', 'n', 't', 'e', 'g', 'e', 'r' };

  static char_T j_u[43] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'O', 'd', 'd' };

  static char_T b_u[33] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'h', 'o', 'u',
    'g', 'h', 'p', 'e', 'a', 'k', 's', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'I', 'n', 't', 'e', 'g', 'e', 'r' };

  static char_T f_u[29] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'h', 'o', 'u',
    'g', 'h', 'p', 'e', 'a', 'k', 's', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'O', 'd', 'd' };

  static char_T i_u[9] = { 'N', 'H', 'o', 'o', 'd', 'S', 'i', 'z', 'e' };

  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *m;
  const mxArray *y;
  real_T r;
  int32_T k;
  char_T c_u[47];
  char_T h_u[43];
  char_T u[33];
  char_T d_u[29];
  char_T g_u[9];
  boolean_T exitg1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &eb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  st.site = &eb_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (muDoubleScalarFloor(b_a[k]) == b_a[k]) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (k = 0; k < 33; k++) {
      u[k] = b_u[k];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 33, m, &u[0]);
    emlrtAssign(&y, m);
    for (k = 0; k < 47; k++) {
      c_u[k] = e_u[k];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 47, m, &c_u[0]);
    emlrtAssign(&b_y, m);
    for (k = 0; k < 9; k++) {
      g_u[k] = i_u[k];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&st, 9, m, &g_u[0]);
    emlrtAssign(&d_y, m);
    b_st.site = &lb_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, d_y, &h_emlrtMCI),
           &h_emlrtMCI), &h_emlrtMCI);
  }

  st.site = &eb_emlrtRSI;
  st.site = &eb_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    r = muDoubleScalarRem(b_a[k], 2.0);
    if (r == 0.0) {
      r = 0.0;
    }

    if (r == 1.0) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (k = 0; k < 29; k++) {
      d_u[k] = f_u[k];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 29, m, &d_u[0]);
    emlrtAssign(&c_y, m);
    for (k = 0; k < 43; k++) {
      h_u[k] = j_u[k];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(&st, 43, m, &h_u[0]);
    emlrtAssign(&e_y, m);
    for (k = 0; k < 9; k++) {
      g_u[k] = i_u[k];
    }

    f_y = NULL;
    m = emlrtCreateCharArray(2, &iv5[0]);
    emlrtInitCharArrayR2013a(&st, 9, m, &g_u[0]);
    emlrtAssign(&f_y, m);
    b_st.site = &kb_emlrtRSI;
    error(&b_st, c_y, getString(&b_st, message(&b_st, e_y, f_y, &j_emlrtMCI),
           &j_emlrtMCI), &j_emlrtMCI);
  }
}

static real_T minimum(real_T x[180])
{
  real_T ex;
  int32_T k;
  ex = x[0];
  for (k = 0; k < 179; k++) {
    if (ex > x[k + 1]) {
      ex = x[k + 1];
    }
  }

  return ex;
}

static real_T maximum(real_T x[180])
{
  real_T ex;
  int32_T k;
  ex = x[0];
  for (k = 0; k < 179; k++) {
    if (ex < x[k + 1]) {
      ex = x[k + 1];
    }
  }

  return ex;
}

static void diff(real_T x[180], real_T y[179])
{
  real_T tmp1;
  real_T work;
  int32_T ixLead;
  int32_T iyLead;
  int32_T m;
  ixLead = 1;
  iyLead = 0;
  work = x[0];
  for (m = 0; m < 179; m++) {
    tmp1 = work;
    work = x[ixLead];
    tmp1 = x[ixLead] - tmp1;
    ixLead++;
    y[iyLead] = tmp1;
    iyLead++;
  }
}

static void b_diff(real_T x[179], real_T y[178])
{
  real_T tmp1;
  real_T work;
  int32_T ixLead;
  int32_T iyLead;
  int32_T m;
  ixLead = 1;
  iyLead = 0;
  work = x[0];
  for (m = 0; m < 178; m++) {
    tmp1 = work;
    work = x[ixLead];
    tmp1 = x[ixLead] - tmp1;
    ixLead++;
    y[iyLead] = tmp1;
    iyLead++;
  }
}

static real_T sumColumnB(real_T x[178])
{
  real_T y;
  int32_T k;
  y = x[0];
  for (k = 0; k < 177; k++) {
    y += x[k + 1];
  }

  return y;
}

static void b_maximum(real_T x[71820], real_T *ex, int32_T *idx)
{
  int32_T k;
  *ex = x[0];
  *idx = -1;
  for (k = 0; k < 71819; k++) {
    if (*ex < x[k + 1]) {
      *ex = x[k + 1];
      *idx = k;
    }
  }

  *idx += 2;
}

static real_T b_rand(InstanceStruct_TGFryhn5FIAXu3pMKIfouD *moduleInstance,
                     const emlrtStack *sp)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &gb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &hb_emlrtRSI;
  c_st.site = &ib_emlrtRSI;
  return eml_rand_mt19937ar(&c_st, moduleInstance->c_state);
}

static const mxArray *emlrt_marshallOut(InstanceStruct_TGFryhn5FIAXu3pMKIfouD
  *moduleInstance)
{
  static const int32_T iv[1] = { 625 };

  static const int32_T iv1[1] = { 2 };

  static const char_T *sv[1] = { "isInitialized" };

  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *k_y;
  const mxArray *l_y;
  const mxArray *m;
  const mxArray *y;
  int32_T b_i;
  int32_T i;
  uint32_T *pData;
  y = NULL;
  emlrtAssign(&y, emlrtCreateCellMatrix(10, 1));
  b_y = NULL;
  m = emlrtCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
  *(uint32_T *)emlrtMxGetData(m) = moduleInstance->method;
  emlrtAssign(&b_y, m);
  emlrtSetCell(y, 0, b_y);
  c_y = NULL;
  m = emlrtCreateLogicalScalar(moduleInstance->method_not_empty);
  emlrtAssign(&c_y, m);
  emlrtSetCell(y, 1, c_y);
  d_y = NULL;
  m = emlrtCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
  *(uint32_T *)emlrtMxGetData(m) = moduleInstance->state;
  emlrtAssign(&d_y, m);
  emlrtSetCell(y, 2, d_y);
  e_y = NULL;
  m = emlrtCreateNumericArray(1, (const void *)&iv[0], mxUINT32_CLASS, mxREAL);
  pData = (uint32_T *)emlrtMxGetData(m);
  i = 0;
  for (b_i = 0; b_i < 625; b_i++) {
    pData[i] = moduleInstance->c_state[b_i];
    i++;
  }

  emlrtAssign(&e_y, m);
  emlrtSetCell(y, 3, e_y);
  f_y = NULL;
  m = emlrtCreateNumericArray(1, (const void *)&iv1[0], mxUINT32_CLASS, mxREAL);
  pData = (uint32_T *)emlrtMxGetData(m);
  i = 0;
  for (b_i = 0; b_i < 2; b_i++) {
    pData[i] = moduleInstance->b_state[b_i];
    i++;
  }

  emlrtAssign(&f_y, m);
  emlrtSetCell(y, 4, f_y);
  g_y = NULL;
  m = emlrtCreateLogicalScalar(moduleInstance->state_not_empty);
  emlrtAssign(&g_y, m);
  emlrtSetCell(y, 5, g_y);
  h_y = NULL;
  m = emlrtCreateLogicalScalar(moduleInstance->c_state_not_empty);
  emlrtAssign(&h_y, m);
  emlrtSetCell(y, 6, h_y);
  i_y = NULL;
  m = emlrtCreateLogicalScalar(moduleInstance->b_state_not_empty);
  emlrtAssign(&i_y, m);
  emlrtSetCell(y, 7, i_y);
  j_y = NULL;
  emlrtAssign(&j_y, emlrtCreateStructMatrix(1, 1, 1, (const char_T **)&sv[0]));
  k_y = NULL;
  m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)emlrtMxGetData(m) = moduleInstance->sysobj.isInitialized;
  emlrtAssign(&k_y, m);
  emlrtSetFieldR2017b(j_y, 0, "isInitialized", k_y, 0);
  emlrtSetCell(y, 8, j_y);
  l_y = NULL;
  m = emlrtCreateLogicalScalar(moduleInstance->sysobj_not_empty);
  emlrtAssign(&l_y, m);
  emlrtSetCell(y, 9, l_y);
  return y;
}

static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_TGFryhn5FIAXu3pMKIfouD *moduleInstance)
{
  const mxArray *st;
  st = NULL;
  emlrtAssign(&st, emlrt_marshallOut(moduleInstance));
  return st;
}

static void emlrt_marshallIn(InstanceStruct_TGFryhn5FIAXu3pMKIfouD
  *moduleInstance, const emlrtStack *sp, const mxArray *u)
{
  emlrtMsgIdentifier thisId;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  thisId.fIdentifier = "method";
  moduleInstance->method = b_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell((void *)
    sp, &thisId, u, 0)), "method");
  thisId.fIdentifier = "method_not_empty";
  moduleInstance->method_not_empty = d_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetCell((void *)sp, &thisId, u, 1)), "method_not_empty");
  thisId.fIdentifier = "state";
  moduleInstance->state = b_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell((void *)
    sp, &thisId, u, 2)), "state");
  thisId.fIdentifier = "state";
  f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell((void *)sp, &thisId, u, 3)),
                     "state", moduleInstance->c_state);
  thisId.fIdentifier = "state";
  h_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell((void *)sp, &thisId, u, 4)),
                     "state", moduleInstance->b_state);
  thisId.fIdentifier = "state_not_empty";
  moduleInstance->state_not_empty = d_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetCell((void *)sp, &thisId, u, 5)), "state_not_empty");
  thisId.fIdentifier = "state_not_empty";
  moduleInstance->c_state_not_empty = d_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetCell((void *)sp, &thisId, u, 6)), "state_not_empty");
  thisId.fIdentifier = "state_not_empty";
  moduleInstance->b_state_not_empty = d_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetCell((void *)sp, &thisId, u, 7)), "state_not_empty");
  thisId.fIdentifier = "sysobj";
  moduleInstance->sysobj = j_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell((void *)
    sp, &thisId, u, 8)), "sysobj");
  thisId.fIdentifier = "sysobj_not_empty";
  moduleInstance->sysobj_not_empty = d_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetCell((void *)sp, &thisId, u, 9)), "sysobj_not_empty");
  emlrtDestroyArray(&u);
}

static uint32_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
  const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  uint32_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = c_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId);
  emlrtDestroyArray(&nullptr);
  return y;
}

static uint32_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  uint32_T y;
  y = m_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static boolean_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
  const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  boolean_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = e_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId);
  emlrtDestroyArray(&nullptr);
  return y;
}

static boolean_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = n_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
  const char_T *identifier, uint32_T y[625])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  g_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId, y);
  emlrtDestroyArray(&nullptr);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, uint32_T y[625])
{
  o_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
  const char_T *identifier, uint32_T y[2])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  i_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId, y);
  emlrtDestroyArray(&nullptr);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, uint32_T y[2])
{
  p_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static CircleIdentifier j_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *nullptr, const char_T *identifier)
{
  CircleIdentifier y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = k_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId);
  emlrtDestroyArray(&nullptr);
  return y;
}

static CircleIdentifier k_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *u, const emlrtMsgIdentifier *parentId)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[1] = { "isInitialized" };

  CircleIdentifier y;
  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)sp, parentId, u, 1, (const char_T **)
    &fieldNames[0], 0U, (const void *)&dims);
  thisId.fIdentifier = "isInitialized";
  y.isInitialized = l_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    ((emlrtConstCTX)sp, u, 0, 0, "isInitialized")), &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static int32_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  int32_T y;
  y = q_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void cgxe_mdl_set_sim_state(InstanceStruct_TGFryhn5FIAXu3pMKIfouD
  *moduleInstance, const mxArray *st)
{
  emlrtStack b_st = { NULL,            /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  b_st.tls = moduleInstance->emlrtRootTLSGlobal;
  emlrt_marshallIn(moduleInstance, &b_st, emlrtAlias(st));
  emlrtDestroyArray(&st);
}

static const mxArray *message(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 2, &pArrays[0],
    "message", true, location);
}

static const mxArray *getString(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location)
{
  const mxArray *m;
  const mxArray *pArray;
  pArray = m1;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 1, &pArray, "getString",
    true, location);
}

static void error(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                  emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = m;
  pArrays[1] = m1;
  emlrtCallMATLABR2012b((emlrtConstCTX)sp, 0, NULL, 2, &pArrays[0], "error",
                        true, location);
}

static const mxArray *feval(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 2, &pArrays[0], "feval",
    true, location);
}

static void b_feval(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                    emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = m;
  pArrays[1] = m1;
  emlrtCallMATLABR2012b((emlrtConstCTX)sp, 0, NULL, 2, &pArrays[0], "feval",
                        true, location);
}

static const mxArray *b_message(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location)
{
  const mxArray *m;
  const mxArray *pArray;
  pArray = m1;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 1, &pArray, "message",
    true, location);
}

static uint32_T m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  uint32_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "uint32", false, 0U, (
    const void *)&dims);
  ret = *(uint32_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static boolean_T n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  boolean_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "logical", false, 0U, (
    const void *)&dims);
  ret = *emlrtMxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, uint32_T ret[625])
{
  static const int32_T dims[1] = { 625 };

  int32_T i;
  uint32_T (*r)[625];
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "uint32", false, 1U, (
    const void *)&dims[0]);
  r = (uint32_T (*)[625])emlrtMxGetData(src);
  for (i = 0; i < 625; i++) {
    ret[i] = (*r)[i];
  }

  emlrtDestroyArray(&src);
}

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, uint32_T ret[2])
{
  static const int32_T dims[1] = { 2 };

  int32_T i;
  uint32_T (*r)[2];
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "uint32", false, 1U, (
    const void *)&dims[0]);
  r = (uint32_T (*)[2])emlrtMxGetData(src);
  for (i = 0; i < 2; i++) {
    ret[i] = (*r)[i];
  }

  emlrtDestroyArray(&src);
}

static int32_T q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  int32_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "int32", false, 0U, (
    const void *)&dims);
  ret = *(int32_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void imreconstruct(boolean_T marker[19200], boolean_T mask[19200])
{
  real_T imSizeT[2];
  int32_T i;
  for (i = 0; i < 2; i++) {
    imSizeT[i] = 40.0 * (real_T)i + 120.0;
  }

  ippreconstruct_uint8((uint8_T *)&marker[0], (uint8_T *)&mask[0], &imSizeT[0],
                       2.0);
}

static real_T eml_rand_mt19937ar(const emlrtStack *sp, uint32_T d_state[625])
{
  static const int32_T iv[2] = { 1, 37 };

  static const int32_T iv1[2] = { 1, 37 };

  static char_T c_u[37] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'r', 'a', 'n', 'd', '_', 'i', 'n', 'v', 'a', 'l', 'i', 'd',
    'T', 'w', 'i', 's', 't', 'e', 'r', 'S', 't', 'a', 't', 'e' };

  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  int32_T exitg1;
  int32_T k;
  int32_T kk;
  uint32_T u[2];
  uint32_T mti;
  uint32_T y;
  char_T b_u[37];
  boolean_T exitg2;
  boolean_T isvalid;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &jb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /* ========================= COPYRIGHT NOTICE ============================ */
  /*  This is a uniform (0,1) pseudorandom number generator based on: */
  /*  */
  /*  A C-program for MT19937, with initialization improved 2002/1/26. */
  /*  Coded by Takuji Nishimura and Makoto Matsumoto. */
  /*  */
  /*  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura, */
  /*  All rights reserved. */
  /*  */
  /*  Redistribution and use in source and binary forms, with or without */
  /*  modification, are permitted provided that the following conditions */
  /*  are met: */
  /*  */
  /*    1. Redistributions of source code must retain the above copyright */
  /*       notice, this list of conditions and the following disclaimer. */
  /*  */
  /*    2. Redistributions in binary form must reproduce the above copyright */
  /*       notice, this list of conditions and the following disclaimer */
  /*       in the documentation and/or other materials provided with the */
  /*       distribution. */
  /*  */
  /*    3. The names of its contributors may not be used to endorse or */
  /*       promote products derived from this software without specific */
  /*       prior written permission. */
  /*  */
  /*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS */
  /*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT */
  /*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR */
  /*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT */
  /*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, */
  /*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT */
  /*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, */
  /*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY */
  /*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT */
  /*  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE */
  /*  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. */
  /*  */
  /* =============================   END   ================================= */
  do {
    exitg1 = 0;
    for (k = 0; k < 2; k++) {
      mti = d_state[624] + 1U;
      if (mti >= 625U) {
        for (kk = 0; kk < 227; kk++) {
          y = (d_state[kk] & 2147483648U) | (d_state[kk + 1] & 2147483647U);
          if ((y & 1U) == 0U) {
            y >>= 1U;
          } else {
            y = y >> 1U ^ 2567483615U;
          }

          d_state[kk] = d_state[kk + 397] ^ y;
        }

        for (kk = 0; kk < 396; kk++) {
          y = (d_state[kk + 227] & 2147483648U) | (d_state[kk + 228] &
            2147483647U);
          if ((y & 1U) == 0U) {
            y >>= 1U;
          } else {
            y = y >> 1U ^ 2567483615U;
          }

          d_state[kk + 227] = d_state[kk] ^ y;
        }

        y = (d_state[623] & 2147483648U) | (d_state[0] & 2147483647U);
        if ((y & 1U) == 0U) {
          y >>= 1U;
        } else {
          y = y >> 1U ^ 2567483615U;
        }

        d_state[623] = d_state[396] ^ y;
        mti = 1U;
      }

      y = d_state[(int32_T)mti - 1];
      d_state[624] = mti;
      y ^= y >> 11U;
      y ^= y << 7U & 2636928640U;
      y ^= y << 15U & 4022730752U;
      y ^= y >> 18U;
      u[k] = y;
    }

    mti = u[0] >> 5U;
    y = u[1] >> 6U;
    if ((mti == 0U) && (y == 0U)) {
      if ((d_state[624] >= 1U) && (d_state[624] < 625U)) {
        isvalid = true;
      } else {
        isvalid = false;
      }

      if (isvalid) {
        isvalid = false;
        k = 0;
        exitg2 = false;
        while ((!exitg2) && (k + 1 < 625)) {
          if (d_state[k] == 0U) {
            k++;
          } else {
            isvalid = true;
            exitg2 = true;
          }
        }
      }

      if (!isvalid) {
        for (k = 0; k < 37; k++) {
          b_u[k] = c_u[k];
        }

        b_y = NULL;
        m = emlrtCreateCharArray(2, &iv[0]);
        emlrtInitCharArrayR2013a(&st, 37, m, &b_u[0]);
        emlrtAssign(&b_y, m);
        for (k = 0; k < 37; k++) {
          b_u[k] = c_u[k];
        }

        c_y = NULL;
        m = emlrtCreateCharArray(2, &iv1[0]);
        emlrtInitCharArrayR2013a(&st, 37, m, &b_u[0]);
        emlrtAssign(&c_y, m);
        b_st.site = &mb_emlrtRSI;
        error(&b_st, b_y, getString(&b_st, b_message(&b_st, c_y, &l_emlrtMCI),
               &l_emlrtMCI), &l_emlrtMCI);
      }
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return 1.1102230246251565E-16 * ((real_T)mti * 6.7108864E+7 + (real_T)y);
}

static void init_simulink_io_address(InstanceStruct_TGFryhn5FIAXu3pMKIfouD
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = (void *)cgxertGetEMLRTCtx
    (moduleInstance->S);
  moduleInstance->u0 = (uint8_T (*)[57600])cgxertGetInputPortSignal
    (moduleInstance->S, 0);
  moduleInstance->b_y0 = (real_T (*)[10])cgxertGetOutputPortSignal
    (moduleInstance->S, 0);
  moduleInstance->b_y1 = (real_T (*)[5])cgxertGetOutputPortSignal
    (moduleInstance->S, 1);
  moduleInstance->y2 = (real_T *)cgxertGetOutputPortSignal(moduleInstance->S, 2);
  moduleInstance->covInst_CONTAINER_BLOCK_INDEX = (covrtInstance *)
    cgxertGetCovrtInstance(moduleInstance->S, -1);
}

/* CGXE Glue Code */
static void mdlOutputs_TGFryhn5FIAXu3pMKIfouD(SimStruct *S, int_T tid)
{
  InstanceStruct_TGFryhn5FIAXu3pMKIfouD *moduleInstance =
    (InstanceStruct_TGFryhn5FIAXu3pMKIfouD *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_TGFryhn5FIAXu3pMKIfouD(SimStruct *S)
{
  InstanceStruct_TGFryhn5FIAXu3pMKIfouD *moduleInstance =
    (InstanceStruct_TGFryhn5FIAXu3pMKIfouD *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_TGFryhn5FIAXu3pMKIfouD(SimStruct *S, int_T tid)
{
  InstanceStruct_TGFryhn5FIAXu3pMKIfouD *moduleInstance =
    (InstanceStruct_TGFryhn5FIAXu3pMKIfouD *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static void mdlDerivatives_TGFryhn5FIAXu3pMKIfouD(SimStruct *S)
{
  InstanceStruct_TGFryhn5FIAXu3pMKIfouD *moduleInstance =
    (InstanceStruct_TGFryhn5FIAXu3pMKIfouD *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_derivative(moduleInstance);
}

static mxArray* getSimState_TGFryhn5FIAXu3pMKIfouD(SimStruct *S)
{
  mxArray* mxSS;
  InstanceStruct_TGFryhn5FIAXu3pMKIfouD *moduleInstance =
    (InstanceStruct_TGFryhn5FIAXu3pMKIfouD *)cgxertGetRuntimeInstance(S);
  mxSS = (mxArray *) cgxe_mdl_get_sim_state(moduleInstance);
  return mxSS;
}

static void setSimState_TGFryhn5FIAXu3pMKIfouD(SimStruct *S, const mxArray *ss)
{
  InstanceStruct_TGFryhn5FIAXu3pMKIfouD *moduleInstance =
    (InstanceStruct_TGFryhn5FIAXu3pMKIfouD *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_set_sim_state(moduleInstance, emlrtAlias(ss));
}

static void mdlTerminate_TGFryhn5FIAXu3pMKIfouD(SimStruct *S)
{
  InstanceStruct_TGFryhn5FIAXu3pMKIfouD *moduleInstance =
    (InstanceStruct_TGFryhn5FIAXu3pMKIfouD *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlEnable_TGFryhn5FIAXu3pMKIfouD(SimStruct *S)
{
  InstanceStruct_TGFryhn5FIAXu3pMKIfouD *moduleInstance =
    (InstanceStruct_TGFryhn5FIAXu3pMKIfouD *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_enable(moduleInstance);
}

static void mdlDisable_TGFryhn5FIAXu3pMKIfouD(SimStruct *S)
{
  InstanceStruct_TGFryhn5FIAXu3pMKIfouD *moduleInstance =
    (InstanceStruct_TGFryhn5FIAXu3pMKIfouD *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_disable(moduleInstance);
}

static void mdlStart_TGFryhn5FIAXu3pMKIfouD(SimStruct *S)
{
  InstanceStruct_TGFryhn5FIAXu3pMKIfouD *moduleInstance =
    (InstanceStruct_TGFryhn5FIAXu3pMKIfouD *)calloc(1, sizeof
    (InstanceStruct_TGFryhn5FIAXu3pMKIfouD));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_TGFryhn5FIAXu3pMKIfouD);
  ssSetmdlInitializeConditions(S, mdlInitialize_TGFryhn5FIAXu3pMKIfouD);
  ssSetmdlUpdate(S, mdlUpdate_TGFryhn5FIAXu3pMKIfouD);
  ssSetmdlDerivatives(S, mdlDerivatives_TGFryhn5FIAXu3pMKIfouD);
  ssSetmdlTerminate(S, mdlTerminate_TGFryhn5FIAXu3pMKIfouD);
  ssSetmdlEnable(S, mdlEnable_TGFryhn5FIAXu3pMKIfouD);
  ssSetmdlDisable(S, mdlDisable_TGFryhn5FIAXu3pMKIfouD);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_TGFryhn5FIAXu3pMKIfouD(SimStruct *S)
{
}

void method_dispatcher_TGFryhn5FIAXu3pMKIfouD(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_TGFryhn5FIAXu3pMKIfouD(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_TGFryhn5FIAXu3pMKIfouD(S);
    break;

   case SS_CALL_MDL_GET_SIM_STATE:
    *((mxArray**) data) = getSimState_TGFryhn5FIAXu3pMKIfouD(S);
    break;

   case SS_CALL_MDL_SET_SIM_STATE:
    setSimState_TGFryhn5FIAXu3pMKIfouD(S, (const mxArray *) data);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: TGFryhn5FIAXu3pMKIfouD.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_TGFryhn5FIAXu3pMKIfouD_BuildInfoUpdate(void)
{
  mxArray * mxBIArgs;
  mxArray * elem_1;
  mxArray * elem_2;
  mxArray * elem_3;
  mxArray * elem_4;
  mxArray * elem_5;
  mxArray * elem_6;
  mxArray * elem_7;
  mxArray * elem_8;
  mxArray * elem_9;
  mxArray * elem_10;
  mxArray * elem_11;
  mxArray * elem_12;
  mxArray * elem_13;
  mxArray * elem_14;
  mxArray * elem_15;
  mxArray * elem_16;
  mxArray * elem_17;
  mxArray * elem_18;
  mxArray * elem_19;
  mxArray * elem_20;
  mxArray * elem_21;
  mxArray * elem_22;
  mxArray * elem_23;
  mxArray * elem_24;
  mxArray * elem_25;
  mxArray * elem_26;
  mxArray * elem_27;
  mxArray * elem_28;
  mxArray * elem_29;
  mxArray * elem_30;
  mxArray * elem_31;
  mxArray * elem_32;
  mxArray * elem_33;
  mxArray * elem_34;
  mxArray * elem_35;
  mxArray * elem_36;
  mxArray * elem_37;
  mxBIArgs = mxCreateCellMatrix(1,3);
  elem_1 = mxCreateCellMatrix(1,6);
  elem_2 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,0,elem_2);
  elem_3 = mxCreateCellMatrix(1,4);
  elem_4 = mxCreateString("addIncludeFiles");
  mxSetCell(elem_3,0,elem_4);
  elem_5 = mxCreateCellMatrix(1,6);
  elem_6 = mxCreateString("libmwcannythresholding_tbb.h");
  mxSetCell(elem_5,0,elem_6);
  elem_7 = mxCreateString("libmwgetnumcores.h");
  mxSetCell(elem_5,1,elem_7);
  elem_8 = mxCreateString("libmwimfilter.h");
  mxSetCell(elem_5,2,elem_8);
  elem_9 = mxCreateString("libmwippfilter.h");
  mxSetCell(elem_5,3,elem_9);
  elem_10 = mxCreateString("libmwippreconstruct.h");
  mxSetCell(elem_5,4,elem_10);
  elem_11 = mxCreateString("libmwrgb2gray_tbb.h");
  mxSetCell(elem_5,5,elem_11);
  mxSetCell(elem_3,1,elem_5);
  elem_12 = mxCreateCellMatrix(1,6);
  elem_13 = mxCreateString("");
  mxSetCell(elem_12,0,elem_13);
  elem_14 = mxCreateString("");
  mxSetCell(elem_12,1,elem_14);
  elem_15 = mxCreateString("");
  mxSetCell(elem_12,2,elem_15);
  elem_16 = mxCreateString("");
  mxSetCell(elem_12,3,elem_16);
  elem_17 = mxCreateString("");
  mxSetCell(elem_12,4,elem_17);
  elem_18 = mxCreateString("");
  mxSetCell(elem_12,5,elem_18);
  mxSetCell(elem_3,2,elem_12);
  elem_19 = mxCreateCellMatrix(1,6);
  elem_20 = mxCreateString("");
  mxSetCell(elem_19,0,elem_20);
  elem_21 = mxCreateString("");
  mxSetCell(elem_19,1,elem_21);
  elem_22 = mxCreateString("");
  mxSetCell(elem_19,2,elem_22);
  elem_23 = mxCreateString("");
  mxSetCell(elem_19,3,elem_23);
  elem_24 = mxCreateString("");
  mxSetCell(elem_19,4,elem_24);
  elem_25 = mxCreateString("");
  mxSetCell(elem_19,5,elem_25);
  mxSetCell(elem_3,3,elem_19);
  mxSetCell(elem_1,1,elem_3);
  elem_26 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,2,elem_26);
  elem_27 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,3,elem_27);
  elem_28 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,4,elem_28);
  elem_29 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,5,elem_29);
  mxSetCell(mxBIArgs,0,elem_1);
  elem_30 = mxCreateCellMatrix(1,6);
  elem_31 = mxCreateString("images.internal.coder.buildable.Rgb2grayBuildable");
  mxSetCell(elem_30,0,elem_31);
  elem_32 = mxCreateString("images.internal.coder.buildable.IppfilterBuildable");
  mxSetCell(elem_30,1,elem_32);
  elem_33 = mxCreateString("images.internal.coder.buildable.ImfilterBuildable");
  mxSetCell(elem_30,2,elem_33);
  elem_34 = mxCreateString(
    "images.internal.coder.buildable.GetnumcoresBuildable");
  mxSetCell(elem_30,3,elem_34);
  elem_35 = mxCreateString(
    "images.internal.coder.buildable.CannyThresholdingTbbBuildable");
  mxSetCell(elem_30,4,elem_35);
  elem_36 = mxCreateString(
    "images.internal.coder.buildable.IppreconstructBuildable");
  mxSetCell(elem_30,5,elem_36);
  mxSetCell(mxBIArgs,1,elem_30);
  elem_37 = mxCreateCellMatrix(1,0);
  mxSetCell(mxBIArgs,2,elem_37);
  return mxBIArgs;
}

mxArray *cgxe_TGFryhn5FIAXu3pMKIfouD_fallback_info(void)
{
  const char* fallbackInfoFields[] = { "fallbackType", "incompatiableSymbol" };

  mxArray* fallbackInfoStruct = mxCreateStructMatrix(1, 1, 2, fallbackInfoFields);
  mxArray* fallbackType = mxCreateString("thirdPartyLibs");
  mxArray* incompatibleSymbol = mxCreateString(
    "images.internal.coder.buildable.Rgb2grayBuildable");
  mxSetFieldByNumber(fallbackInfoStruct, 0, 0, fallbackType);
  mxSetFieldByNumber(fallbackInfoStruct, 0, 1, incompatibleSymbol);
  return fallbackInfoStruct;
}
