#include "usage.h"

#include <stdio.h>
#include <stdlib.h>


void
usage (int status)
{
	if (status != EXIT_SUCCESS)
	{
		fprintf(stderr, "USAGE: menu OPT_1 OPT_2 OPT_3 ... OPT_N number_of_digits \n\n"
			"where number_of_digits indicates the maximum number of digits the \
							choice box can contain\n.");
		exit(status);
	}

	else
	{
		fprintf(stdout, "USAGE: menu OPT_1 OPT_2 OPT_3 ... OPT_N number_of_digits \n\n"
			"where number_of_digits indicates the maximum number of digits the \
							choice box can contain\n.");
		exit(status);
	}
}
