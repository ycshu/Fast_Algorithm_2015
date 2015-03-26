//
//  main.c
//  C14016015egg
//
//  Created by Lee Yu Hsun on 2015/3/26.
//

#include <stdio.h>

int main() {
	int i,j;
	double x[51];
	for (i=0; i<51; ++i) {
		printf("%d ",2*i+1);		//(1)
		x[i]=2*i+1;					//(2)
	}
	
	j=x[0];							//(3)
	for (i=1; i<51; ++i) {
		j=j+x[i];
	}
	printf("\nsum of the vector: %d \n ",j);
    return 0;
}
