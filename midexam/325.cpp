	#include <stdio.h>
	#include <math.h>
	int child_problem(int N);
	int youth_problem(int N,int K); 
	int univesity_problem(int N,int K);
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
		printf("u[%d]=%d\n",i,u[i]);
	}
	/*
	   3U = [1 1 1 0 0 0 0...0] x[0]
	        [0 1 1 1 0 0 0...0] x[1]
	        []    
	*/
	// 以上baby problem.....  
	child_problem(10);
	youth_problem(20,5); 
	univesity_problem(100,6);
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
	int youth_problem(int N,int K)     // K個加完之後除K 
	{
		int i,j,k;              
	    double a,b,c;            
	    double x[N],u[N];          
	    double A[N][N];       
	    // moving average , example,三個平均 
	/* u[0]=(x[0]+x[1]+..+x[K-1])/K 
	   u[1]=(x[1]+x[2]+..+x[K])/K 
	   u[2]=(x[2]+x[3]+..+x[K+1])/K 
	   ...
	   u[i]=(x[i]+x[i+1]+x[i+2])/K 
	   ...
	   u[N-K]=(x[N-K]+x[N-K+1]+..+x[N-1])/K 
	*/
	for(i=0;i<N-K;i=i+1)
	{
		/*
		u[i] = x[i]+x[i+1]+..x[i+K-1]
		step 0:u[i] = x[i]
		step 1:u[i] = x[i]+x[i+1] =u[i]+x[i+1] 
		step 2:u[i] = x[i]+x[i+1]+x[i+2] =u[i]+u[i+1]+x[i+2]
		step 3:u[i] = x[i]+x[i+1]+x[i+2]+x[i+3]
		step j:u[j] =..= u[i]+x[i+j]     j最多到K-1 
		*/ 
		u[i]=x[i];            //step 0 
		for(j=1;j<K;j=j+1)    //j:1,2,...,K-1
	    {
		     u[i]=u[i]+x[i+j];	 
		     printf("u[%d]=%d\n",i,u[i]);
	    }   
	    u[i] = u[i]/K; 
	}
	printf("hello youth-%d,%d\n",N,K);
	return 0; 
	} 
	
	int univesity_problem(int N,int K)     // K個加完之後除K 
	{
		int i,j,k;              
	    double a,b,c;            
	    double x[N],u[N];          
	    double A[N][N];       
	    // moving average , example,三個平均 
	/* u[0]=(x[0]+x[1]+..+x[K-1])/K 
	   u[1]=(x[1]+x[2]+..+x[K])/K 
	   u[2]=(x[2]+x[3]+..+x[K+1])/K 
	   
	   思考u[0]-->u[1]?
	   
	   u[1]=u[0]+(x[K]-x[0])/K
	   u[2]=u[1]+(x[K+1]-x[1])/K
	   ...
	   ...general form
	   
	   u[i]=u[]
	   ...
	   u[N-K]=(x[N-K]+x[N-K+1]+..+x[N-1])/K 
	*/
	
	    i=0;
		u[i]=x[i];            //step 0 
		for(j=1;j<K;j=j+1)    //j:1,2,...,K-1
	    {
		     u[i]=u[i]+x[i+j];	 
	    }   
	    u[i] = u[i]/K; 
	    
	    for(i=1;i<=N-K;i=i+1)
	    {
	    	u[i] = u[i-1]+(x[K+i-1]-x[i-1])/K;
	    	printf("u[%d]=%d\n",i,u[i]);
		}
	
	printf("hello university-%d,%d\n",N,K);
	return 1; 
	} 
	
	
	
	
