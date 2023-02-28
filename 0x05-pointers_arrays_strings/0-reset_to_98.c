#include <stdio.h>

/* Program to take a pointer to an int, and update the value it points to
 * Author : dev_zee
 * Main : Takes control at the beginning of code compilation and execution
 */

void reset_to_93(int *p) {
       	 int n = 402;

             p = &n;

	    *p = 402;
}
