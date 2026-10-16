#ifndef _PSTAT_H_  // Checks if PSTAT_H has not been defined
#define _PSTAT_H_  // Defines PSTAT_H to prevent duplicate includes

#include "param.h" // Gives access to NPROC

struct pstat {  // Creates a structure to store process information

    int inuse[NPROC];  // Stores 1 if a process slot is used, 0 if not

    int pid[NPROC];  // Stores the process ID for each process slot

    int runtime[NPROC];  // Stores how many times each process has run

    int pass[NPROC];     // Stores each process's pass value
    
    int passTotal;       // Stores the total accumulated pass

};

#endif  
