#include "CLIcore.h"

#include "cudacomp/cudacomp.h"
#include "AOloopControl/AOloopControl.h"
#include "linARfilterPred/linARfilterPred.h"
#include "AOloopControl_DM/AOloopControl_DM.h"
#include "AtmosphericTurbulence/AtmosphericTurbulence.h"
#include "AtmosphereModel/AtmosphereModel.h"
#include "OptSystProp/OptSystProp.h"
#include "psf/psf.h"
#include "ZernikePolyn/ZernikePolyn.h"
#include "WFpropagate/WFpropagate.h"
#include "image_basic/image_basic.h"
#include "image_filter/image_filter.h"
#include "kdtree/kdtree.h"
#include "image_gen/image_gen.h"
#include "linopt_imtools/linopt_imtools.h"
#include "statistic/statistic.h"
#include "fft/fft.h"
#include "info/info.h"
#include "COREMOD_arith/COREMOD_arith.h"
#include "COREMOD_iofits/COREMOD_iofits.h"
#include "COREMOD_memory/COREMOD_memory.h"
#include "COREMOD_tools/COREMOD_tools.h"
#include "00CORE/00CORE.h"


extern DATA data;

int init_modules()
{
  init_cudacomp();
  init_AOloopControl();
  init_linARfilterPred();
  init_AOloopControl_DM();
  init_AtmosphericTurbulence();
  init_AtmosphereModel();
  init_OptSystProp();
  init_psf();
  init_ZernikePolyn();
  init_WFpropagate();
  init_image_basic();
  init_image_filter();
  init_kdtree();
  init_image_gen();
  init_linopt_imtools();
  init_statistic();
  init_fft();
  init_info();
  init_COREMOD_arith();
  init_COREMOD_iofits();
  init_COREMOD_memory();
  init_COREMOD_tools();
  init_00CORE();

return 0;
}
