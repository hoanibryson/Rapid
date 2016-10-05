// Timer.h

#ifndef _TIMER_h
#define _TIMER_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include <stdint.h>
#endif

bool Timer_Expired(uint64_t currentMs, uint64_t startMs, uint64_t timeoutMs);

#endif

