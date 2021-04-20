Given a N x N chessboard there is a single Knight at position (x,y). The knight feels bored and wants a puzzle to occupy him, so he thinks of a problem to solve. 
He wants to visit all squares once using its L shaped moves. 
Can he succeed in his adventure? 
 - If Yes, print a matrix M, where M[i][j] represents the move number which the Knight visited the cell (i, j). For example if M[i][j] = 2, this means the Knight visited the cell (i, j) at move 2. 
 - If No print "Impossible adventure".
Input:

N - The board size (constraints N <= 7)
X Y - The initial position of bored knight

Output:
A valid matrix M, of size N x N, representing the move number of the knight when it visited each cell

Sample Input:

N = 5
X = 2; Y = 2

Sample Output:

24    9     14    3     18  
15    4     17    8     13  
10    23    0     19    2  
5     16    21    12    7  
22    11    6     1     20
