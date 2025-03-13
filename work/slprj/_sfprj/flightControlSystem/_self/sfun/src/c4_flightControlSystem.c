/* Include files */

#include "flightControlSystem_sfun.h"
#include "c4_flightControlSystem.h"
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
static emlrtMCInfo c4_emlrtMCI = { 14, /* lineNo */
  37,                                  /* colNo */
  "validatefinite",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pName */
};

static emlrtMCInfo c4_b_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatenonnegative",               /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnegative.m"/* pName */
};

static emlrtMCInfo c4_c_emlrtMCI = { 82,/* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pName */
};

static emlrtRSInfo c4_emlrtRSI = { 3,  /* lineNo */
  "Image Processing System/MATLAB Function1",/* fcnName */
  "#flightControlSystem:2690"          /* pathName */
};

static emlrtRSInfo c4_b_emlrtRSI = { 4,/* lineNo */
  "Image Processing System/MATLAB Function1",/* fcnName */
  "#flightControlSystem:2690"          /* pathName */
};

static emlrtRSInfo c4_c_emlrtRSI = { 13,/* lineNo */
  "im2gray",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\images\\im2gray.m"/* pathName */
};

static emlrtRSInfo c4_d_emlrtRSI = { 46,/* lineNo */
  "rgb2gray",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\images\\rgb2gray.m"/* pathName */
};

static emlrtRSInfo c4_e_emlrtRSI = { 70,/* lineNo */
  "imbinarize",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imbinarize.m"/* pathName */
};

static emlrtRSInfo c4_f_emlrtRSI = { 104,/* lineNo */
  "imbinarize",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imbinarize.m"/* pathName */
};

static emlrtRSInfo c4_g_emlrtRSI = { 131,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c4_h_emlrtRSI = { 166,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c4_i_emlrtRSI = { 203,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c4_j_emlrtRSI = { 448,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c4_k_emlrtRSI = { 14,/* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pathName */
};

static emlrtRSInfo c4_l_emlrtRSI = { 37,/* lineNo */
  "otsuthresh",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m"/* pathName */
};

static emlrtRSInfo c4_m_emlrtRSI = { 85,/* lineNo */
  "otsuthresh",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m"/* pathName */
};

static emlrtRSInfo c4_n_emlrtRSI = { 93,/* lineNo */
  "validateattributes",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"/* pathName */
};

static emlrtRSInfo c4_o_emlrtRSI = { 44,/* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m"/* pathName */
};

static emlrtRSInfo c4_p_emlrtRSI = { 71,/* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtBCInfo c4_emlrtBCI = { 1,  /* iFirst */
  19200,                               /* iLast */
  1051,                                /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_emlrtDCI = { 1051,/* lineNo */
  48,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_b_emlrtBCI = { 1,/* iFirst */
  19200,                               /* iLast */
  1052,                                /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_b_emlrtDCI = { 1052,/* lineNo */
  48,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_c_emlrtBCI = { 1,/* iFirst */
  19200,                               /* iLast */
  1066,                                /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_c_emlrtDCI = { 1066,/* lineNo */
  47,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_d_emlrtBCI = { 1,/* iFirst */
  19200,                               /* iLast */
  1053,                                /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_d_emlrtDCI = { 1053,/* lineNo */
  48,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_e_emlrtBCI = { 1,/* iFirst */
  19200,                               /* iLast */
  1054,                                /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_e_emlrtDCI = { 1054,/* lineNo */
  48,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_f_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1130,                                /* lineNo */
  18,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_f_emlrtDCI = { 1130,/* lineNo */
  18,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_g_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1130,                                /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_g_emlrtDCI = { 1130,/* lineNo */
  34,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_h_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1130,                                /* lineNo */
  50,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_h_emlrtDCI = { 1130,/* lineNo */
  50,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_i_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1130,                                /* lineNo */
  66,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_i_emlrtDCI = { 1130,/* lineNo */
  66,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_j_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1130,                                /* lineNo */
  11,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c4_j_emlrtDCI = { 1130,/* lineNo */
  11,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_k_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1068,                                /* lineNo */
  52,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_k_emlrtDCI = { 1068,/* lineNo */
  52,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_l_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1068,                                /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c4_l_emlrtDCI = { 1068,/* lineNo */
  15,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_m_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1056,                                /* lineNo */
  71,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_m_emlrtDCI = { 1056,/* lineNo */
  71,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_n_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1056,                                /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c4_n_emlrtDCI = { 1056,/* lineNo */
  24,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_o_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1057,                                /* lineNo */
  71,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_o_emlrtDCI = { 1057,/* lineNo */
  71,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_p_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1057,                                /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c4_p_emlrtDCI = { 1057,/* lineNo */
  24,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_q_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1058,                                /* lineNo */
  71,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_q_emlrtDCI = { 1058,/* lineNo */
  71,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_r_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1058,                                /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c4_r_emlrtDCI = { 1058,/* lineNo */
  24,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_s_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1059,                                /* lineNo */
  53,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_s_emlrtDCI = { 1059,/* lineNo */
  53,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_t_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1059,                                /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c4_t_emlrtDCI = { 1059,/* lineNo */
  15,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_u_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  54,                                  /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_u_emlrtDCI = { 54,/* lineNo */
  47,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_v_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  66,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_v_emlrtDCI = { 66,/* lineNo */
  27,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_w_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  68,                                  /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_w_emlrtDCI = { 68,/* lineNo */
  26,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_x_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  68,                                  /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c4_x_emlrtDCI = { 68,/* lineNo */
  15,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_y_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  70,                                  /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_y_emlrtDCI = { 70,/* lineNo */
  20,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_ab_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  70,                                  /* lineNo */
  12,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c4_ab_emlrtDCI = { 70,/* lineNo */
  12,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_bb_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  85,                                  /* lineNo */
  39,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_bb_emlrtDCI = { 85,/* lineNo */
  39,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_cb_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  85,                                  /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_cb_emlrtDCI = { 85,/* lineNo */
  47,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_db_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  85,                                  /* lineNo */
  62,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_db_emlrtDCI = { 85,/* lineNo */
  62,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_eb_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  85,                                  /* lineNo */
  74,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_eb_emlrtDCI = { 85,/* lineNo */
  74,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

/* Function Declarations */
static void initialize_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void initialize_params_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void mdl_start_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void mdl_terminate_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void enable_c4_flightControlSystem(SFc4_flightControlSystemInstanceStruct
  *chartInstance);
static void disable_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void sf_gateway_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void ext_mode_exec_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void c4_update_jit_animation_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void c4_do_animation_call_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void set_sim_state_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance, const mxArray *c4_st);
static void c4_emlrt_marshallIn(SFc4_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c4_nullptr, const char_T *c4_identifier, real_T
  c4_y[19200]);
static void c4_b_emlrt_marshallIn(SFc4_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId,
  real_T c4_y[19200]);
static void init_dsm_address_info(SFc4_flightControlSystemInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc4_flightControlSystemInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  emlrtStack c4_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c4_st.tls = chartInstance->c4_fEmlrtCtx;
  emlrtLicenseCheckR2022a(&c4_st, "EMLRT:runTime:MexFunctionNeedsLicense",
    "image_toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c4_doneDoubleBufferReInit = false;
  chartInstance->c4_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void initialize_params_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  static const uint32_T c4_decisionTxtEndIdx = 0U;
  static const uint32_T c4_decisionTxtStartIdx = 0U;
  sfSetAnimationVectors(chartInstance->S, &chartInstance->c4_JITStateAnimation[0],
                        &chartInstance->c4_JITTransitionAnimation[0]);
  covrtCreateStateflowInstanceData(chartInstance->c4_covrtInstance, 1U, 0U, 1U,
    101U);
  covrtChartInitFcn(chartInstance->c4_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c4_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c4_decisionTxtStartIdx, &c4_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c4_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c4_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 0U,
                     "c4_flightControlSystem", 0, -1, 110);
}

static void mdl_cleanup_runtime_resources_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  covrtDeleteStateflowInstanceData(chartInstance->c4_covrtInstance);
}

static void enable_c4_flightControlSystem(SFc4_flightControlSystemInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  static char_T c4_cv4[51] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'n', 'e', 'g', 'a', 't', 'i', 'v', 'e' };

  static char_T c4_cv1[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'F', 'i', 'n', 'i', 't', 'e' };

  static char_T c4_cv3[37] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'o', 't', 's',
    'u', 't', 'h', 'r', 'e', 's', 'h', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'N', 'o', 'n', 'n', 'e', 'g', 'a', 't', 'i', 'v', 'e' };

  static char_T c4_cv[32] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'o', 't', 's',
    'u', 't', 'h', 'r', 'e', 's', 'h', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T c4_cv2[6] = { 'C', 'O', 'U', 'N', 'T', 'S' };

  static char_T c4_cv5[6] = { 'C', 'O', 'U', 'N', 'T', 'S' };

  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_e_st;
  emlrtStack c4_f_st;
  emlrtStack c4_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_f_y = NULL;
  const mxArray *c4_g_y = NULL;
  real_T c4_localBins1[256];
  real_T c4_localBins2[256];
  real_T c4_localBins3[256];
  real_T c4_y[256];
  real_T c4_T;
  real_T c4_b_idx;
  real_T c4_b_k;
  real_T c4_b_x;
  real_T c4_c_x;
  real_T c4_d;
  real_T c4_d1;
  real_T c4_d10;
  real_T c4_d11;
  real_T c4_d12;
  real_T c4_d13;
  real_T c4_d14;
  real_T c4_d15;
  real_T c4_d16;
  real_T c4_d17;
  real_T c4_d2;
  real_T c4_d3;
  real_T c4_d4;
  real_T c4_d5;
  real_T c4_d6;
  real_T c4_d7;
  real_T c4_d8;
  real_T c4_d9;
  real_T c4_d_i;
  real_T c4_d_k;
  real_T c4_d_p;
  real_T c4_d_x;
  real_T c4_e_x;
  real_T c4_f_k;
  real_T c4_f_x;
  real_T c4_g_a;
  real_T c4_g_c;
  real_T c4_g_x;
  real_T c4_h_a;
  real_T c4_i_a;
  real_T c4_j_a;
  real_T c4_k_a;
  real_T c4_maxval;
  real_T c4_mu_t;
  real_T c4_num_elems;
  real_T c4_num_maxval;
  real_T c4_out;
  real_T c4_sigma_b_squared;
  real_T c4_t;
  real_T c4_x;
  int32_T c4_a;
  int32_T c4_b_a;
  int32_T c4_b_c;
  int32_T c4_b_i;
  int32_T c4_c;
  int32_T c4_c_a;
  int32_T c4_c_c;
  int32_T c4_c_i;
  int32_T c4_c_k;
  int32_T c4_d_a;
  int32_T c4_d_c;
  int32_T c4_e_a;
  int32_T c4_e_c;
  int32_T c4_e_k;
  int32_T c4_f_a;
  int32_T c4_f_c;
  int32_T c4_g_k;
  int32_T c4_h_c;
  int32_T c4_h_k;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_i17;
  int32_T c4_i18;
  int32_T c4_i19;
  int32_T c4_i2;
  int32_T c4_i20;
  int32_T c4_i21;
  int32_T c4_i22;
  int32_T c4_i23;
  int32_T c4_i24;
  int32_T c4_i25;
  int32_T c4_i26;
  int32_T c4_i27;
  int32_T c4_i28;
  int32_T c4_i29;
  int32_T c4_i3;
  int32_T c4_i30;
  int32_T c4_i31;
  int32_T c4_i32;
  int32_T c4_i33;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_i_c;
  int32_T c4_idx;
  int32_T c4_idx1;
  int32_T c4_idx2;
  int32_T c4_idx3;
  int32_T c4_idx4;
  int32_T c4_j_c;
  int32_T c4_k;
  int32_T c4_k_c;
  int32_T c4_l_a;
  int32_T c4_m_a;
  int32_T c4_n_a;
  int32_T c4_o_a;
  uint8_T c4_imageGrey[19200];
  boolean_T c4_BW[19200];
  boolean_T c4_b;
  boolean_T c4_b1;
  boolean_T c4_b2;
  boolean_T c4_b3;
  boolean_T c4_b4;
  boolean_T c4_b5;
  boolean_T c4_b_b;
  boolean_T c4_b_p;
  boolean_T c4_c_b;
  boolean_T c4_c_p;
  boolean_T c4_d_b;
  boolean_T c4_e_b;
  boolean_T c4_exitg1;
  boolean_T c4_f_b;
  boolean_T c4_isfinite_maxval;
  boolean_T c4_p;
  c4_st.tls = chartInstance->c4_fEmlrtCtx;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_e_st.prev = &c4_d_st;
  c4_e_st.tls = c4_d_st.tls;
  c4_f_st.prev = &c4_e_st;
  c4_f_st.tls = c4_e_st.tls;
  for (c4_i = 0; c4_i < 57600; c4_i++) {
    covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 0U, (real_T)
                      (*chartInstance->c4_image)[c4_i]);
  }

  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c4_JITTransitionAnimation[0] = 0U;
  chartInstance->c4_sfEvent = CALL_EVENT;
  covrtEmlFcnEval(chartInstance->c4_covrtInstance, 4U, 0, 0);
  c4_b_st.site = &c4_emlrtRSI;
  c4_c_st.site = &c4_c_emlrtRSI;
  c4_d_st.site = &c4_d_emlrtRSI;
  rgb2gray_tbb_uint8(&(*chartInstance->c4_image)[0], 19200.0, &c4_imageGrey[0],
                     true);
  c4_b_st.site = &c4_b_emlrtRSI;
  c4_c_st.site = &c4_e_emlrtRSI;
  c4_d_st.site = &c4_f_emlrtRSI;
  c4_e_st.site = &c4_g_emlrtRSI;
  c4_f_st.site = &c4_h_emlrtRSI;
  c4_out = 1.0;
  getnumcores(&c4_out);
  c4_f_st.site = &c4_i_emlrtRSI;
  memset(&c4_y[0], 0, sizeof(real_T) << 8);
  memset(&c4_localBins1[0], 0, sizeof(real_T) << 8);
  memset(&c4_localBins2[0], 0, sizeof(real_T) << 8);
  memset(&c4_localBins3[0], 0, sizeof(real_T) << 8);
  for (c4_b_i = 1; c4_b_i + 3 <= 19200; c4_b_i += 4) {
    c4_d = (real_T)c4_b_i;
    if (c4_d != (real_T)(int32_T)muDoubleScalarFloor(c4_d)) {
      emlrtIntegerCheckR2012b(c4_d, &c4_emlrtDCI, &c4_f_st);
    }

    c4_i1 = (int32_T)muDoubleScalarFloor(c4_d);
    if ((c4_i1 < 1) || (c4_i1 > 19200)) {
      emlrtDynamicBoundsCheckR2012b(c4_i1, 1, 19200, &c4_emlrtBCI, &c4_f_st);
    }

    c4_idx1 = c4_imageGrey[c4_i1 - 1];
    c4_d2 = (real_T)(c4_b_i + 1);
    if (c4_d2 != (real_T)(int32_T)muDoubleScalarFloor(c4_d2)) {
      emlrtIntegerCheckR2012b(c4_d2, &c4_b_emlrtDCI, &c4_f_st);
    }

    c4_i4 = (int32_T)muDoubleScalarFloor(c4_d2);
    if ((c4_i4 < 1) || (c4_i4 > 19200)) {
      emlrtDynamicBoundsCheckR2012b(c4_i4, 1, 19200, &c4_b_emlrtBCI, &c4_f_st);
    }

    c4_idx2 = c4_imageGrey[c4_i4 - 1];
    c4_d4 = (real_T)(c4_b_i + 2);
    if (c4_d4 != (real_T)(int32_T)muDoubleScalarFloor(c4_d4)) {
      emlrtIntegerCheckR2012b(c4_d4, &c4_d_emlrtDCI, &c4_f_st);
    }

    c4_i8 = (int32_T)muDoubleScalarFloor(c4_d4);
    if ((c4_i8 < 1) || (c4_i8 > 19200)) {
      emlrtDynamicBoundsCheckR2012b(c4_i8, 1, 19200, &c4_d_emlrtBCI, &c4_f_st);
    }

    c4_idx3 = c4_imageGrey[c4_i8 - 1];
    c4_d6 = (real_T)(c4_b_i + 3);
    if (c4_d6 != (real_T)(int32_T)muDoubleScalarFloor(c4_d6)) {
      emlrtIntegerCheckR2012b(c4_d6, &c4_e_emlrtDCI, &c4_f_st);
    }

    c4_i11 = (int32_T)muDoubleScalarFloor(c4_d6);
    if ((c4_i11 < 1) || (c4_i11 > 19200)) {
      emlrtDynamicBoundsCheckR2012b(c4_i11, 1, 19200, &c4_e_emlrtBCI, &c4_f_st);
    }

    c4_idx4 = c4_imageGrey[c4_i11 - 1];
    c4_c_a = c4_idx1 + 1;
    c4_c_c = c4_c_a;
    c4_d_a = c4_idx1 + 1;
    c4_d_c = c4_d_a;
    c4_d7 = (real_T)c4_d_c;
    if (c4_d7 != (real_T)(int32_T)muDoubleScalarFloor(c4_d7)) {
      emlrtIntegerCheckR2012b(c4_d7, &c4_m_emlrtDCI, &c4_f_st);
    }

    c4_i14 = (int32_T)muDoubleScalarFloor(c4_d7);
    if ((c4_i14 < 1) || (c4_i14 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c4_i14, 1, 256, &c4_m_emlrtBCI, &c4_f_st);
    }

    c4_d8 = (real_T)c4_c_c;
    if (c4_d8 != (real_T)(int32_T)muDoubleScalarFloor(c4_d8)) {
      emlrtIntegerCheckR2012b(c4_d8, &c4_n_emlrtDCI, &c4_f_st);
    }

    c4_i16 = (int32_T)muDoubleScalarFloor(c4_d8);
    if ((c4_i16 < 1) || (c4_i16 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c4_i16, 1, 256, &c4_n_emlrtBCI, &c4_f_st);
    }

    c4_localBins1[c4_i16 - 1] = c4_localBins1[c4_i14 - 1] + 1.0;
    c4_e_a = c4_idx2 + 1;
    c4_e_c = c4_e_a;
    c4_f_a = c4_idx2 + 1;
    c4_f_c = c4_f_a;
    c4_d10 = (real_T)c4_f_c;
    if (c4_d10 != (real_T)(int32_T)muDoubleScalarFloor(c4_d10)) {
      emlrtIntegerCheckR2012b(c4_d10, &c4_o_emlrtDCI, &c4_f_st);
    }

    c4_i21 = (int32_T)muDoubleScalarFloor(c4_d10);
    if ((c4_i21 < 1) || (c4_i21 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c4_i21, 1, 256, &c4_o_emlrtBCI, &c4_f_st);
    }

    c4_d13 = (real_T)c4_e_c;
    if (c4_d13 != (real_T)(int32_T)muDoubleScalarFloor(c4_d13)) {
      emlrtIntegerCheckR2012b(c4_d13, &c4_p_emlrtDCI, &c4_f_st);
    }

    c4_i26 = (int32_T)muDoubleScalarFloor(c4_d13);
    if ((c4_i26 < 1) || (c4_i26 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c4_i26, 1, 256, &c4_p_emlrtBCI, &c4_f_st);
    }

    c4_localBins2[c4_i26 - 1] = c4_localBins2[c4_i21 - 1] + 1.0;
    c4_l_a = c4_idx3 + 1;
    c4_h_c = c4_l_a;
    c4_m_a = c4_idx3 + 1;
    c4_i_c = c4_m_a;
    c4_d14 = (real_T)c4_i_c;
    if (c4_d14 != (real_T)(int32_T)muDoubleScalarFloor(c4_d14)) {
      emlrtIntegerCheckR2012b(c4_d14, &c4_q_emlrtDCI, &c4_f_st);
    }

    c4_i30 = (int32_T)muDoubleScalarFloor(c4_d14);
    if ((c4_i30 < 1) || (c4_i30 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c4_i30, 1, 256, &c4_q_emlrtBCI, &c4_f_st);
    }

    c4_d15 = (real_T)c4_h_c;
    if (c4_d15 != (real_T)(int32_T)muDoubleScalarFloor(c4_d15)) {
      emlrtIntegerCheckR2012b(c4_d15, &c4_r_emlrtDCI, &c4_f_st);
    }

    c4_i31 = (int32_T)muDoubleScalarFloor(c4_d15);
    if ((c4_i31 < 1) || (c4_i31 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c4_i31, 1, 256, &c4_r_emlrtBCI, &c4_f_st);
    }

    c4_localBins3[c4_i31 - 1] = c4_localBins3[c4_i30 - 1] + 1.0;
    c4_n_a = c4_idx4 + 1;
    c4_j_c = c4_n_a;
    c4_o_a = c4_idx4 + 1;
    c4_k_c = c4_o_a;
    c4_d16 = (real_T)c4_k_c;
    if (c4_d16 != (real_T)(int32_T)muDoubleScalarFloor(c4_d16)) {
      emlrtIntegerCheckR2012b(c4_d16, &c4_s_emlrtDCI, &c4_f_st);
    }

    c4_i32 = (int32_T)muDoubleScalarFloor(c4_d16);
    if ((c4_i32 < 1) || (c4_i32 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c4_i32, 1, 256, &c4_s_emlrtBCI, &c4_f_st);
    }

    c4_d17 = (real_T)c4_j_c;
    if (c4_d17 != (real_T)(int32_T)muDoubleScalarFloor(c4_d17)) {
      emlrtIntegerCheckR2012b(c4_d17, &c4_t_emlrtDCI, &c4_f_st);
    }

    c4_i33 = (int32_T)muDoubleScalarFloor(c4_d17);
    if ((c4_i33 < 1) || (c4_i33 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c4_i33, 1, 256, &c4_t_emlrtBCI, &c4_f_st);
    }

    c4_y[c4_i33 - 1] = c4_y[c4_i32 - 1] + 1.0;
  }

  while (c4_b_i <= 19200) {
    c4_d1 = (real_T)c4_b_i;
    if (c4_d1 != (real_T)(int32_T)muDoubleScalarFloor(c4_d1)) {
      emlrtIntegerCheckR2012b(c4_d1, &c4_c_emlrtDCI, &c4_f_st);
    }

    c4_i2 = (int32_T)muDoubleScalarFloor(c4_d1);
    if ((c4_i2 < 1) || (c4_i2 > 19200)) {
      emlrtDynamicBoundsCheckR2012b(c4_i2, 1, 19200, &c4_c_emlrtBCI, &c4_f_st);
    }

    c4_idx = c4_imageGrey[c4_i2 - 1];
    c4_a = c4_idx + 1;
    c4_c = c4_a;
    c4_b_a = c4_idx + 1;
    c4_b_c = c4_b_a;
    c4_d3 = (real_T)c4_b_c;
    if (c4_d3 != (real_T)(int32_T)muDoubleScalarFloor(c4_d3)) {
      emlrtIntegerCheckR2012b(c4_d3, &c4_k_emlrtDCI, &c4_f_st);
    }

    c4_i6 = (int32_T)muDoubleScalarFloor(c4_d3);
    if ((c4_i6 < 1) || (c4_i6 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c4_i6, 1, 256, &c4_k_emlrtBCI, &c4_f_st);
    }

    c4_d5 = (real_T)c4_c;
    if (c4_d5 != (real_T)(int32_T)muDoubleScalarFloor(c4_d5)) {
      emlrtIntegerCheckR2012b(c4_d5, &c4_l_emlrtDCI, &c4_f_st);
    }

    c4_i10 = (int32_T)muDoubleScalarFloor(c4_d5);
    if ((c4_i10 < 1) || (c4_i10 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c4_i10, 1, 256, &c4_l_emlrtBCI, &c4_f_st);
    }

    c4_y[c4_i10 - 1] = c4_y[c4_i6 - 1] + 1.0;
    c4_b_i++;
  }

  for (c4_c_i = 0; c4_c_i < 256; c4_c_i++) {
    c4_d_i = 1.0 + (real_T)c4_c_i;
    if (c4_d_i != (real_T)(int32_T)muDoubleScalarFloor(c4_d_i)) {
      emlrtIntegerCheckR2012b(c4_d_i, &c4_f_emlrtDCI, &c4_f_st);
    }

    c4_i3 = (int32_T)c4_d_i;
    if ((c4_i3 < 1) || (c4_i3 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c4_i3, 1, 256, &c4_f_emlrtBCI, &c4_f_st);
    }

    if (c4_d_i != (real_T)(int32_T)muDoubleScalarFloor(c4_d_i)) {
      emlrtIntegerCheckR2012b(c4_d_i, &c4_g_emlrtDCI, &c4_f_st);
    }

    c4_i5 = (int32_T)c4_d_i;
    if ((c4_i5 < 1) || (c4_i5 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c4_i5, 1, 256, &c4_g_emlrtBCI, &c4_f_st);
    }

    if (c4_d_i != (real_T)(int32_T)muDoubleScalarFloor(c4_d_i)) {
      emlrtIntegerCheckR2012b(c4_d_i, &c4_h_emlrtDCI, &c4_f_st);
    }

    c4_i7 = (int32_T)c4_d_i;
    if ((c4_i7 < 1) || (c4_i7 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c4_i7, 1, 256, &c4_h_emlrtBCI, &c4_f_st);
    }

    if (c4_d_i != (real_T)(int32_T)muDoubleScalarFloor(c4_d_i)) {
      emlrtIntegerCheckR2012b(c4_d_i, &c4_i_emlrtDCI, &c4_f_st);
    }

    c4_i9 = (int32_T)c4_d_i;
    if ((c4_i9 < 1) || (c4_i9 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c4_i9, 1, 256, &c4_i_emlrtBCI, &c4_f_st);
    }

    if (c4_d_i != (real_T)(int32_T)muDoubleScalarFloor(c4_d_i)) {
      emlrtIntegerCheckR2012b(c4_d_i, &c4_j_emlrtDCI, &c4_f_st);
    }

    c4_i12 = (int32_T)c4_d_i;
    if ((c4_i12 < 1) || (c4_i12 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c4_i12, 1, 256, &c4_j_emlrtBCI, &c4_f_st);
    }

    c4_y[c4_i12 - 1] = ((c4_y[c4_i3 - 1] + c4_localBins1[c4_i5 - 1]) +
                        c4_localBins2[c4_i7 - 1]) + c4_localBins3[c4_i9 - 1];
  }

  c4_d_st.site = &c4_f_emlrtRSI;
  c4_e_st.site = &c4_l_emlrtRSI;
  c4_f_st.site = &c4_n_emlrtRSI;
  c4_p = true;
  c4_k = 0;
  c4_exitg1 = false;
  while ((!c4_exitg1) && (c4_k < 256)) {
    c4_b_k = 1.0 + (real_T)c4_k;
    c4_x = c4_y[(int32_T)c4_b_k - 1];
    c4_b_x = c4_x;
    c4_b_b = muDoubleScalarIsInf(c4_b_x);
    c4_b1 = !c4_b_b;
    c4_c_x = c4_x;
    c4_c_b = muDoubleScalarIsNaN(c4_c_x);
    c4_b2 = !c4_c_b;
    c4_d_b = (c4_b1 && c4_b2);
    if (c4_d_b) {
      c4_k++;
    } else {
      c4_p = false;
      c4_exitg1 = true;
    }
  }

  if (c4_p) {
    c4_b = true;
  } else {
    c4_b = false;
  }

  if (!c4_b) {
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_cv, 10, 0U, 1, 0U, 2, 1, 32),
                  false);
    c4_c_y = NULL;
    sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_cv1, 10, 0U, 1, 0U, 2, 1, 46),
                  false);
    c4_d_y = NULL;
    sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_cv2, 10, 0U, 1, 0U, 2, 1, 6),
                  false);
    sf_mex_call(&c4_f_st, &c4_emlrtMCI, "error", 0U, 2U, 14, c4_b_y, 14,
                sf_mex_call(&c4_f_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_f_st, NULL, "message", 1U, 2U, 14, c4_c_y, 14, c4_d_y)));
  }

  c4_f_st.site = &c4_n_emlrtRSI;
  c4_b_p = true;
  c4_c_k = 0;
  c4_exitg1 = false;
  while ((!c4_exitg1) && (c4_c_k < 256)) {
    c4_d_k = 1.0 + (real_T)c4_c_k;
    c4_d_x = c4_y[(int32_T)c4_d_k - 1];
    c4_c_p = !(c4_d_x < 0.0);
    if (c4_c_p) {
      c4_c_k++;
    } else {
      c4_b_p = false;
      c4_exitg1 = true;
    }
  }

  if (c4_b_p) {
    c4_b3 = true;
  } else {
    c4_b3 = false;
  }

  if (!c4_b3) {
    c4_e_y = NULL;
    sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_cv3, 10, 0U, 1, 0U, 2, 1, 37),
                  false);
    c4_f_y = NULL;
    sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_cv4, 10, 0U, 1, 0U, 2, 1, 51),
                  false);
    c4_g_y = NULL;
    sf_mex_assign(&c4_g_y, sf_mex_create("y", c4_cv5, 10, 0U, 1, 0U, 2, 1, 6),
                  false);
    sf_mex_call(&c4_f_st, &c4_b_emlrtMCI, "error", 0U, 2U, 14, c4_e_y, 14,
                sf_mex_call(&c4_f_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_f_st, NULL, "message", 1U, 2U, 14, c4_f_y, 14, c4_g_y)));
  }

  c4_num_elems = 0.0;
  for (c4_e_k = 0; c4_e_k < 256; c4_e_k++) {
    c4_f_k = 1.0 + (real_T)c4_e_k;
    if (c4_f_k != (real_T)(int32_T)muDoubleScalarFloor(c4_f_k)) {
      emlrtIntegerCheckR2012b(c4_f_k, &c4_u_emlrtDCI, &c4_d_st);
    }

    c4_i13 = (int32_T)c4_f_k;
    if ((c4_i13 < 1) || (c4_i13 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c4_i13, 1, 256, &c4_u_emlrtBCI, &c4_d_st);
    }

    c4_num_elems += c4_y[c4_i13 - 1];
  }

  c4_localBins1[0] = c4_y[0] / c4_num_elems;
  c4_localBins2[0] = c4_localBins1[0];
  for (c4_g_k = 0; c4_g_k < 255; c4_g_k++) {
    c4_f_k = 2.0 + (real_T)c4_g_k;
    if (c4_f_k != (real_T)(int32_T)muDoubleScalarFloor(c4_f_k)) {
      emlrtIntegerCheckR2012b(c4_f_k, &c4_v_emlrtDCI, &c4_d_st);
    }

    c4_i15 = (int32_T)c4_f_k;
    if ((c4_i15 < 1) || (c4_i15 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c4_i15, 1, 256, &c4_v_emlrtBCI, &c4_d_st);
    }

    c4_d_p = c4_y[c4_i15 - 1] / c4_num_elems;
    c4_d9 = c4_f_k - 1.0;
    if (c4_d9 != (real_T)(int32_T)muDoubleScalarFloor(c4_d9)) {
      emlrtIntegerCheckR2012b(c4_d9, &c4_w_emlrtDCI, &c4_d_st);
    }

    c4_i18 = (int32_T)c4_d9;
    if ((c4_i18 < 1) || (c4_i18 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c4_i18, 1, 256, &c4_w_emlrtBCI, &c4_d_st);
    }

    if (c4_f_k != (real_T)(int32_T)muDoubleScalarFloor(c4_f_k)) {
      emlrtIntegerCheckR2012b(c4_f_k, &c4_x_emlrtDCI, &c4_d_st);
    }

    c4_i20 = (int32_T)c4_f_k;
    if ((c4_i20 < 1) || (c4_i20 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c4_i20, 1, 256, &c4_x_emlrtBCI, &c4_d_st);
    }

    c4_localBins1[c4_i20 - 1] = c4_localBins1[c4_i18 - 1] + c4_d_p;
    c4_d12 = c4_f_k - 1.0;
    if (c4_d12 != (real_T)(int32_T)muDoubleScalarFloor(c4_d12)) {
      emlrtIntegerCheckR2012b(c4_d12, &c4_y_emlrtDCI, &c4_d_st);
    }

    c4_i24 = (int32_T)c4_d12;
    if ((c4_i24 < 1) || (c4_i24 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c4_i24, 1, 256, &c4_y_emlrtBCI, &c4_d_st);
    }

    if (c4_f_k != (real_T)(int32_T)muDoubleScalarFloor(c4_f_k)) {
      emlrtIntegerCheckR2012b(c4_f_k, &c4_ab_emlrtDCI, &c4_d_st);
    }

    c4_i28 = (int32_T)c4_f_k;
    if ((c4_i28 < 1) || (c4_i28 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c4_i28, 1, 256, &c4_ab_emlrtBCI, &c4_d_st);
    }

    c4_localBins2[c4_i28 - 1] = c4_localBins2[c4_i24 - 1] + c4_d_p * c4_f_k;
  }

  c4_mu_t = c4_localBins2[255];
  c4_maxval = rtMinusInf;
  c4_b_idx = 0.0;
  c4_num_maxval = 0.0;
  for (c4_h_k = 0; c4_h_k < 255; c4_h_k++) {
    c4_f_k = 1.0 + (real_T)c4_h_k;
    c4_e_st.site = &c4_m_emlrtRSI;
    if (c4_f_k != (real_T)(int32_T)muDoubleScalarFloor(c4_f_k)) {
      emlrtIntegerCheckR2012b(c4_f_k, &c4_bb_emlrtDCI, &c4_e_st);
    }

    c4_i17 = (int32_T)c4_f_k;
    if ((c4_i17 < 1) || (c4_i17 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c4_i17, 1, 256, &c4_bb_emlrtBCI, &c4_e_st);
    }

    if (c4_f_k != (real_T)(int32_T)muDoubleScalarFloor(c4_f_k)) {
      emlrtIntegerCheckR2012b(c4_f_k, &c4_cb_emlrtDCI, &c4_e_st);
    }

    c4_i19 = (int32_T)c4_f_k;
    if ((c4_i19 < 1) || (c4_i19 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c4_i19, 1, 256, &c4_cb_emlrtBCI, &c4_e_st);
    }

    c4_g_a = c4_mu_t * c4_localBins1[c4_i17 - 1] - c4_localBins2[c4_i19 - 1];
    c4_f_st.site = &c4_o_emlrtRSI;
    c4_h_a = c4_g_a;
    c4_i_a = c4_h_a;
    c4_j_a = c4_i_a;
    c4_k_a = c4_j_a;
    c4_g_c = c4_k_a * c4_k_a;
    if (c4_f_k != (real_T)(int32_T)muDoubleScalarFloor(c4_f_k)) {
      emlrtIntegerCheckR2012b(c4_f_k, &c4_db_emlrtDCI, &c4_d_st);
    }

    c4_i27 = (int32_T)c4_f_k;
    if ((c4_i27 < 1) || (c4_i27 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c4_i27, 1, 256, &c4_db_emlrtBCI, &c4_d_st);
    }

    if (c4_f_k != (real_T)(int32_T)muDoubleScalarFloor(c4_f_k)) {
      emlrtIntegerCheckR2012b(c4_f_k, &c4_eb_emlrtDCI, &c4_d_st);
    }

    c4_i29 = (int32_T)c4_f_k;
    if ((c4_i29 < 1) || (c4_i29 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c4_i29, 1, 256, &c4_eb_emlrtBCI, &c4_d_st);
    }

    c4_sigma_b_squared = c4_g_c / (c4_localBins1[c4_i27 - 1] * (1.0 -
      c4_localBins1[c4_i29 - 1]));
    if (c4_sigma_b_squared > c4_maxval) {
      c4_maxval = c4_sigma_b_squared;
      c4_b_idx = c4_f_k;
      c4_num_maxval = 1.0;
    } else if (c4_sigma_b_squared == c4_maxval) {
      c4_b_idx += c4_f_k;
      c4_num_maxval++;
    }
  }

  c4_e_x = c4_maxval;
  c4_f_x = c4_e_x;
  c4_e_b = muDoubleScalarIsInf(c4_f_x);
  c4_b4 = !c4_e_b;
  c4_g_x = c4_e_x;
  c4_f_b = muDoubleScalarIsNaN(c4_g_x);
  c4_b5 = !c4_f_b;
  c4_isfinite_maxval = (c4_b4 && c4_b5);
  if (c4_isfinite_maxval) {
    c4_b_idx /= c4_num_maxval;
    c4_t = (c4_b_idx - 1.0) / 255.0;
  } else {
    c4_t = 0.0;
  }

  c4_T = c4_t;
  c4_d11 = 255.0 * c4_T;
  for (c4_i22 = 0; c4_i22 < 19200; c4_i22++) {
    c4_BW[c4_i22] = ((real_T)c4_imageGrey[c4_i22] > c4_d11);
  }

  for (c4_i23 = 0; c4_i23 < 19200; c4_i23++) {
    (*chartInstance->c4_BWimage)[c4_i23] = (real_T)c4_BW[c4_i23] * 255.0;
  }

  for (c4_i25 = 0; c4_i25 < 19200; c4_i25++) {
    covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 1U,
                      (*chartInstance->c4_BWimage)[c4_i25]);
  }
}

static void ext_mode_exec_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c4_update_jit_animation_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c4_do_animation_call_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_st = NULL;
  const mxArray *c4_y = NULL;
  c4_st = NULL;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_createcellmatrix(1, 1), false);
  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", *chartInstance->c4_BWimage, 0, 0U, 1,
    0U, 2, 120, 160), false);
  sf_mex_setcell(c4_y, 0, c4_b_y);
  sf_mex_assign(&c4_st, c4_y, false);
  return c4_st;
}

static void set_sim_state_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance, const mxArray *c4_st)
{
  const mxArray *c4_u;
  int32_T c4_i;
  chartInstance->c4_doneDoubleBufferReInit = true;
  c4_u = sf_mex_dup(c4_st);
  c4_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 0)),
                      "BWimage", chartInstance->c4_dv);
  for (c4_i = 0; c4_i < 19200; c4_i++) {
    (*chartInstance->c4_BWimage)[c4_i] = chartInstance->c4_dv[c4_i];
  }

  sf_mex_destroy(&c4_u);
  sf_mex_destroy(&c4_st);
}

const mxArray *sf_c4_flightControlSystem_get_eml_resolved_functions_info(void)
{
  const mxArray *c4_nameCaptureInfo = NULL;
  c4_nameCaptureInfo = NULL;
  sf_mex_assign(&c4_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1, 0U, 2, 0, 1), false);
  return c4_nameCaptureInfo;
}

static void c4_emlrt_marshallIn(SFc4_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c4_nullptr, const char_T *c4_identifier, real_T
  c4_y[19200])
{
  emlrtMsgIdentifier c4_thisId;
  c4_thisId.fIdentifier = (const char_T *)c4_identifier;
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_nullptr), &c4_thisId, c4_y);
  sf_mex_destroy(&c4_nullptr);
}

static void c4_b_emlrt_marshallIn(SFc4_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId,
  real_T c4_y[19200])
{
  real_T c4_b_dv[19200];
  int32_T c4_i;
  (void)chartInstance;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), c4_b_dv, 1, 0, 0U, 1, 0U, 2, 120,
                160);
  for (c4_i = 0; c4_i < 19200; c4_i++) {
    c4_y[c4_i] = c4_b_dv[c4_i];
  }

  sf_mex_destroy(&c4_u);
}

static void init_dsm_address_info(SFc4_flightControlSystemInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc4_flightControlSystemInstanceStruct
  *chartInstance)
{
  chartInstance->c4_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c4_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c4_image = (uint8_T (*)[57600])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c4_BWimage = (real_T (*)[19200])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c4_flightControlSystem_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(4022901135U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3988329551U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2066420051U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2697370192U);
}

mxArray *sf_c4_flightControlSystem_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,2);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.Rgb2grayBuildable"));
  mxSetCell(mxcell3p, 1, mxCreateString(
             "images.internal.coder.buildable.GetnumcoresBuildable"));
  return(mxcell3p);
}

mxArray *sf_c4_flightControlSystem_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("rgb2gray_tbb_uint8");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c4_flightControlSystem_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c4_flightControlSystem(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiBWYGRgYAPSHEDMxAABrFA+IxKGiLPAxRWAuKSyIBUkXlyU7JkCpPMSc8H8xNI"
    "Kz7y0fLD5FgwI89kImM8JFYeAD/aU6RdxQNfPgkU/O5J+ASjfKTwzNzE9Fex+EAAAtgEO8w=="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c4_flightControlSystem_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "s9iznPPHJjVMdnQu7JCtO4G";
}

static void sf_opaque_initialize_c4_flightControlSystem(void *chartInstanceVar)
{
  initialize_params_c4_flightControlSystem
    ((SFc4_flightControlSystemInstanceStruct*) chartInstanceVar);
  initialize_c4_flightControlSystem((SFc4_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c4_flightControlSystem(void *chartInstanceVar)
{
  enable_c4_flightControlSystem((SFc4_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c4_flightControlSystem(void *chartInstanceVar)
{
  disable_c4_flightControlSystem((SFc4_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c4_flightControlSystem(void *chartInstanceVar)
{
  sf_gateway_c4_flightControlSystem((SFc4_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c4_flightControlSystem(SimStruct*
  S)
{
  return get_sim_state_c4_flightControlSystem
    ((SFc4_flightControlSystemInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c4_flightControlSystem(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c4_flightControlSystem((SFc4_flightControlSystemInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c4_flightControlSystem(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc4_flightControlSystemInstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_flightControlSystem_optimization_info();
    }

    mdl_cleanup_runtime_resources_c4_flightControlSystem
      ((SFc4_flightControlSystemInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c4_flightControlSystem(void *chartInstanceVar)
{
  mdl_start_c4_flightControlSystem((SFc4_flightControlSystemInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc4_flightControlSystemInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c4_flightControlSystem(void
  *chartInstanceVar)
{
  mdl_terminate_c4_flightControlSystem((SFc4_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c4_flightControlSystem(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c4_flightControlSystem
      ((SFc4_flightControlSystemInstanceStruct*)sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c4_flightControlSystem_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [21] = {
    "eNrdWM1vG0UUH0chtChERUItByR65IJU2iJaCUETf7SuYmJYJ0Vc0Hj3rXfI7Mx2Puy4Emcu/C0",
    "c+kdwQ+LIiSNnDhw48ma9dszGJDtrqQmstNm8tX/z3vz29z7WpNHtETx28PzqFiFbeL2G5waZHa",
    "8VdmPpnN3fJJ8Udv8NQsKEKtMVsST+RygjGIEIbByzE0+ssGmfKprqGn4FTeFL0JJbw6TwC56JG",
    "BSIEBfIpDJefjVLLWfiuGNF6DzrZwkLkyCRlkd7uCCNDgSf/pvfzJo+emwxBaHpAEQmUdKOkg6n",
    "o/NZUGbSTCA81jb15kqDCWzmtqp7lhuWcWifQNgV2lBkQV+w38BQA01z4q0QpoM5WqYZZ1RU5zq",
    "hOoAM1WHgMIvw74E1yF5Fv+hvyAQ1UjHK2ylvOoVXxPY5xtlDWXNvnk1qWjC0oxETI8eusikI3D",
    "/qpAJXcVOOQdERHAjPHHS7a5/kD3ihy+o52HWyrJWDNp09FV0Lm/ttj5EhXdNvJxRNyrn2ww5kt",
    "g9j4Ln/FjW0Bnbm3wOsNYsG8ogqlwWemWQFe26hwDaliFj1JzwuofKC+zkWzwpwljpJQYQ0L0Jf",
    "LHSRJq02Mm1iGrX29yv6O4vtCgMqpiFUrn2KMg0YcK4rT78R03TIHRpZMvkuK68AojaU6NiK1kS",
    "qY+TYt8iecuUywQ8N0QhaYCAvGG1U9xHltmLMqcYK5+RxqLFi+flFrMufWuCQhglErp8wDj3Qbg",
    "FduT5jH9nF3Y6ZmbZAh4plVTPJaoiwkTiWBtMMDsWxkBPRUTINiongHF0BYNWgSmBb2MO2pKYdD",
    "L5a1AqeD5yy6oxnKTWcDp02HoPAzuL26johDTGr2gJHNwxoHWzAXmBrF5ppg+PUtJ3nQJTPo+80",
    "/ObRtwr73iKXunqg8ElRbMMCJ6XdYT7swYClkN8IKM4UM7M4nN875NTv9Y3z/W7gf42aOLIm7sk",
    "SbnMFPzeXcDcKO7z/TczZKHFF2CjJgynynp6NY7sC36viL+PIGdwpz/Pr+0v4xgq/ZOm6zvN5tI",
    "R7s+Rns4TbKjj74acfX/4GD7//88HOy5+/+317Hf+/eOp5p7Dfnc9niw42PlPkq+jhVkkPztYP2",
    "QvR7z95+u1RLxJf2I+fNs3B/cf5erc9453fv42nwQKX10sVdqPiXcvZ1M7eAdz6D5bi3bpg/etL",
    "eiLkj8/Ww7/9qIxfxdfrJb6cvfeMpdgu/qHfq14vLqs+XWacVepX4xXjyCvGrbs/37r8X//+nXP",
    "qASl9/8YV3kf5Wrc/X7V9/Ur8+tF7hf3p4t25mTAerZjei49xwI5Xffo/0fdfnvzN54W246/48e",
    "/re7uC8imO67PXoeJ2X7nfnRYfKaB69TvRZfQhsmL+W9Xvt0v57ewJE5Gc6A8+vPvR3XX62t+kG",
    "APa",
    ""
  };

  static char newstr [1429] = "";
  newstr[0] = '\0';
  for (i = 0; i < 21; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c4_flightControlSystem(SimStruct *S)
{
  const char* newstr = sf_c4_flightControlSystem_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(2997798540U));
  ssSetChecksum1(S,(2268685790U));
  ssSetChecksum2(S,(2987276532U));
  ssSetChecksum3(S,(216432077U));
}

static void mdlRTW_c4_flightControlSystem(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c4_flightControlSystem(SimStruct *S)
{
  SFc4_flightControlSystemInstanceStruct *chartInstance;
  chartInstance = (SFc4_flightControlSystemInstanceStruct *)utMalloc(sizeof
    (SFc4_flightControlSystemInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc4_flightControlSystemInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c4_flightControlSystem;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c4_flightControlSystem;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c4_flightControlSystem;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c4_flightControlSystem;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c4_flightControlSystem;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c4_flightControlSystem;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c4_flightControlSystem;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c4_flightControlSystem;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c4_flightControlSystem;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c4_flightControlSystem;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c4_flightControlSystem;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c4_flightControlSystem;
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

  mdl_setup_runtime_resources_c4_flightControlSystem(chartInstance);
}

void c4_flightControlSystem_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c4_flightControlSystem(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c4_flightControlSystem(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c4_flightControlSystem(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c4_flightControlSystem_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
