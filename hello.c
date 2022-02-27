/* Hello World Program
 * *  K Djemame
 * * February 2022
 * */

#include <stdio.h>
#include "mpi.h"
main(int argc, char** argv)
{
   int noprocs, nid;

   MPI_Init(&argc, &argv);
   MPI_Comm_size(MPI_COMM_WORLD, &noprocs);
   MPI_Comm_rank(MPI_COMM_WORLD, &nid);

   char		processorname[100];
   int		namelen;

   MPI_Get_processor_name( processorname, &namelen );
        
   printf("Hello from processor %i of %i running on machine %s\n",nid,noprocs,processorname);

   fflush(stdout);

   MPI_Finalize();
}