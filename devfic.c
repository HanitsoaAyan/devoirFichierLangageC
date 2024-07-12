#include <stdio.h>
#include "hanitsoa.h"

int main(int argc, char *argv[])
{
	int n;
	FILE *fic = NULL;
	tail(fic);

	nombre(&n);
	tail_n(fic, n);
	return(0);
}
