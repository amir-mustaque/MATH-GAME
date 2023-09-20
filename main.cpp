#include<iostream>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
using namespace std;
void play();
void instruction();
int main ()
{
    srand( (unsigned)time(NULL) );
    char option;
    
    do
    {
         system(" cls");
         cout<<"-----------------------------------------------------"<<endl;
         cout<<"    ******           MATH GAME     ******           "<<endl;
         cout<<"-----------------------------------------------------"<<endl;
         cout<<"1.PLAY"<<endl;
         cout<<"2.INSTRUCTION"<<endl;
         cout<<"3.EXIT"<<endl<<endl;
         cout<<"choose option(1-3):";
         cin>>option;
         
         switch(option)
         {
            case '1':
                    play();
                    break;
            case  '2':
                    instruction();
                    break;
         }
    }while(option !='3');
    
    return 0;     
}
void play()
{
    int level,limit;
    char option;
     system("cls");
     cout<<"------------------------------------------"<<endl;
     cout<<"              MATH GAEME                   "<<endl<<endl;
     cout<<"-------------------------------------------"<<endl<<endl;
     cout<<"1. level 1"<<endl;
     cout<<"2.level 2"<<endl;
     cout<<"3.level 3"<<endl;
     cout<<"4. back to menu"<<endl<<endl;
     cout<<"choose option (1-4):";
     cin>>option;
     switch(option)
     {
         case '1': limit=10;break;
         case '2': limit=20;break;
         case '3': limit=100;break;
         case '4': break;
     }
     float q1,q2,ans,correctans;
     int correctno=0,totalno;
     char operation;
     totalno=5;
     if( option !='4')
     {
         for(int i=0; i<totalno;i++)
         {
             q1=rand()%limit;
             q2=rand()%limit;
             int tmpop=rand()%3;
             switch(tmpop)
             {
                 case 0:operation='+';break;
                 case 1:operation='-';break;
                 case 2:operation='*';break;
             }
             cout<<"("<<(i+1)<<").";
             cout<<q1<<" "<<operation<<" "<<q2<<"=";
             cin>>ans;
             switch(operation)
             {
                 case '+':correctans=q1+q2;break;
                 case '-':correctans=q1-q2;break;
                 case '*':correctans=q1*q2;break;
             }
             if (correctans==ans)
             {
                 correctno++;
                 cout<<"correct."<<endl<<endl;
             }
             else
             { 
                 cout<<"worng"<<endl;
                 cout<<q1<<" "<<operation<<" "<<q2<<"=";
                 cout<<correctans<<endl<<endl;
             }
         }
         cout<<"TOTAL QUESTION ASKED   : "<<totalno<<endl;
         cout<<"CORRECT ANSWER GIVEN BY YOU : "<<correctno<<endl<<endl;
         cout<<"press any key to continue....."<<endl;
         getch();
     }
}
void instruction()
{
    system("cls");
    cout<<"-----------------------------------------"<<endl;
    cout<<"              INSTRUCTION                 "<<endl;
    cout<<"------------------------------------------"<<endl<<endl;
    cout<<"1. THIS GAME CONTAIN BASIC ARITHMETIC PROBLEMS"<<endl;
    cout<<"2. EACH CORRECT ANSWER WILL GIVE YOU 1 POINT"<<endl;
    cout<<"3. TOTAL QUESTION WILL BE 5 "<<endl;
    cout<<"4. TO WIN, YOU NEED 3 OR MORE CORRECT ANSWER"<<endl;
    cout<<endl;
    cout<<"press any key to continue........."<<endl;
    getch();
    
}























































