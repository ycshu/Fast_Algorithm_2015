#include <stdio.h>
#include <stdlib.h>

/*Please write a program:

(1) print 1 3 5 7 9 ... 101
(2) set a double vector x to be 1 3 5 7 9 ... 101
(3) compute the sum of this vector

send the file and commit it in your directory :D
*/

int main()
{
    int i;
    double x[51];

    for(i=1;i<=101;i+=2)
    {
                       x[(i-1)/2] = i;
                       printf("%.0f ",x[(i-1)/2]);
    }
    
    system("pause");
}
