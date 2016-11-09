#include "fuckthisshit.h"

kms derivative(kms k, int n)
{
	kms retval;
	for (int j = 0; j <= n; ++j)
	{
		for (int i = 0; i < k.size; ++i)
		{
			retval.K[i] = (k.K[i + 1] - k.K[i]);
		}
	}
	
}
