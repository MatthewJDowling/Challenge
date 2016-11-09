#include "SuperSum.h"

int SuperSum(int k, int n)
{
	int tmpK = 0;
	int tmpN = 0;
	int tmpRet = 0;
	if (k <= 0)
	{
		return 0;
	}
	else
	{
		
		if (k == 1)
		{
			for (int i = 0; i <= n; ++i)
			{
				tmpN += i;
			}
			tmpRet += tmpN;
		}
		else
		{
			tmpK = k - 1;
			for (int i = 0; i <= n; ++i)
			{
				tmpRet += SuperSum(tmpK, i);
			}
		}

	}
	
	return tmpRet;
}
