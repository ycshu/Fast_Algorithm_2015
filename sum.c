#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	clock_t tic, toc;
	int i, N, s;		// i, N, s are integers.
	int a[100];			// a[0], a[1], a[2], ..., a[99] are integers
	int *b;				// b is a pointer of integer
	N = 1000000000;
	tic = clock();
	for(i=0;i<100;++i)
	{
		a[i] = i*i;		// a[i] = i^2, 0 <= i < 100
	}
	b = a;
	for(i=0;i<10;++i)
	{
		b[i] = i;		// a[i] = i, 0 <= i < 10
	}
	b = a + 10;
	for(i=0;i<10;++i)
	{
		b[i] = -1-i;	// a[i+10] = 11-i, 0 <= i < 10
	}
	for(i=0;i<25;++i)
	{
		printf("%d,", a[i]);
	}
	printf("\n");
	// create x[0], x[1], x[2], ..., x[9], b = x; 
	b = (int *) malloc(10*sizeof(int));
	for(i=0;i<25;++i)
	{
		b[i] = i;
	}
	
	
	toc = clock();
	printf("Time: %f\n", 1.0*(toc - tic)/CLOCKS_PER_SEC);
	return 0;
}
