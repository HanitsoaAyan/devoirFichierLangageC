#include <stdio.h>
#include "hanitsoa.h"

int main(int argc, char *argv[])
{
	int n;
	FILE *fic = NULL;
	tail(fic,argv[1]);

	nombre(&n);
	tail_n(fic,n,argv[1]);
	tail_v(fic,n,argv[1]);
	return(0);
}
