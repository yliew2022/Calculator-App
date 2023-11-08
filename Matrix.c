#include <iostream>
#include "determinant.h"
using namespace std;
int determinant(int matrix[4][4], int n) 
{
    int det = 0;
    int sub[4][4];
    if (n == 2)
        return ((matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]));
    else {
        int x;
        for (x = 0; x < n; x++) {
            int subi = 0;
            int i;
            for (i = 1; i < n; i++) {
                int subj = 0;
                int j = 0;
                for (j = 0; j < n; j++) {
                    if ( j == x)
                    continue;
                    sub[subi][subj] = matrix[i][j];
                    subj++;
                }
                subi++;a
            }
            det = det + (pow(-1, x) * matrix[0][x] * determinant( sub, n - 1));
        }
        return det;
}
}