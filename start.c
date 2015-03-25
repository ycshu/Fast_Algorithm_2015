#include <stdio.h>	// 標準的輸入輸出 
#include <math.h>	// 數學系學到的函數們 

int main()
{
	// <--註解
	/* <--很多注解的開始 
	   中間可以打很多注解 
	很多注解的結束--> */
	// 變數宣告區 
	int i, j, k;	     // i, j, k \in Z
	double a, b, c;      // a, b, c \in R
	double x[10], u[10]; // x is a vector: x[0], x[1], x[2],...,x[9]
	double A[10][10];    // A is a matrix: A[0][0], A[0][1], ..., A[0][9], ... A[9][9]

	// Moving average, example, 三個平均 
	/* u[0] = (x[0]+x[1]+x[2])/3
	   u[1] = (x[1]+x[2]+x[3])/3
	   u[2] = (x[2]+x[3]+x[4])/3
	   ... General form
	   u[i] = (x[i]+x[i+1]+x[i+2])/3
	   ... Given in program
	   u[?] = (x[7]+x[8]+x[9])/3 
	*/
	// for-loop 
	// for(initial condition; end condition; action at each step)
	for(i=0;i<=10;i=i+1)
	{
		x[i] = cos(2*i*M_PI/10);
		//printf("x[%d]=%f\n", i, x[i]);
	}
	for(i=0;i<=7;i=i+1)
	{
		u[i] = (x[i]+x[i+1]+x[i+2])/3;
	}
	/*
	   3U = [1 1 1 0 0 0 0 ... 0] x[0]
	        [0 1 1 1 0 0 0 ... 0] x[1]
	        [ 
	*/
	// 以上的是baby problem.....
	
	children_problem(20);
	youth_problem(400,100);
	return 1314520;
}
int children_problem(int N)
{
	int i, j, k;	     // i, j, k \in Z
	double a, b, c;      // a, b, c \in R
	double x[N], u[N]; // x is a vector: x[0], x[1], x[2],...,x[9]
	double A[N][N];    // A is a matrix: A[0][0], A[0][1], ..., A[0][9], ... A[9][9]
	//printf("I am a baby-%d!\n",N);
	// Moving average, example, 三個平均 
	/* u[0] = (x[0]+x[1]+x[2])/3
	   u[1] = (x[1]+x[2]+x[3])/3
	   u[2] = (x[2]+x[3]+x[4])/3
	   ... General form
	   u[i] = (x[i]+x[i+1]+x[i+2])/3
	   ... Given in program
	   u[?] = (x[7]+x[8]+x[9])/3 
	*/
	// for-loop 
	// for(initial condition; end condition; action at each step)
	for(i=0;i<N;i=i+1)
	{
		x[i] = cos(2*i*M_PI/N);
		//printf("x[%d]=%f\n", i, x[i]);
	}
	for(i=0;i<=N-3;i=i+1)
	{
		u[i] = (x[i]+x[i+1]+x[i+2])/3;
	}
	/*
	   3U = [1 1 1 0 0 0 0 ... 0] x[0]
	        [0 1 1 1 0 0 0 ... 0] x[1]
	        [ 
	*/
	// 以上的是children problem.....
	 
	return 1314520;
}
int youth_problem(int N, int K)
{
	int i, j, k;	     // i, j, k \in Z
	double a, b, c;      // a, b, c \in R
	double x[N], u[N]; // x is a vector: x[0], x[1], x[2],...,x[9]
	double A[N][N];    // A is a matrix: A[0][0], A[0][1], ..., A[0][9], ... A[9][9]
	printf("I am a youth-%d,%d!\n",N,K);
	// Moving average, example, K個平均 
	/* u[0] = (x[0]+x[1]+...+x[K-1])/K
	   u[1] = (x[1]+x[2]+...+x[K])/K
	   u[2] = (x[2]+x[3]+...+x[K+1])/K
	   ... General form
	   u[i] = (x[i]+x[i+1]+...+x[i+K-1])/K
	   ... Given in program
	   u[N-K] = (x[N-K]+x[...]+...+x[N-1])/K
	*/
	// for-loop 
	// for(initial condition; end condition; action at each step)
	for(i=0;i<N;i=i+1)
	{
		x[i] = cos(2*i*M_PI/N);
		//printf("x[%d]=%f\n", i, x[i]);
	}
	for(i=0;i<=N-K;i=i+1)
	{
		/*
			u[i] = x[i]+x[i+1]+x[i+2]+...+x[i+K-1] 
			Step 0: u[i] = x[i]
			Step 1: u[i] = x[i]+x[i+1] = u[i]+x[i+1]
			Step 2: u[i] = x[i]+x[i+1]+x[i+2] = u[i]+x[i+2]
			Step 3: u[i] = x[i]+x[i+1]+x[i+2]+x[i+3] = u[i]+x[i+3]
			Step j: u[i] = ... = u[i] + x[i+j]
			
		*/
		u[i] = x[i];		// Step 0
		for(j=1;j<K;j=j+1)  // j=1,2,...,K-1
		{
			u[i] = u[i]+x[i+j];
		}
		u[i] = u[i]/K;
	}

	// 以上的是youth problem.....
	// (K-1)*N 個加法
	// 有辦法變少嗎?
	 
	 
	return 1314520;
}
int university_problem(int N, int K)
{
	int i, j, k;	     // i, j, k \in Z
	double a, b, c;      // a, b, c \in R
	double x[N], u[N]; // x is a vector: x[0], x[1], x[2],...,x[9]
	double A[N][N];    // A is a matrix: A[0][0], A[0][1], ..., A[0][9], ... A[9][9]
	printf("I am a university-%d,%d!\n",N,K);
	// Moving average, example, K個平均 
	/* u[0] = (x[0]+x[1]+...+x[K-1])/K
	   u[1] = (x[1]+x[2]+...+x[K])/K
	   u[2] = (x[2]+x[3]+...+x[K+1])/K
	   思考 u[0] --> u[1]?
	   u[1] = u[0]+(x[K]-x[0])/K
	   u[2] = u[1]+(x[K+1]-x[1])/K
	   ...
	   ... General form
	   u[i] = u[i-1]+(x[K+i-1]-x[i-1])/K
	   ... Given in program
	   u[N-K] = (x[N-K]+x[...]+...+x[N-1])/K
	*/
	// for-loop 
	// for(initial condition; end condition; action at each step)
	for(i=0;i<N;i=i+1)
	{
		x[i] = cos(2*i*M_PI/N);
		//printf("x[%d]=%f\n", i, x[i]);
	}

	i = 0;	
	u[i] = x[i];		// Step 0
	for(j=1;j<K;j=j+1)  // j=1,2,...,K-1
	{
		u[i] = u[i]+x[i+j];
	}
	u[i] = u[i]/K;
	for(i=1;i<=N-K;i=i+1)
	{
		u[i] = u[i-1]+(x[K+i-1]-x[i-1])/K;		// Step 0
	}

	// 以上的是university problem.....
	// (K-1) + 2(N-1) 個加法
	// 有辦法變少嗎?
	return 1314520;
}
int graduated_problem(int N, int K)
{
	int i, j, k;	     // i, j, k \in Z
	double a, b, c;      // a, b, c \in R
	double x[N], u[N]; // x is a vector: x[0], x[1], x[2],...,x[9]
	double A[N][N];    // A is a matrix: A[0][0], A[0][1], ..., A[0][9], ... A[9][9]
	printf("I am a graduated-%d,%d!\n",N,K);
	// Moving average, example, K個平均 
	/* u[0] = (x[0]+4*x[1]+6*x[2]+4*x[3]+x[4])/16
	   u[1] = (x[1]+4*x[2]+6*x[3]+4*x[4]+x[5])/16
	   
	   [1,4,6,4,1] --> FFT -> N log N operations
	   x --> FFT           -> N log N operations
	   對應相乘            -> N       operations
	   --> iFFT --> u      -> N log N operations
	    
	   u[1] = u[0]+(x[K]-x[0])/K
	   u[2] = u[1]+(x[K+1]-x[1])/K
	   ...
	   ... General form
	   u[i] = u[i-1]+(x[K+i-1]-x[i-1])/K
	   ... Given in program
	   u[N-K] = (x[N-K]+x[...]+...+x[N-1])/K
	*/
	// for-loop 
	// for(initial condition; end condition; action at each step)
	
}
