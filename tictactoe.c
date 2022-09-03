#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
char square[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

int  checkwin();
void board();
void Smartcomputer();
void Evilcomputer();
void Player();

int main()
{
    int choice,i;
    while(1)
    {
        for(i=1;i<10;i++)
            square[i]=i+'0';
        system("cls");
        printf("Enter your choice");
        printf("\n1. Want to play with Smart Computer");
        printf("\n2. Want to play with Evil Computer");
        printf("\n3. Want to play with Player");
        printf("\n4. Exit \n\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: Smartcomputer();
                    break;

            case 2: Evilcomputer();
                    break;

            case 3: Player();
                    break;
            case 4:
                    printf("Thank you");
                    return 0;

            default: printf("Invalid choice ,try again ");
        }
        printf("\nWant to play again ");
        printf("\n1. yes \n2. No. \n");
        scanf("%d",&choice);
        if(choice==1)
            continue;
        else if(choice==2)
            break;
        else
            break;
    }

    printf("\nThanks for playing");
}

void Smartcomputer()
{
    int player =1,i,choice,n=0;
    char mark;
    do{
        board();
        if(player%2==1)
            player=1;
        else
            player =2;

        if(player==1)
        {
            printf("Player %d, Enter Marking Place :  ",player);
            scanf("%d", &choice);
            mark='X';
            if (choice == 1 && square[1] == '1')
            square[1] = mark;

        else if (choice == 2 && square[2] == '2')
            square[2] = mark;

        else if (choice == 3 && square[3] == '3')
            square[3] = mark;

        else if (choice == 4 && square[4] == '4')
            square[4] = mark;

        else if (choice == 5 && square[5] == '5')
            square[5] = mark;

        else if (choice == 6 && square[6] == '6')
            square[6] = mark;

        else if (choice == 7 && square[7] == '7')
            square[7] = mark;

        else if (choice == 8 && square[8] == '8')
            square[8] = mark;

        else if (choice == 9 && square[9] == '9')
            square[9] = mark;

        else {
                printf("Invalid move ");
                player--;
                getch();
            }
        i = checkwin();
        player++;
        }
        else if(player==2){
            mark='O';
            n=findplace();
            if(n==0)
                i=0;
            else
                square[n]=mark;
                board();
            i=checkwin();
            player--;
        }
    }while(i==-1);
    if (i == 0)
        printf("==>\aGame draw");
    else
        printf("==>\aPlayer %d win ", i=='X'?1:2);
    getch();

}
int findplace()
{
    int i;
    if(square[1]=='O' && square[2]=='O')
        return 3;
    else if(square[4]=='O' && square[5]=='O')
        return 6;
    else if(square[7]=='O' && square[8]=='O')
        return 9;
    else if(square[1]=='O' && square[3]=='O')
        return 2;
    else if(square[4]=='O' && square[6]=='O')
        return 5;
    else if(square[7]=='O' && square[9]=='O')
        return 8;
    else if(square[2]=='O' && square[3]=='O')
        return 1;
    else if(square[5]=='O' && square[6]=='O')
        return 4;
    else if(square[8]=='O' && square[9]=='O')
        return 7;
    else if(square[1]=='O' && square[4]=='O')
        return 7;
    else if(square[2]=='O' && square[5]=='O')
        return 8;
    else if(square[3]=='O' && square[6]=='O')
        return 9;
    else if(square[1]=='O' && square[7]=='O')
        return 4;
    else if(square[2]=='O' && square[8]=='O')
        return 5;
    else if(square[3]=='O' && square[9]=='O')
        return 6;
    else if(square[1]=='O' && square[5]=='O')
        return 9;
    else if(square[9]=='O' && square[5]=='O')
        return 1;
    else if(square[1]=='O' && square[9]=='O')
        return 5;
    else if(square[4]=='O' && square[7]=='O')
        return 1;
    else if(square[5]=='O' && square[8]=='O')
        return 2;
    else if(square[6]=='O' && square[9]=='O')
        return 3;
    else if(square[3]=='O' && square[7]=='O')
        return 5;
    else if(square[3]=='O' && square[5]=='O')
        return 7;
    else if(square[7]=='O' && square[5]=='O')
        return 3;

    else if(square[1]=='X' && square[2]=='X')
        return 3;
    else if(square[4]=='X' && square[5]=='X')
        return 6;
    else if(square[7]=='X' && square[8]=='X')
        return 9;
    else if(square[1]=='X' && square[3]=='X')
        return 2;
    else if(square[4]=='X' && square[6]=='X')
        return 5;
    else if(square[7]=='X' && square[9]=='X')
        return 8;
    else if(square[2]=='X' && square[3]=='X')
        return 1;
    else if(square[5]=='X' && square[6]=='X')
        return 4;
    else if(square[8]=='X' && square[9]=='X')
        return 7;
    else if(square[1]=='X' && square[4]=='X')
        return 7;
    else if(square[2]=='X' && square[5]=='X')
        return 8;
    else if(square[3]=='X' && square[6]=='X')
        return 9;
    else if(square[1]=='X' && square[7]=='X')
        return 4;
    else if(square[2]=='X' && square[8]=='X')
        return 5;
    else if(square[3]=='X' && square[9]=='X')
        return 6;
    else if(square[1]=='X' && square[5]=='X')
        return 9;
    else if(square[9]=='X' && square[5]=='X')
        return 1;
    else if(square[1]=='X' && square[9]=='X')
        return 5;
    else if(square[4]=='X' && square[7]=='X')
        return 1;
    else if(square[5]=='X' && square[8]=='X')
        return 2;
    else if(square[6]=='X' && square[9]=='X')
        return 3;
    else if(square[3]=='X' && square[7]=='X')
        return 5;
    else if(square[3]=='X' && square[5]=='X')
        return 7;
    else if(square[7]=='X' && square[5]=='X')
        return 3;
    else if (square[1]!= '1' && square[2]!= '2' && square[3]!= '3' && square[4]!= '4' && square[5]!= '5' && square[6]!= '6' && square[7]!= '7'
        && square[8] != '8' && square[9] != '9')       //    ALL FULL PLACE  FLLED
        return 0;
    else {
        for(i=1;i<10;i++)
            if(square[i]!=i+'0')
            return i;
    }
}







void Player()
{

    int player = 1, i, choice;
    char mark;
    do
    {
        board();
        if(player%2==1)
            player =1;
        else
            player =2;


        printf("Player %d, Enter Marking Place :  ",player);
        scanf("%d", &choice);

        if(player == 1)
            mark='X';
        else
            mark='O';


        if (choice == 1 && square[1] == '1')
            square[1] = mark;

        else if (choice == 2 && square[2] == '2')
            square[2] = mark;

        else if (choice == 3 && square[3] == '3')
            square[3] = mark;

        else if (choice == 4 && square[4] == '4')
            square[4] = mark;

        else if (choice == 5 && square[5] == '5')
            square[5] = mark;

        else if (choice == 6 && square[6] == '6')
            square[6] = mark;

        else if (choice == 7 && square[7] == '7')
            square[7] = mark;

        else if (choice == 8 && square[8] == '8')
            square[8] = mark;

        else if (choice == 9 && square[9] == '9')
            square[9] = mark;

        else {
            printf("Invalid move ");
            player--;
            getch();
        }
        i = checkwin();
        player++;
    }while (i ==  - 1);

    board();

    if (i == 0)
        printf("==>\aGame draw");
    else
        printf("==>\aPlayer %d win ", i=='X'?1:2);
    getch();

}


void Evilcomputer()
{
    int player =1,i,choice,n=0;
    char mark;
    do{
        board();
        if(player%2==1)
            player=1;
        else
            player =2;

        if(player==1)
        {
            printf("Player %d, Enter Marking Place :  ",player);
            scanf("%d", &choice);
            mark='X';
            if (choice == 1 && square[1] == '1')
            square[1] = mark;

        else if (choice == 2 && square[2] == '2')
            square[2] = mark;

        else if (choice == 3 && square[3] == '3')
            square[3] = mark;

        else if (choice == 4 && square[4] == '4')
            square[4] = mark;

        else if (choice == 5 && square[5] == '5')
            square[5] = mark;

        else if (choice == 6 && square[6] == '6')
            square[6] = mark;

        else if (choice == 7 && square[7] == '7')
            square[7] = mark;

        else if (choice == 8 && square[8] == '8')
            square[8] = mark;

        else if (choice == 9 && square[9] == '9')
            square[9] = mark;

        else {
                printf("Invalid move ");
                player--;
                getch();
            }
        i = checkwin();
        player++;
        }
        else if(player==2){
            mark='O';
            n=findplace();
            if(n==0)
                i=0;
            else
                square[n]=mark;
                board();
            i=checkwin();
            player--;
        }
    }while(i==-1);
    if (i == 0)
        printf("==>\aGame draw");
    else
        printf("==>\aPlayer %d win ", i=='X'?1:2);
    getch();

}








int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3])
        return square[1];

    else if (square[4] == square[5] && square[5] == square[6])
        return square[4];

    else if (square[7] == square[8] && square[8] == square[9])
        return square[7];

    else if (square[1] == square[4] && square[4] == square[7])
        return square[1];

    else if (square[2] == square[5] && square[5] == square[8])
        return square[2];

    else if (square[3] == square[6] && square[6] == square[9])
        return square[3];

    else if (square[1] == square[5] && square[5] == square[9])
        return square[1];

    else if (square[3] == square[5] && square[5] == square[7])
        return square[3];

    else if (square[1]!= '1' && square[2]!= '2' && square[3]!= '3' && square[4]!= '4' && square[5]!= '5' && square[6]!= '6' && square[7]!= '7'
        && square[8] != '8' && square[9] != '9')       //    ALL FULL PLACE  FLLED
        return 0;
    else
        return  - 1; // continue  the   game
}




void board()
{
    system("cls");
    printf("\n######################### Tic Tac Toe ######################### ");

    printf("\n\nFirst Player X");
    printf("\nSecond Player 0\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);

    printf("_____|_____|_____\n\n");

    printf("\n################################################################ \n\n");

}

