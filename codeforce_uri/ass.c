#include <stdio.h>
int main()
{
    int game[3][3],k,i,j,x;
    for(k=0;k<9;k++){
    scanf("%d%d%d",&i,&j,&x);
    game[i][j]=x;
    }
    printf("\n\n\n");
    printf("HERE IS THE GAME:\n");
    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    printf("%d",game[i][j]);
    }
    printf("\n");
    }
    printf("\n\n\n");
    printf("RESULT OF THE MATCH:\n");
    if((game[0][0]==0&&game[0][1]==0&&game[0][2]==0)||
    (game[1][0]==0&&game[1][1]==0&&game[1][2]==0)||
    (game[2][0]==0&&game[2][1]==0&&game[2][2]==0)||
    (game[0][0]==0&&game[1][0]==0&&game[2][0]==0)||
    (game[0][1]==0&&game[1][1]==0&&game[2][1]==0)||
    (game[0][2]==0&&game[1][2]==0&&game[2][2]==0)||
    (game[0][0]==0&&game[1][1]==0&&game[2][2]==0)||
    (game[2][0]==0&&game[1][1]==0&&game[0][2]==0))
    printf("PLAYER 1 WON\n\n\n");
    else if
        ((game[0][0]==1&&game[0][1]==1&&game[0][2]==1)||
        (game[1][0]==1&&game[1][1]==1&&game[1][2]==1)||
        (game[2][0]==1&&game[2][1]==1&&game[2][2]==1)||
        (game[0][0]==1&&game[1][0]==1&&game[2][0]==1)||
        (game[0][1]==1&&game[1][1]==1&&game[2][1]==1)||
        (game[0][2]==1&&game[1][2]==1&&game[2][2]==1)||
        (game[0][0]==1&&game[1][1]==1&&game[2][2]==1)||
        (game[2][0]==1&&game[1][1]==1&&game[0][2]==1))
        printf("PLAYER 2 WON\n\n\n");
    else
    printf("THIS MATCH IS DRAW\n\n\n");
    return 0;
}
