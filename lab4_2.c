#include <stdio.h> 
#include "mpi.h"
#include <stdlib.h> 
int main(int argc, char **argv) 
{ 
 int ntasks, rank;
 MPI_Init(&argc, &argv); 
 MPI_Comm_size(MPI_COMM_WORLD, &ntasks); 
 MPI_Comm_rank(MPI_COMM_WORLD, &rank);

 int sendto = rank + 1;
 int result;
 MPI_Scan(&sendto, &result, 1, MPI_INT, MPI_PROD, MPI_COMM_WORLD); 
 printf ("Rank[%d] is  %d\n",  rank, result); 
 MPI_Finalize();
}
