 #include <stdio.h>
 int main()
 {
     int n,i,j,k, game [3][3];
     for(k=0;k<9;k++)
     {
         scanf("%d%d%d",&i,&j,&n);
         game[i][j]=n;
     }
     printf("\n\n\n");
     printf("Here is the game:\n");
     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d",game[i][j]);
        }
        printf("\n");
     }
     printf("\n\n\n");
     printf("Result of the game:\n");
     if ((game[0][0]==0 && game[0][1]==0 && game[0][2]==0)||
         (game[1][0]==0) && game[1][1]==0 && game[1][2]==0 ||
         ()

         )





 }
