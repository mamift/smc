#include <windows.h>
#include "ShimLoad.h"

ExternC PfnDliHook __pfnDliNotifyHook = ShimDelayLoadHook;

