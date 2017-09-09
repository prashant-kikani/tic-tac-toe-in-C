#include<stdio.h>
#include<math.h>
main()
{

    int ur,uc;char ch;
    //int ur1,uc1,ur2,uc2;
    printf("\n\t***TIC-TAC-TOE***\n");
while(1)
{
    printf("\nFirst turn is yours....");
    printf("\nEnter row and column : ");
    scanf("%d %d",&ur,&uc);
   // ur1=ur,uc1=uc;
    //if((ur==1&&uc==1)||(ur==1&&uc==3)||(ur==3&&uc==1)||(ur==3&&uc==3))printf("\nComputer chooses position : [2][2]");
    if(!(ur==2&&uc==2))
    {

        //ur2=ur,uc2=uc;
        if(ur==1&&uc==1)
        {
           printf("\nCom. choose : [2][2].");
           printf("\nYour turn. Enter row column : ");
           scanf("%d %d",&ur,&uc);
           if(ur==1&&uc==2)
           {
               printf("\nCom. choose [1][3].");
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==3&&uc==1)){printf("\nCom. choose : [3][1].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [2][1].");}
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==2&&uc==3)){printf("\nCom. choose : [2][3].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [3][3].Now you have to choose [3][2] & game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
           }
           else if(ur==2&&uc==1)
           {
               printf("\nCom. choose : [3][1].");
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==1&&uc==3)){printf("\nCom. choose : [1][3].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [1][2].");}
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==3&&uc==2)){printf("\nCom. choose : [3][2].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [3][3].Now you have to choose [2][3] & game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
           }
           else if(ur==1&&uc==3)
           {
               printf("\nCom. choose : [1][2].");
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==3&&uc==2)){printf("\nCom. choose : [3][2].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [2][1].");}
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==2&&uc==3)){printf("\nCom. choose : [2][3].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [3][3].Now you have to choose [3][1] & game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
           }
           else if(ur==3&uc==1)
           {
               printf("\nCom. choose : [2][1].");
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==2&&uc==3)){printf("\nCom. choose : [2][3].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [1][2].");}
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==3&&uc==2)){printf("\nCom. choose : [3][2].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [3][3].Now you have to choose [1][3] & game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
           }
           else if(ur==3&uc==3)
           {
               printf("\nCom. choose : [1][2].");
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==3&&uc==2)){printf("\nCom. choose : [3][2].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [3][1].");}
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==1&&uc==3)){printf("\nCom. choose : [1][3].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [2][3].Now you have to choose [2][1] & game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
           }
           else if(ur==3&uc==2)
           {
               printf("\nCom. choose : [3][1].");
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==1&&uc==3)){printf("\nCom. choose : [1][3].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [1][2].");}
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(ur==2&&uc==1){printf("\nCom. choose : [2][3].Now you have to choose [3][3] and game is DRAW");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else if(ur==2&&uc==3){printf("\nCom. choose : [2][1].Now you have to choose [3][3] and game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else if(ur==3&&uc==3){printf("\nCom. choose [2][3].Now you have to choose [2][1].And game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
           }
           else if(ur==3&&uc==2)
           {
               printf("\nCom. choose : [3][1].");
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==1&&uc==3)){printf("\nCom. choose : [1][3].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [1][2].");}
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(ur==2&&uc==1){printf("\nCom. choose : [2][3].Now you have to choose [3][3] and game is DRAW");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else if(ur==2&&uc==3){printf("\nCom. choose : [2][1].Now you have to choose [3][3] and game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else if(ur==3&&uc==3){printf("\nCom. choose [2][3].Now you have to choose [2][1].And game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
           }
        }




        else if(ur==1&&uc==2)
        {
           printf("\nYou should prefer middle or corner places for first step..... ");continue;
           //printf("\nCom. choose : [2][2].");
           //printf("\nYour turn. Enter row column : ");
           //scanf("%d %d",&ur,&uc);


        }
        else if(ur==1&&uc==3)
        {
             printf("\nCom. choose : [2][2].");
             printf("\nYour turn. Enter row column : ");
             scanf("%d %d",&ur,&uc);
             if(ur==1&&uc==1)
             {
                printf("\nCom. choose : [1][2].");
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==3&&uc==2)){printf("\nCom. choose : [3][2].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [2][1].");}
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==2&&uc==3)){printf("\nCom. choose : [2][3].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [3][3].Now you have to choose [3][1] & game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}

             }
             else if(ur==3&&uc==1)
             {
                printf("\nCom. choose : [3][2].");
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==1&&uc==2)){printf("\nCom. choose : [1][2].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [1][1].");}
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               //if(ur==2&&uc==1){printf("\nCom. choose : [2][3].Now you have to choose [3][3] and game is DRAW");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               //else if(ur==2&&uc==3){printf("\nCom. choose : [2][1].Now you have to choose [3][3] and game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               //else if(ur==3&&uc==3){printf("\nCom. choose [2][3].Now you have to choose [2][1].And game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               if(!(ur==3&&uc==3)){printf("\nCom. choose : [3][3].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [2][3].Now you have to choose [2][1] & game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}

             }
             else if(ur==3&&uc==3)
             {
               printf("\nCom. choose : [2][3].");
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==2&&uc==1)){printf("\nCom. choose : [2][1].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [1][2].");}
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==3&&uc==2)){printf("\nCom. choose : [3][2].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [3][1].Now you have to choose [1][1] & game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
             }
             else if(ur==2&&uc==3)
             {
                printf("\nCom. choose : [3][3].");
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==1&&uc==1)){printf("\nCom. choose : [1][1].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [1][2].");}
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==3&&uc==2)){printf("\nCom. choose : [3][2].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [3][1].Now you have to choose [2][1] & game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
             }
             else if(ur==1&&uc==2)
             {
                  printf("\nCom. choose : [1][1].");
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==3&&uc==3)){printf("\nCom. choose : [3][3].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [2][3].");}
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==2&&uc==1)){printf("\nCom. choose : [2][1].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [3][1].Now you have to choose [3][2] & game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
             }
             else if(ur==2&&uc==1)
             {
               printf("\nCom. choose : [1][1].");
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==3&&uc==3)){printf("\nCom. choose : [3][3].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [2][3].");}
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(ur==1&&uc==2){printf("\nCom. choose : [3][2].Now you have to choose [3][1] and game is DRAW");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else if(ur==3&&uc==2){printf("\nCom. choose : [1][2].Now you have to choose [3][1] and game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else if(ur==3&&uc==1){printf("\nCom. choose [3][2].Now you have to choose [1][2].And game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
             }
             else if(ur==3&&uc==2)
             {
                printf("\nCom. choose : [3][3].");
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==1&&uc==1)){printf("\nCom. choose : [1][1].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [1][2].");}
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(ur==2&&uc==1){printf("\nCom. choose : [3][1].Now you have to choose [2][3] and game is DRAW");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else if(ur==3&&uc==1){printf("\nCom. choose : [2][1].Now you have to choose [2][3] and game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else if(ur==2&&uc==3){printf("\nCom. choose [2][1].Now you have to choose [3][1].And game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
             }
        }

        else if(ur==2&&uc==1)
        {
           printf("\nYou should prefer middle or corner places for first step..... ");continue;
            //printf("\nCom. choose : [2][2].");
          // printf("\nYour turn. Enter row column : ");
           //scanf("%d %d",&ur,&uc);

        }
        else if(ur==2&&uc==3)
        {
            printf("\nYou should prefer middle or corner places for first step..... ");continue;
           // printf("\nCom. choose : [2][2].");
           //printf("\nYour turn. Enter row column : ");
           //scanf("%d %d",&ur,&uc);
        }
        else if(ur==3&&uc==1)
        {
          printf("\nCom. choose : [2][2].");
           printf("\nYour turn. Enter row column : ");
           scanf("%d %d",&ur,&uc);
           if(ur==1&&uc==1)
           {
               printf("\nCom. choose : [2][1].");
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==2&&uc==3)){printf("\nCom. choose : [2][3].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [1][2].");}
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               //if(ur==2&&uc==1){printf("\nCom. choose : [3][1].Now you have to choose [2][3] and game is DRAW");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               //else if(ur==3&&uc==1){printf("\nCom. choose : [2][1].Now you have to choose [2][3] and game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               //else if(ur==2&&uc==3){printf("\nCom. choose [2][1].Now you have to choose [3][1].And game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               if(!(ur==3&&uc==2)){printf("\nCom. choose : [3][2].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [3][3].Now you have to choose [1][3] & game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}

           }
           else if(ur==1&&uc==3)
           {
               printf("\nCom. choose : [1][2].");
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==3&&uc==2)){printf("\nCom. choose : [3][2].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [3][3].");}
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==1&&uc==1)){printf("\nCom. choose : [1][1].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [2][1].Now you have to choose [2][3] & game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
           }
           else if(ur==3&&uc==3)
           {
               printf("\nCom. choose : [3][2].");
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==1&&uc==2)){printf("\nCom. choose : [1][2].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [2][3].");}
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==2&&uc==1)){printf("\nCom. choose : [2][1].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [1][1].Now you have to choose [1][3] & game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
           }
           else if(ur==3&&uc==2)
           {
               printf("\nCom. choose : [3][3].");
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==1&&uc==1)){printf("\nCom. choose : [1][1].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [2][3].");}
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(ur==2&&uc==1){printf("\nCom. choose : [1][3].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else if(ur==1&&uc==3){printf("\nCom. choose : [2][1].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else if(ur==1&&uc==2){printf("\nCom. choose [2][1].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}

           }
           else if(ur==2&&uc==1)
           {
                printf("\nCom. choose : [1][1].");
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==3&&uc==3)){printf("\nCom. choose : [3][3].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [3][2].");}
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               //if(ur==2&&uc==1){printf("\nCom. choose : [1][3].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               //else if(ur==1&&uc==3){printf("\nCom. choose : [2][1].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               //else if(ur==1&&uc==2){printf("\nCom. choose [2][1].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               if(!(ur==1&&uc==2)){printf("\nCom. choose : [1][2].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [1][3].Now you have to choose [2][3] & game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}

           }
           else if(ur==1&&uc==2)
           {
                printf("\nCom. choose : [1][1].");
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==3&&uc==3)){printf("\nCom. choose : [3][3].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [3][2].");}
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(ur==2&&uc==1){printf("\nCom. choose : [1][3].Now you have to choose [2][3] and game is DRAW");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else if(ur==1&&uc==3){printf("\nCom. choose : [2][3].Now you have to choose [2][1] and game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else if(ur==2&&uc==3){printf("\nCom. choose [1][3].Now you have to choose [2][1].And game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
           }
           else if(ur==2&&uc==3)
           {
                printf("\nCom. choose : [1][2].");
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==3&&uc==2)){printf("\nCom. choose : [3][2].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [3][3].");}
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==1&&uc==1)){printf("\nCom. choose : [1][1].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [2][1].Now you have to choose [1][3] & game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
           }



        }
        else if(ur==3&&uc==2)
        {
           printf("\nYou should prefer middle or corner places for first step..... ");continue;
           //printf("\nCom. choose : [2][2].");
           //printf("\nYour turn. Enter row column : ");
           //scanf("%d %d",&ur,&uc);
        }
        else if(ur==3&&uc==3)
        {
           printf("\nCom. choose : [2][2].");
           printf("\nYour turn. Enter row column : ");
           scanf("%d %d",&ur,&uc);
           if(ur==3&&uc==1)
           {
                 printf("\nCom. choose : [3][2].");
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==1&&uc==2)){printf("\nCom. choose : [1][2].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [2][3].");}
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==2&&uc==1)){printf("\nCom. choose : [2][1].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [1][1].Now you have to choose [1][3] & game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
           }
           else if(ur==1&&uc==1)
           {
                 printf("\nCom. choose : [3][2].");
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==1&&uc==2)){printf("\nCom. choose : [1][2].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [1][3].");}
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==3&&uc==1)){printf("\nCom. choose : [3][1].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [2][1].Now you have to choose [2][3] & game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
           }
           else if(ur==1&&uc==3)
           {
               printf("\nCom. choose : [2][3].");
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==2&&uc==1)){printf("\nCom. choose : [2][1].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [3][2].");}
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==1&&uc==2)){printf("\nCom. choose : [1][2].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [1][1].Now you have to choose [3][1] & game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
           }
           else if(ur==3&&uc==2)
           {
               printf("\nCom. choose : [3][1].");
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==1&&uc==3)){printf("\nCom. choose : [1][3].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [2][3].");}
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==2&&uc==1)){printf("\nCom. choose : [2][1].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [1][1].Now you have to choose [1][2] & game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
           }
           else if(ur==2&&uc==3)
           {
               printf("\nCom. choose : [1][3].");
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==3&&uc==1)){printf("\nCom. choose : [3][1].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [3][2].");}
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==1&&uc==2)){printf("\nCom. choose : [1][2].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [1][1].Now you have to choose [2][1] & game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
           }
           else if(ur==1&&uc==2)
           {
              printf("\nCom. choose : [2][3].");
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==2&&uc==1)){printf("\nCom. choose : [2][1].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [3][1].");}
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==1&&uc==3)){printf("\nCom. choose : [1][3].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [1][1].Now you have to choose [3][2] & game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
           }
           else if(ur==2&&&uc==1)
           {
                printf("\nCom. choose : [3][2].");
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==1&&uc==2)){printf("\nCom. choose : [1][2].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [3][1].");}
               printf("\nYour turn. Enter row column : ");
               scanf("%d %d",&ur,&uc);
               if(!(ur==1&&uc==3)){printf("\nCom. choose : [1][3].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
               else{printf("\nCom. choose : [1][1].Now you have to choose [2][3] & game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
           }
        }





    }



    else
    {
        printf("\nCom. chooses position : [1][1]");
        printf("\nYour turn. Enter row column : ");
        scanf("%d %d",&ur,&uc);
        if(ur==2&&uc==3)
        {
            printf("\nCom.chooses position : [2][1]");
            printf("\nYour turn. Enter row column : ");
            scanf("%d %d",&ur,&uc);
            if(!(ur==3&&uc==1)){printf("\nCom. choose [3][1]..End YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
            else{printf("\nCom. choose : [1][3]");}
            printf("\nYour turn. Enter row column : ");
            scanf("%d %d",&ur,&uc);
            if(!(ur==1&&uc==2)){printf("\nCom. choose [1][2]...End YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
            else{printf("\nCom choose : [3][2].");}
            printf("Now you have to choose [3][3]. And game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}

        }
        if(ur==1&&uc==3)
        {
            printf("\nCom. choose : [3][1]");
            printf("\nYour turn. Enter row column : ");
            scanf("%d %d",&ur,&uc);
           // if(!(ur==2 && uc==1)){printf("\nCom. choose [2][1]. And YOU LOSE");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
            if(!(ur==2 && uc==1)){printf("\nCom. choose [2][1]. And YOU LOSE");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
            printf("\nCom. choose : [2][3]");
            printf("\nYour turn. Enter row column : ");
            scanf("%d %d",&ur,&uc);
            if(ur==1&&uc==2){printf("\nCom. choose : [3][2].Now you have to choose [3][3] and game is DRAW");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
            else if(ur==3&&uc==2){printf("\nCom. choose : [1][2].Now you have to choose [3][3] and game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
            else{printf("\nCom. choose [3][2].Now you have to choose [1][2].And game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
        }
        if(ur==3&&uc==1)
        {
            printf("\nCom. choose: [1][3]");
            printf("\nYour turn. Enter row column : ");
            scanf("%d %d",&ur,&uc);
            if(!(ur==1&&uc==2)){printf("\nCom. choose : [1][2].And YOU LOSE");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
            else{printf("\nCom. choose : [3][2]");}
            printf("\nYour turn. Enter row column : ");
            scanf("%d %d",&ur,&uc);
            if(ur==2&&uc==1){printf("\nCom. choose [2][3].Now you have to choose [3][3] and game is DRAW");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
            else if(ur==2&&uc==3){printf("\nCom. choose [2][1].Now you have to choose [3][3] and game is DRAW");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
            else{printf("\nCom. choose [2][3].Now you have to choose [2][1] and game is DRAW");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
        }
        if(ur==1&&uc==2)
        {
            printf("\nCom. choose [3][2].");
            printf("\nYour turn. Enter row column : ");
            scanf("%d %d",&ur,&uc);
            if(ur==1&&uc==3)
            {
                printf("\nCom. choose : [3][1].");
                printf("\nYour turn. Enter row column : ");
                scanf("%d %d",&ur,&uc);
                if(!(ur==2&&uc==1)){printf("\nCom. choose : [2][1].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
                else{printf("\nCom. choose : [2][3].Now you have to choose [3][3].And game is DRAW.");}
            }
            else if(ur==2&&uc==3)
            {
                printf("\nCom. choose : [2][1].");
                printf("\nYour turn. Enter row column : ");
                scanf("%d %d",&ur,&uc);  //REMAIN
                if(!(ur==3&&uc==1)){printf("\nCom. choose : [3][1].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
                else{printf("\nCom. choose : [1][3].Now you have to choose [3][3].And game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
            }
            else if(ur==3&&uc==3)
            {
                printf("\nCom. choose : [3][1]");
                printf("\nYour turn. Enter row column : ");
                scanf("%d %d",&ur,&uc);   //REMAIN
                if(!(ur==2&&uc==1)){printf("\nCom. choose : [2][1].And YOU LOSE");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
                else{printf("\nCom. choose : [2][3].Now you have to choose [1][3].And game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
            }
            else if(ur==3&&uc==1)
            {
                printf("\nCom. choose : [1][3]");
                printf("\nYour turn. Enter row column : ");
                scanf("%d %d",&ur,&uc);
                if(ur==2&&uc==1){printf("\nCom. choose : [2][3].Now you have to choose [3][3].And game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
                else if(ur==2&&uc==3){printf("\nCom. choose : [2][1].Now you have to choose [3][3].And game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
                else{printf("\nCom. choose : [2][3].Now you have to choose [2][1].And game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
            }
            else
            {
                 printf("\nCom. choose : [2][3].");
                 printf("\nYour turn. Enter row column : ");
                 scanf("%d %d",&ur,&uc);
                 if(ur==1&&uc==3){printf("\nCom. choose : [3][1].Now you have to choose [3][3].And game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
                 else if(ur==3&&uc==3){printf("\nCom. choose : [1][3].Now you have to choose [3][1].And game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
                 else{printf("\nCom. choose : [3][3].Now you have to choose [1][3].And game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}

            }



        }
        if(ur==3&&uc==2)
        {
                printf("\nCom. choose: [1][2]");
                printf("\nYour turn. Enter row column : ");
                scanf("%d %d",&ur,&uc);
                if(!(ur==1&&uc==3)){printf("\nCom. choose : [1][3].And YOU LOSE");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
                else{printf("\nCom. choose : [3][1]");}
                printf("\nYour turn. Enter row column : ");
                scanf("%d %d",&ur,&uc);
                if(!(ur==2&&uc==1)){printf("\nCom. choose[2][1].And YOU LOSE.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
                else{printf("\nCom. choose : [2][3].Now you have to choose [3][3].And game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
        }


        if(ur==2&&uc==1)
        {
                printf("\nCom. choose: [2][3]");
                printf("\nYour turn. Enter row column : ");
                scanf("%d %d",&ur,&uc);
                if(ur==1&&uc==2)
            {
                printf("\nCom. choose : [3][2].");
                printf("\nYour turn. Enter row column : ");
                scanf("%d %d",&ur,&uc);
                if(!(ur==3&&uc==1)){printf("\nCom. choose : [1][3].Now you have to choose [3][3].And game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
                else if(ur==1&&uc==3){printf("\nCom. choose : [3][1].Now you have to choose [3][3].And game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
                else{printf("\nCom. choose : [1][3].Now you have to choose [3][1].And game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
            }
            else if(ur==1&&uc==3)
            {
                printf("\nCom. choose : [3][1].");
                printf("\nYour turn. Enter row column : ");
                scanf("%d %d",&ur,&uc);  //REMAIN
                if(!(ur==1&&uc==2)){printf("\nCom. choose : [3][2].Now you have to choose [3][3].And game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
                else if(ur==3&&uc==2){printf("\nCom. choose : [1][2].Now you have to choose [3][3].And game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
                else{printf("\nCom. choose : [3][2].Now you have to choose [1][2].And game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
            }
            else if(ur==3&&uc==1)
            {
                printf("\nCom. choose : [1][3]");
                printf("\nYour turn. Enter row column : ");
                scanf("%d %d",&ur,&uc);   //REMAIN
                if(!(ur==1&&uc==2)){printf("\nCom. choose : [1][2].And YOU LOSE");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
                else{printf("\nCom. choose : [3][2].Now you have to choose [3][3].And game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
            }
            else if(ur==3&&uc==2)
            {
                printf("\nCom. choose : [1][2]");
                printf("\nYour turn. Enter row column : ");
                scanf("%d %d",&ur,&uc);
                if(!(ur==1&&uc==3)){printf("\nCom. choose : [1][3].And YOU LOSE");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
                //else if(ur==3&&uc==1)printf("\nCom. choose : [3][3].And game is DRAW.");
                else{printf("\nCom. choose : [3][1].Now you have to choose [3][3]And game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
            }
            else if(ur==3&&uc==3)
            {
                 printf("\nCom. choose : [1][3].");
                 printf("\nYour turn. Enter row column : ");
                 scanf("%d %d",&ur,&uc);
                 if(!(ur==1&&uc==2))printf("\nCom. choose : [1][2].And YOU LOSE.");
                 else
                 {
                     if(ur==3&&uc==2){printf("\nCom. choose : [3][1].And game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
                    else{printf("\nCom. choose : [3][2].And game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
                 }

            }


        }

        if(ur==3&&uc==3)
        {
            printf("\nCom. choose : [2][1]");
            printf("\nYour turn. Enter row column : ");
            scanf("%d %d",&ur,&uc);
            if(!(ur==3&&uc==1)){printf("\nCom. choose [3][1]. And YOU LOSE");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
            else{printf("\nCom. choose : [1][3]");}
            printf("\nYour turn. Enter row column : ");
            scanf("%d %d",&ur,&uc);
            if(ur==3&&uc==2){printf("\nCom. choose : [1][2].Now you have to choose [2][3].And game is DRAW");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
            else if(ur==2&&uc==3){printf("\nCom. choose : [1][2].Now you have to choose [3][2] and game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
            else{printf("\nCom. choose [3][2].Now you have to choose [2][3].And game is DRAW.");printf("\nWant to play again? : ");getchar();scanf("%c",&ch);if(ch=='y'||ch=='Y')continue;else{break;}}
        }



    }
}
}
