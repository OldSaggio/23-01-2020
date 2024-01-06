#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

bool isNotVuoto(const double* v, size_t n)
{
	for (size_t i = 0; i < n; i++)
		if (v[i] != 0)
			return true;

	return false;
}

double entropia(const double* v, size_t n)
{
	if (v != NULL && n != 0)
		if (isNotVuoto(v, n) == true)
		{
			double sum = 0;
			for (size_t i = 0; i < n; i++)
				sum += v[i] * log2(v[i]);

			return sum * (-1);
		}

	return 0;
}