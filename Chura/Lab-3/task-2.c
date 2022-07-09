// Display Pascal’s Triangle until a given row. [This problem is the same problem of Manual 5, section 8:Lab Exercise, problem number 3]

#include <stdio.h>

int main()
{
    int row, c = 1, blk, i, j;

    printf("Input number of rows: ");
    scanf("%d",&row);

    for(i = 0;i < row; i++){
        for(blk = 1;blk <= row - i; blk++)
        printf("  ");
        for(j = 0;j <= i; j++){
            if (j == 0 || i == 0)
                c = 1;
            else
               c = c * (i - j + 1) / j;
            printf("% 4d",c);
        }
        printf("\n");
    }
    return 0;
}

// Input number of rows: 5
//              1
//            1   1
//          1   2   1
//        1   3   3   1
//      1   4   6   4   1
