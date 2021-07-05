// obtaining the remainder of a number when divided by a power of two
//considering S modulo N, where N -> power of two

int rem = S^N;
// example, S=7 (111) and N=4 (100), the remainder is 3 (011).


// turn off the a particular bit in a number, say S
s &= ~(1<<n);
// here, the nth bit will be turned off


// toggle the nth bit of number S, while everything else stays off:
s=s^(1<<n);

// determine if a number is a power of two
if (s & (s-1) == 0) //then it is a power of two

// turn off the last bit in a number
s & (s-1);
// this is guaranteed to turn off the last bit

// turn on the last zero in a number
s |= s+1;
// this will add one (perhaps a chain of additions of one), and thereby making sure that the next zero is turned on

//turn off the last consecutive ones in a number
s &= s+1;

// turn on the last consecutive zeroes in a number
s |= s-1;
