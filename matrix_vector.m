function matrix_vector(N)

tic;
for i=1:N
    x(i) = cos(i*pi/N);
end
for i=1:N
    for j=1:N
        A(i,j) = 1/(i+j-1);
    end
end
for i=1:N
    b(i) = 0;
    for j=1:N
        b(i) = b(i) + A(i,j)*x(j);
    end
end
x
A
b
toc
