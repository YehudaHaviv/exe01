
#include "my_mat.h"
#include <stdio.h>

int main() {
    
    char input;
    int matrix[10][10];

    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            matrix[i][j] = 0;
        }
    }
    
    scanf(" %c", &input);
    while (input!='D' && input!=EOF)
    {   
        int i;
        int j;
        
        if (input=='A')
        {
            enterNum(matrix);
        }

        if (input=='B')
        {
            scanf("%d", &i);
            scanf("%d", &j);
            isPath(matrix, i, j);
        }

        if (input=='B')
        {
            scanf("%d", &i);
            scanf("%d", &j);
            thePath(matrix, i, j);
        }
        
        scanf("%c", &input);
    }
    
    return 0;
}