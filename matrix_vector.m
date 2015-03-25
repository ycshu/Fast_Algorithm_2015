function matrix_vector(N)

tic;
 i=1:N
    x = cos(i*pi/N)' ;

        A = 1./(ones(N,1)*i+i'*ones(1,N)-1);
        
b =A*x
toc
