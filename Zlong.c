#include "def.h"
#include <math.h>

#define X (5)
#define Ceilings (X*X)

int needbit;

long long unsigned int mkSig(signed short ar[X])
{
	int i;
	long long unsigned int n=0;
	for(i=0; i<X; i++){
		n>>=needbit;
		//n=((0xffffffffffffffff) & n) | (1ULL<<(64-8))*ar[i];
		n|=(1ULL<<(64-8))*ar[i];
		printf("%llu\n", n);
	}
	return n;
}

int main()
{
	signed short ar[5]={1,2,3,4,5};
	long long unsigned int res=0;
	needbit=ceil(log(Ceilings)/log(2));
	res=mkSig(ar);
	//printf("%llu\n", res);
	return 0;
}
