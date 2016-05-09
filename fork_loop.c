/* Filefork loop.c */

#include <stdio.h>

void main(){

	int i;

	if(fork())
		for (i=0;i<100000;i++)
			printf("**	PARENT %d\n", i);
		else
			for(i=0;i<100000; i++)
				printf("  **  CHILD %d\n", i);
}	

/* Key point is that parent and child output will be interleaved in a non-deterministic way.*/


