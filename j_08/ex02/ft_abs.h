#ifndef __FT_ABS_H__

#define __FT_ABS_H__

#include <unistd.h>

#define ABS(Value)	(((Value) < 0) ? -(Value) : (Value))

#endif
