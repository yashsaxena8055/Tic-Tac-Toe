#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include <ctype.h>
bool checkk(int);
char arr[9]={'0','1','2','3','4','5','6','7','8'};
int count=0;
void board()
{
    printf("\n\n\n");
    printf("\t\t\t\t\tPlayer 1: <X> Player 2: <O> \n");
    printf("\n");
    printf("\t\t\t\t\t      |     |     \n");
    printf("\t\t\t\t\t   %c  |  %c  |  %c  \n",arr[0],arr[1],arr[2]);
    printf("\t\t\t\t\t      |     |     \n");
    printf("\t\t\t\t\t -----|-----|-----\n");
    printf("\t\t\t\t\t      |     |    \n");
    printf("\t\t\t\t\t   %c  |  %c  |  %c  \n",arr[3],arr[4],arr[5]);
    printf("\t\t\t\t\t      |     |     \n");
    printf("\t\t\t\t\t -----|-----|-----\n");
    printf("\t\t\t\t\t      |     |     \n");
    printf("\t\t\t\t\t   %c  |  %c  |  %c  \n",arr[6],arr[7],arr[8]);
    printf("\t\t\t\t\t      |     |     \n");
}
bool checkk(int choice)
{
    if(arr[choice]=='X'||arr[choice]=='O')
    {

        return false;
    }
    if(choice%10!=choice)
       return false;
    return true;

}
char  result()
{
    char ch;
     extern int count;
    if(arr[0]=='X'&& arr[1]=='X'&&arr[2]=='X'){
        ch='x';
        count++;
    }
    if(arr[3]=='X'&& arr[4]=='X'&&arr[5]=='X'){
       ch='x';
       count++;}
    if(arr[6]=='X'&& arr[7]=='X'&&arr[8]=='X'){
        ch='x';
        count++;
    }
    if(arr[0]=='X'&& arr[3]=='X'&&arr[6]=='X')
    {
        ch='x';
        count++;
    }

    if(arr[1]=='X'&& arr[4]=='X'&&arr[7]=='X'){
        ch='x';
        count++;
    }
    if(arr[2]=='X'&& arr[5]=='X'&&arr[8]=='X'){
        ch='x';
        count++;
    }
    if(arr[0]=='X'&& arr[4]=='X'&&arr[8]=='X'){
        ch='x';
        count++;}
    if(arr[2]=='X'&& arr[4]=='X'&&arr[6]=='X'){
        ch='x';
        count++;
    }
    if(arr[0]=='O'&& arr[1]=='O'&&arr[2]=='O'){
        ch='o';
        count++;}
    if(arr[3]=='O'&& arr[4]=='O'&&arr[5]=='O'){
         ch='o';
         count++;}
    if(arr[6]=='O'&& arr[7]=='O'&&arr[8]=='O'){
         ch='o';
         count++;}
    if(arr[0]=='O'&& arr[3]=='O'&&arr[6]=='O'){
         ch='o';
         count++;}
    if(arr[1]=='O'&& arr[4]=='O'&&arr[7]=='O'){
        ch='o';
        count++;}
    if(arr[2]=='O'&& arr[5]=='O'&&arr[8]=='O'){
       ch='o';
       count++;}
    if(arr[0]=='O'&& arr[4]=='O'&&arr[8]=='O'){
        ch='o';
        count++;}
    if(arr[2]=='O'&& arr[4]=='O'&&arr[6]=='O'){
        ch='o';
        count++;}
 return ch;

}
int main()
{


    int flag=0;
    printf("Decide who want to be Player 1 <X> and who want to be player 2 <O> \n");
    printf("Player 1 <X> Always Start the game\n");
    int choice;
    int i=1;
    while(i<=9)
    {
        system("cls");
        board();
       if(flag==0)
       {
           printf("\n\n\t\t\tPlayer 1 Enter your choice from the board 0-9 =>");
           scanf("%d",&choice);
          bool check =false;
          while(check==false)
          {

              if(checkk(choice))
                 check=true;
              else{
                    system("cls");
                 board();
                 printf("\n\n\t\t\tYour Choice Was In appropriate , not valid!!");
                 printf("\n\n\t\t\tPlayer 1 Enter your choice from the board 0-9 =>");
                 scanf("%d",&choice);

              }
          }

          arr[choice]='X';
          system("cls");
           board();
           flag=1;
       }
        else{

             printf("\n\n\t\t\tPlayer 2 Enter your choice from the board 0-9 =>");
           scanf("%d",&choice);
           bool check =false;
          while(check==false)
          {

              if(checkk(choice))
                check=true;
              else{
                   system("cls");
                 board();
                 printf("\n\n\t\t\tYour Choice Was In appropriate , not valid!!");
                 printf("\n\n\t\t\tPlayer 2 Enter your choice from the board 0-9 =>");
                 scanf("%d",&choice);

              }
          }
          arr[choice]='O';
          system("cls");
           board();
           flag=0;
        }
        i++;
    }
     system("cls");
    board();


  char res =result();

  if(res=='x'&& count==1 )
  {
      printf("\n\n\t\t\tPlayer 1 <X> Won The Game\n");
  }
  else if(res=='o'&& count==1)
  {
      printf("\n\n\t\t\tPlayer 2 <O> Won The Game\n");
  }
 else if(count>1)
  {
    printf("\n\n\t\t\tPlayers what is this ?\n");
      printf("\n\n\t\t\tHow could it be possible\n");
      printf("\n\n\t\t\tPlease play responsibly!!!!!!!!!!\n");

  }
  else{
    printf("\n\n\t\t\tTheir is a tie between Player 1 <X> and Player 2 <0>");
  }





return 0;

}
