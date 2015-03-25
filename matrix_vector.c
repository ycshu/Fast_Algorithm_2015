#include <stdio.h>
#include <math.h>
#include <time.h>
#define DEBUG 0
int main()
{
	int i, j, N=5;
	double x[N],b[N];//,tic,toc;
	clock_t tic,toc;
	
	tic = clock();
	for(i=0;i<N;++i)
	{
		x[i] = cos(i*M_PI/N);
		printf("%f\n",x[i]);
	}
	double A[N][N];
	for(i=0;i<N;++i)
	{
		for(j=0;j<N;++j)
		{
			A[i][j] = 1.0/(i+j+1);
			printf("%f\t",A[i][j]);
			if(j%5 == 4) printf("\n");
		}
	}
	printf("\n");
	for(i=0;i<N;++i)
	{
		b[i] = 0.0;
		for(j=0;j<N;++j)
		{
			b[i] = b[i] + A[i][j]*x[j];
		}
		printf("%f\n",b[i]);
	}
	toc = clock();
	printf("computational time: %f seconds\n",1.0*(toc-tic)/CLOCKS_PER_SEC);
	#if DEBUG
	for(i=0;i<N;++i)
	{
		printf("b[%d]=%f\n",i,b[i]);
	}
	#endif
	
	system("Pause");
	return 1;
}
