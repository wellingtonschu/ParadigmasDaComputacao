#include "stdafx.h"


int main()
{
	int k = 6;
	int j = 0;

	switch (k)
	{
	case 1: case 2:
		j = 2 * k - 1;
		break;

	case 3: case 5:
		j = 3 * k + 1;
		break;

	case 4:
		j = 4 * k + 1;
		break;

	case 6: case 7: case 8:
		j = k - 2;
		break;

	}

	printf(j);
	
	return 0;
}
