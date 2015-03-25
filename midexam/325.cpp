	#include <stdio.h>
	#include <math.h>
	int child_problem(int N);
	int main()
	{                        // <--註解
	                         /*..很多注解..*/ 
	int i,j,k;              //  <--in Z -2^32~2^32
	double a,b,c;           //  <--in R 
	double x[10],u[10];           //  x is a vector:x[0],x[1],...x[9]
	double A[10][10];       //  A is a matrix:
	 
	// moving average , example,三個平均 
	/* u[0]=(x[0]+x[1]+x[2])/3
	   u[1]=(x[1]+x[2]+x[3])/3
	   u[2]=(x[2]+x[3]+x[4])/3
	   ...general form
	   u[i]=(x[i]+x[i+1]+x[i+2])/3
	   ...
	   u[?]=(x[7]+x[8]+x[9])/3 
	*/   
	//for(initial condition;end condition)
	for(i=0;i<=10;i=i+1)
	{
		x[i]=cos(2*i*M_PI/10);                        // 2*i/10.0*M_PI 才行, 2*i/10*M_PI : bug
		printf("x[%d]=%f\n",i,x[i]);
	}
	for(i=1;i<=7;i=i+1)
	{
		u[i]=(x[i]+x[i+1]+x[i+2])/3; 
	}
	/*
	   3U = [1 1 1 0 0 0 0...0] x[0]
	        [0 1 1 1 0 0 0...0] x[1]
	        []    
	*/
	// 以上baby problem.....  
	child_problem(10);
	return 325;
	
	}
	int child_problem(int N)
	{
		int i,j,k;              
	    double a,b,c;            
	    double x[N],u[N];          
	    double A[N][N];       
		printf("hello rory-%d\n",N); 
		return 0;
	} 
	 
	
	
	
	
	
