#include <stdio.h>
#include <time.h>

int main()
{
	clock_t tic, toc;
	int i, N, s;
	N = 1000000000;
	tic = clock();
	for(i=0;i<N;++i)
	{
		s = 123456789*987654321;
	}
	toc = clock();
	printf("Time: %f\n", 1.0*(toc - tic)/CLOCKS_PER_SEC);
	return 0;
}
