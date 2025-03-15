/* Include files */

#include "flightControlSystem_cgxe.h"
#include "m_TGFryhn5FIAXu3pMKIfouD.h"

unsigned int cgxe_flightControlSystem_method_dispatcher(SimStruct* S, int_T
  method, void* data)
{
  if (ssGetChecksum0(S) == 528931638 &&
      ssGetChecksum1(S) == 4191319554 &&
      ssGetChecksum2(S) == 2433917463 &&
      ssGetChecksum3(S) == 1471600002) {
    method_dispatcher_TGFryhn5FIAXu3pMKIfouD(S, method, data);
    return 1;
  }

  return 0;
}
