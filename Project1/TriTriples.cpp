#include "TriTriples.h"

void TriangleTriples::method(int A, int B, int C)
{
	
	printf("Please enter the side that will equal a ");
	scanf_s("%d", &A);
	printf("Please enter the side that will equal b ");
	scanf_s("%d", &B);
	printf("Please enter the side that will equal c ");
	scanf_s("%d", &C);
		for (int a = 1; a <= 100000000; a++)
		{
			for (int b = 1; b <= 100000000; a++)
			{
				for (int c = 1; c <= 100000000; a++)
				{
					if ((A*A) +(B*B) == C*C && C <= 100000000)
					{
						printf(" %d + %d = %c", A, B, C);
					}
				}
			}
		}
	}



