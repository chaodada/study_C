#include <stdio.h>
int main()
{

    const int size = 3;
    int board[size][size];
    int i, j;
    int numOFX;
    int numOFO;
    int result = -1; // -1 没人赢 1 x赢 0 o赢
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            scanf("%d", &board[i][j]);
        }
    }

    // 行
    for (i = 0; i < size && result == -1; i++)
    {
        numOFO = numOFX = 0;

        for (j = 0; j < size; j++)
        {
            if (board[i][j] == 1)
            {
                numOFX++;
            }
            else
            {
                numOFO++;
            }
        }

        if (numOFO == size)
        {
            result = 0;
        }
        else if (numOFX == size)
        {
            result = 1;
        }
    }

    // 列
    if (result == -1)
    {
        for (j = 0; j < size && result == -1; j++)
        {
            numOFO = numOFX = 0;

            for (i = 0; i < size; i++)
            {
                if (board[i][j] == 1)
                {
                    numOFX++;
                }
                else
                {
                    numOFO++;
                }
            }

            if (numOFO == size)
            {
                result = 0;
            }
            else if (numOFX == size)
            {
                result = 1;
            }
        }
    }

// 检查对角线
// numOFO = numOFX =0



    return 0;
}