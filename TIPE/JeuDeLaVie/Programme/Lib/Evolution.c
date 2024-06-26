#include "Evolution.h"

int nbreCellulesAutour(matrix mat, int i, int j){
    int nbre = 0;
    for (int l = -1; l < 2; l++)
    {
        if (0 <= i+l && i+l <= mat.width)
        {
            for (int k = -1; k < 2; k++)
            {
                if ((0 <= j+k && j+k <= mat.height) && (k != 0 && l != 0))
                {
                    nbre += mat.mat[i+l][j+k];
                }
            }
        }
    }

    return nbre;
}

void evolution(Var *var){
    matrix mat = *var->XY_CASE_MAT;
    int nbre;
    for (int i = 0; i < mat.width; i++)
    {
        for(int j = 0; j < mat.height; j++)
        {
            nbre = nbreCellulesAutour(mat, i, j);
            if (nbre == 3)
            {
                var->XY_CASE_MAT->mat[i][j] = 1;
            }
            else if(nbre < 2 || nbre > 3)
            {
                var->XY_CASE_MAT->mat[i][j] = 0;
            }
        }
    }
    
}

void evolution(Var *var){
    evolutionTAB(var);

}