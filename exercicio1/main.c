/*
 * main.c
 *
 *  Created on: Mar 5, 2016
 *      Author: matheus
 */


#include <stdio.h>
#include <math.h>
#include "calc_primo.h"
#include "calc_primo_opt.h"


int main (int argc, char *argv[])
{
  int n;
  int i = atoi(argv[1]);

  n = primo_opt(i);

  printf("%d é primo.\n", n);

  return 0;

}
