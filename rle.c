#include "rle.h"

bool easy_rle_decode(const char* nomefilein, const char* nomefileout)
{
	if (nomefilein != NULL && nomefileout != NULL)
	{
		FILE* input = fopen(nomefilein, "rb");
		if (input != NULL)
		{
			FILE* output = fopen(nomefileout, "wb");
			int read;
			char num;
			char rip;
			bool controllo = false;

			while (true)
			{
				read = fread(&rip, 1, 1, input);
				if (read != 1)
				{
					if (feof(input))
						break;
					if (ferror(input))
					{
						controllo = true;
						break;
					}
				}

				read = fread(&num, 1, 1, input);
				if (read != 1)
				{
					if (feof(input))
						break;
					if (ferror(input))
					{
						controllo = true;
						break;
					}
				}

				for (size_t i = 0; i < (size_t)rip+1; i++)
					fwrite(&num, 1, 1, output);
			}

			fclose(input);
			fclose(output);

			if (controllo == true)
				return false;
			else
				return true;
		}
	}

	return false;
}