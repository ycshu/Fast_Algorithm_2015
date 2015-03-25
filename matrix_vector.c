#include <stdio.h>
#include <math.h>
#include <time.h>
#define DEBUG 0
#include<stdlib.h>
int main()
{
<<<<<<< HEAD
	int i, j, N=5;
	double x[N],b[N];//,tic,toc;
	clock_t tic,toc;
=======
	int i, j, N=10000;
	double *x,*b,tic,toc; // *x,*b 一維指標 
	double **A; 		  // **A 二維指標

	// x[N], b[N], A[N][N] 動態memory的開法
	// 靜態記憶體有限制，動態記憶體沒有
	// 因此在靜態記憶體的時候，N=1000的時候就沒辦法做了，但動態記憶體可以 
	// 缺點:記憶體不一定會全部排在一起，一次只開N個 
	x = (double *)malloc(N*sizeof(double)) ; 
	b = (double *)malloc(N*sizeof(double)) ; 
	A = (double **)malloc(N*sizeof(double*)) ; 
	for ( i=0 ; i<N ; ++i)
	{
		A[i] = (double *)malloc(N*sizeof(double)) ; 
	}
	/*
	另一種二為矩陣的動態記憶體寫法，好處，記憶體只要開一次(一次開N^2個)，且全部排在一起 
	A[0] = (double*) malloc(N*N*sizeof(double)) ; 
	for ( i = 1 ; i<N ; ++i )
	{
	    A[i] = A[ i-1] +N ; 
	}
	*/ 
>>>>>>> origin/C14011073
	
	tic = clock();
	for(i=0;i<N;++i)
	{
		x[i] = cos(i*M_PI/N);
		printf("%f\n",x[i]);
	}
	
	for(i=0;i<N;++i)
	{
		for(j=0;j<N;++j)
		{
			A[i][j] = 1.0/(i+j+1);
			printf("%f\t",A[i][j]);
			if(j%5 == 4) printf("\n");
		}
	}
<<<<<<< HEAD
	printf("\n");
=======
	/* b = A*x
		b[0] = A[0][0]*x[0]+A[0][1]x[1]+...+A[0][N-1]*x[N-1]
		...
		general form 
		b[i] = A[i][0]*x[0]+A[i][1]x[1]+...+A[i][N-1]*x[N-1]
		b[N-1] = A[N-1][0]*x[0]+A[N-1][1]x[1]+...+A[N-1][N-1]*x[N-1]
		--> b[i] = 0.0 ; 
		
	*/
>>>>>>> origin/C14011073
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
