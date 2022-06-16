#include <stdio.h>
#include "mpi.h"

int main (int argc, char **argv)
{
	int numtasks, rank, sendCount, revCount, source;
	float sendbuf[SIZE][SIZE] = {{1.0, 2.0, 3.0, 4.0},
					{5.0, 6.0, 7.0, 8.0},
					{9.0, 10.0, 11.0, 12.0},
					{13.0, 14.0, 15.0, 16.0}};
	float recbuf[SIZE];
	MPI_Init[SIZE];
	MPI_Comm_size(MPI_COMM_WORLD, &numtasks);
 	MPI_Comm_rank(MPI_COMM_WORLD, &rank);
	if (SIZE == numtasks)
	{
		source = 1; sendcount = SIZE; revcount = SIZE;
		MPI_Scatter(sendbuf, sendcount, MPI_Float, recbuf, revCount, MPI_Float, source, MPI_COMM_WORLF);
		printf("Rank %d result: %f %f %f %f\n", rank, recbuf[0], recbuf[1], recbuf[2], recbuf[3]);
	}
	else
	{
		printf ("Must specified -np %d \n", SIZE);
	}
}
}
