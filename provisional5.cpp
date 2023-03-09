

#include <iostream>
#include <mpi.h>



int main(int argc, char** argv) {
    MPI_Init(&argc, &argv);

    int rank, size;
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    int localArray[]  = {1, 2, 3, 4};
    int globalSum;

   

    MPI_Finalize();
    return 0;
}
