// 
// 
// 

#include "Timer.h"

bool Timer_Expired(uint64_t currentMs, uint64_t startMs, uint64_t timeoutMs)
{
	if ((currentMs - startMs) >= timeoutMs)
	{
		return true;
	}
	return false;
}