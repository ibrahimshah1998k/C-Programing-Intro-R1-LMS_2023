#include <stdio.h>
#include "bit_ops.h"

// Return the nth bit of x.
// Assume 0 <= n <= 31
unsigned get_bit(unsigned x, unsigned n) {

	return x>>n&1;
}
// Set the nth bit of the value of x to v.
// Assume 0 <= n <= 31, and v is 0 or 1
void set_bit(unsigned * x,unsigned n,unsigned v) {

	unsigned a = 1;
	unsigned b = 0;
	
	b = ~b; 
	b = b<<(n+1);
	

	v = ~v;
	v = v << n;
	v = ~v;
	v = v|b;
	

	a = a << n;
	(*x) = (*x)|a;
	
	(*x) = (*x)&v;
}
// Flip the nth bit of the value of x.
// Assume 0 <= n <= 31
void flip_bit(unsigned * x,unsigned n) {

	(*x) ^= (1 << n);
}
