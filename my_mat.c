
#include "my_mat.h"
#include <stdio.h>

void enterNum(int matrix[10][10]) {

    int num = 0;

    for(int i=0; i<10; i++) {
        for (int j=0; j<10; j++)
        {
            scanf("%d", &num);
            matrix[i][j] = num;        
        }
    }
}

void isPathHelpRec(int matrix[10][10], int i, int j, int visited[10], int found) {

if(i==j) {found = 0;}

visited[i] = 0;

for(int v=0;v<10;v++) {
    if(matrix[i][v]!=0 && visited[v]!=0) {
        isPathHelpRec(matrix, v, j, visited, found);
    }
}


}

void isPath(int matrix[10][10], int i, int j) {
    
   int visited[10];
   for(int o=0;o<10;o++) {
    visited[o] = 1;
   }
   int found = 1;

   isPathHelpRec(matrix, i, j, visited, found);
   
   if(found==1) {printf("False");}
   else {printf("True");}

}

int thePath(int matrix[10][10], int i, int j) {
    
    int ans[10][10];

    for (int z=0; z<10; z++)
    {
        for (int t=0; t<10; t++)
        {
            ans[z][t] = matrix[z][t];
        }
    }

    for(int k=0; k<10; k++) {
        for(int z=0; z<10; z++) {
            for(int j=0; j<10; j++) {
                if(ans[z][k]+ans[k][j]<ans[z][j]) {
                    ans[z][j] = ans[z][k]+ans[k][j];
                }
            }
        }
    }

    return ans[i][j];
    
}
