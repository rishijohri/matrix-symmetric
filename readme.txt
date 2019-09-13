matrix.c
2019meb1287
Mechanical engineering
=========================================================================

WHAT DOES THE PROGRAM DO

the program first asks user to input size of square matrix. the program then asks user to input matrix each element of the matrix. after taking all input the program prints the matrix. after that the program checks whether the matrix is symmetric or not by checking each element in the matrix.


HOW THE PROGRAM WORKS

1. the programs asks user to input size of square matrix. this is stored in a variable called size.
2. the program then creates an 2D array called matrix of size*size. 
3. then using a nested for loop the program takes input for each element of the array one by one.
4. once all input have been taken, the program then prints the entire matrix using another nested for loop. it prints all elements of the row with tab space before jumping to the next row.
5. once the entire matrix has been printed, the program then compares the [i][j]th element of matrix with [j][i]th element of the matrix. if they come out as equal then 1 is added to a variable called truth. if they are not equal at any point then the program prints "not symmetric" and the entire program terminates. the i and j are variables which are constantly changed using help of another nested for loop.
6. if the value of truth is equal to the square of size then the program prints "matrix is symmetric"


COMPILING AND EXECUTING THE PROGRAM

1. in the folder where file matrix.c is stored, open terminal there.
2. in the terminal type "gcc matrix.c".
3. press enter.
4. now in the next line type "./a.out"
5. after this the program starts running.


SNAPSHOT OF SAMPLE RUN

Please enter the size of your square matrix : 3
please enter element at location [0][0] : 1
please enter element at location [0][1] : 2
please enter element at location [0][2] : 3
please enter element at location [1][0] : 1
please enter element at location [1][1] : 2
please enter element at location [1][2] : 3
please enter element at location [2][0] : 1
please enter element at location [2][1] : 2
please enter element at location [2][2] : 3
1	1	1	
2	2	2	
3	3	3	

Not Symmetric

