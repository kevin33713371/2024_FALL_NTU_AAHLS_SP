#include "libspir_types.h"
#include "hls_stream.h"
#include "xcl_top_defines.h"
#include "ap_axi_sdata.h"
#include "xcl_top_datamovers.h"
#define EXPORT_PIPE_SYMBOLS 1
#include "cpu_pipes.h"
#undef EXPORT_PIPE_SYMBOLS
#include "xcl_half.h"
#include <cstddef>
#include <vector>
#include <complex>
#include <pthread.h>
using namespace std;

extern "C" {

void rtl_kernel_wizard_0(size_t axi00_ptr0);

static pthread_mutex_t __xlnx_cl_rtl_kernel_wizard_0_mutex = PTHREAD_MUTEX_INITIALIZER;
void __stub____xlnx_cl_rtl_kernel_wizard_0(char **argv) {
  void **args = (void **)argv;
  size_t axi00_ptr0 = *((size_t*)args[0+1]);
 pthread_mutex_lock(&__xlnx_cl_rtl_kernel_wizard_0_mutex);
  rtl_kernel_wizard_0(axi00_ptr0);
  pthread_mutex_unlock(&__xlnx_cl_rtl_kernel_wizard_0_mutex);
}
void krnl_vadd(size_t a, size_t b, size_t c, unsigned int n_elements);

static pthread_mutex_t __xlnx_cl_krnl_vadd_mutex = PTHREAD_MUTEX_INITIALIZER;
void __stub____xlnx_cl_krnl_vadd(char **argv) {
  void **args = (void **)argv;
  size_t a = *((size_t*)args[0+1]);
  size_t b = *((size_t*)args[1+1]);
  size_t c = *((size_t*)args[2+1]);
  unsigned int n_elements = *((unsigned int*)args[3+1]);
 pthread_mutex_lock(&__xlnx_cl_krnl_vadd_mutex);
  krnl_vadd(a, b, c, n_elements);
  pthread_mutex_unlock(&__xlnx_cl_krnl_vadd_mutex);
}
}
