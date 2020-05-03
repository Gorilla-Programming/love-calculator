#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<time.h>

void frame();
void frame()
{
 int i;
 clrscr();
 textbackground(WHITE);
 textcolor(RED);
 for(i=3;i<=24;i++)
 {
  gotoxy(77,i);
  cprintf("|");
  gotoxy(2,i);
  cprintf("|");
 }
 for(i=4;i<=76;i++)
 {
  gotoxy(i,24);
  cprintf("_");
  gotoxy(i,2);
  cprintf("_");
 }
}

opration_boy();
opration_girl();
first();
first2(int);

void main()
{
 int i=0,j;
 char s[10];
 char w[50]="Hi! There Welcome to Gorilla Programming";
 frame();
 {
 textbackground(WHITE);
 textcolor(RED);
 gotoxy(20,12);
 while(w[i]!='\0')
 {
 cprintf("%c",w[i]);
 i++;
 delay(90);
 }
 }
 getch();

	   /* hear condition of which part of perform in program*/
 while(1)

 {
 textbackground(WHITE);
 clrscr();
 {
 textcolor(RED);
 printf("\n\n Please enter your Gender -\n1. Boy\n2. Girl\n3. Exit ");
 printf("\n\n Please enter ( boy / girl / exit ).. :: ");
 gets(s);

 }
 if(s[0]=='b'||s[0]=='B'&&s[1]=='o'&&s[2]=='y')
 {
 opration_boy();
 }
 else if(s[0]=='g'&&s[1]=='i'&&s[2]=='r'&&s[3]=='l')
 {
 opration_girl();
 }
 else if(s[0]=='e'&&s[1]=='x'&&s[2]=='i'&&s[3]=='t')
 break;
 else
 {
 printf("\n Please try again you have entered wrong Input ");
 }
}
getch();

}


/*FUNCTION DEFINITION*/

opration_boy()
{
 int len1,len2,n=1;
 char s1[20],s2[20];
 clrscr();
 {
 textcolor(GREEN);
 gotoxy(2,5);
 printf("Yeahh Boii ! Kindly enter your name :: ");
 gets(s1);
 }
 textcolor(GREEN);
 gotoxy(2,6);
 printf("Now Enter your Partner's name :: ");
 gets(s2);

 len1=strlen(s1);
 len2=strlen(s2);
 getch();
 clrscr();


 if(len1==len2)
 { //clrscr();
 // printf("your love is 99%");
 first();
 }
 else if(len1>len2)
 {
 n=len1*len2;
 n=n*len2;
 first2(n);
 }
 else if(len1<len2)
 {
 n=len1*len2;
 n=n*len1;
 first2(n);
 }
 else
 {
 n=50;
 first2(n);
 }
 getch();
 // break;
 return 0;
}




opration_girl()
{
 int len1,len2,n=1;
 char s1[20],s2[20];

 {
  clrscr();
  textbackground(BLACK);
  gotoxy(2,5);
  printf("Hey Girl ! \nYou looks cute today\nKindly enter your name ::");
 }
  gets(s1);
  {
  printf("\nNow Please enter your Partner's name don't be shy I will not remember this :: ");
  }
  {
  gets(s2);
  }
  len1=strlen(s1);
  len2=strlen(s2);
  gotoxy(15,18);
  getch();
  clrscr();
  if(len1==len2)
  {
   first();
   getch();
  }
  else if(len1>len2)
  {
  n=len1*len2;
  n=n*len2;
  first2(n);
  getch();
  }
  else if(len1<len2)
  {
  n=len1*len2;
  n=n*len1;
  first2(n);
  getch();
  }
  else
  {
  n=50;
  first2(n);

  getch();
  }
  // break;
  return 0;
  }

first()
{
int i=0;
for(i=0;i<100;i++)
{
 {
  textbackground(BLACK);
  gotoxy(29,13);
  cprintf("                 ");
  }
  textcolor(WHITE);
  gotoxy(27,13);
  cprintf("Great ! Your Love is %d%",i);
  delay(30);
  }
  return 0;
  }

  first2(int x)
  {
  int a;
  if(x>=126)
  x=x/2;
  else if(x>=100)
  x=67;
  else if(x>+120)
  x=60;
  for(a=0;a<x&&a!=100;a++)
  {
    textcolor(WHITE);
    gotoxy(27,13);
    cprintf("Great ! Your Love is %d%",a);
    delay(30);

  }
 return 0;
}