/*
 * calc_primo.c
 *
 *  Created on: Mar 5, 2016
 *      Author: matheus
 */

#include <omp.h>
#include <stdio.h>
#include <stdlib.h>

int primo(int n) {

	int nthreads, tid, i, chunk;

	#pragma omp parallel shared(a,b,c,nthreads,chunk) private(i,tid)
	  {
	  tid = omp_get_thread_num();
	  if (tid == 0)
	    {
	    nthreads = omp_get_num_threads();
	    printf("Number of threads = %d\n", nthreads);
	    }
	  printf("Thread %d starting...\n",tid);

	  #pragma omp for schedule(dynamic,chunk)
		for(i = 3; i < n; i +=2) {
			if (n % i == 0)
				return 0;
		}

	  }  /* end of parallel section */

	  return 1;
}
