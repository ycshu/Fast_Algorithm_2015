//
//  main.c
//  C14005022egg
//
//  Created by Lee Yu Hsun on 2015/3/26.
//

#include <stdio.h>

int main() {
	int m=20,n=30,i,j;
	for (i=1; i<=m; ++i) {
		for (j=1; j<=n; ++j) {
			if (i==j) {
				printf("  2");
			}else if (j==i-1 || j==i+1) {
				printf(" -1");
			}else{
				printf("  0");
			}
		}
		printf("\n");
	}
	
	return 0;
}
