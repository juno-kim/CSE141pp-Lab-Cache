#include <stdio.h>
#include <stdlib.h>
#include <archlab.h>


/* 
Square Matrix Multiplication function
a, b: square matrices of the same size
d: destination matrix
size: row/column size of a, b 
(row and column size are the same in a square matrix)
*/
void sqmm(double * d, double * a, double * b, uint64_t size)
{
	for (uint64_t r = 0; r < size; r += 1) {
		for (uint64_t c = 0; c < size; c += 1) {
			for (uint64_t i = 0; i < size; i += 1) {
				d[r + size*c] += a[r + size*i] * b[i + size*c];
			}
		}
	}
}
