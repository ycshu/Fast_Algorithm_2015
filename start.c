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
		printf("x[%d]=%f\n", i, x[i]);
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
