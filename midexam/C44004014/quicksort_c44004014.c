#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define size 100
int main( )
{   
    //bubble sort
	int i, j, k, c;
	int b[size] = {0};
	srand(time(NULL));
	puts("Data items in original order");
	for (i = 0; i < size; i++){
		b[i] = rand();
		printf(" %d\t", b[i]);
    }
    
    for( k = 1 ; k < size; k++){
	
    	for(j = 0; j < size-k; j ++){
    		if(b[j]>b[j+1]){
				c = b[j];
				b[j]= b[j+1];
				b[j+1] = c;
 			}	
    	}
	}
 	puts("Data items after bubble sorting");
 	for (i = 0; i < size; i++){
 	     printf(" %d\t", b[i]);
	}
	printf("\n------------------------------------\n");
	
	// 不確定是哪一種 sort 
	int f, min;
	int e[size] = {0};
	
	puts("Data items in original order");
	for (i = 0; i < size; i++){
		e[i] = rand();
		printf(" %d\t", e[i]);
    }
    for( k = 0 ; k < size-1; k++){
    	min = e[k];
    	for(i = k+1; i < size; i++){
    		if(min > e[i]){
    			min = e[i];
				e[i]= e[k];
				e[k]=min;
			}		
		}
	} 
	puts("Data items after XX sorting");
    for (i = 0; i < size; i++){
 	     printf(" %d\t", e[i]);
	}
	printf("\n------------------------------------\n");
	
	//quick sort
	int g, m, n, p;
	n = 0;
	p = 0;
	int h[size] = {0};
	puts("Data items in original order");
	for (i = 0; i < size; i++){
		h[i] = rand();
		printf(" %d\t", h[i]);
    }
    printf("\n------------------------------------\n");
    //pivot
    for (i = 0; i < size; i++){
    	if(h[i]< h[size-1]){
    	m = h[i];
		h[i] = h[n];
		h[n] = m;
		n = n+1; 	
		}
    }
    for (i = 0; i < size; i++){
		printf(" %d\t", h[i]);
    } 
    printf("\n------------------------------------\n");
	// pivot jump   
    for(i = 0; i < size; i++){
    	if(h[i]>h[size-1]){
    	m = h[i];
		h[i] = h[size-1];
		h[size-1] = m;
		break;	
		}
    }
    printf("i = %d\n", i);
  
    printf("\n------------------------------------\n");
    //----------------------------------------------------------
    for (j = 0; j < i; j++){
    	if(h[j]< h[i-1]){
    	m = h[j];
		h[j] = h[p];
		h[p] = m;
		p = p+1; 	
		}
    }
    for (j = 0; j < size; j++){
		printf(" %d\t", h[j]);
    } 
    printf("\n------------------------------------\n");
    for(j = 0; j < i; j++){
    	if(h[j]>h[i-1]){
    	m = h[j];
		h[j] = h[i-1];
		h[i-1] = m;
		break;	
		}
    }
    printf("j = %d\n", j);
    //---------------------------------------------------------------------------
    
    for (j = 0; j < size; j++){
		printf(" %d\t", h[j]);
    } 
    
    
    
    
    puts("Data items after quick sorting");
    for (i = 0; i < size; i++){
		printf(" %d\t", h[i]);
    }    
	return 0;
}
