//press w for jump movement
//press a for left movement
//press s for down movement
//press d for right movement
#include<stdio.h>
#include<conio.h>
void main()
{

  char ch;
  int i,j,count=0,up=0;
  clrscr();

  printf("\n\n\n");

  start:
  clrscr();
  printf("\n\n\n");
 for(i=0;i<=18;i++)
{
  for(j=0;j<=78;j++)
 {

  //logic for ground
  if((i==2))
  {
  textcolor(11);
  cprintf("*");
  }
  else if((i==13))
  {
  textcolor(10);
  cprintf("*");
  }
  else if((i==14))
  {
  textcolor(7);
  cprintf("*");
  }
  //logic for object
  else if((i==12+up&&j==1+count)||(i==12+up&&j==2+count)||(i==12+up&&j==3+count)||(i==12+up)||(i==12+up&&j==6+count)||(i==12+up&&j==7+count)||(i==11+up&&j==3+count)||(i==11+up&&j==4+count)||(i==11+up&&j==5+count)||  (i==10+up&&j==1+count)||(i==10+up&&j==2+count)||(i==10+up&&j==3+count)||(i==10+up&&j==4+count)||(i==10+up&&j==5+count)||(i==10+up&&j==6+count)||(i==10+up&&j==7+count)||  (i==9+up&&j==3+count)||(i==9+up&&j==4+count)||(i==9+up&&j==5+count))
  {
  textcolor(12);
  cprintf(".");
  }

  else if((i==12&&j==50)||(i==10&&j==50))
  {
  textcolor(5);
  cprintf("*");
  }

  else
  {
  printf(" ");
  }

  if(i==18&&j==78)
  {

   ch=getch();
   if(ch=='d')
   {
    count++;
    goto start;
   }
   if(ch=='a')
   {
    count--;
    goto start;
   }
   if(ch=='w')
   {
   //jump upp_hold
   up=-3;
   clrscr();
   printf("\n\n\n");
  for(i=0;i<=18;i++)
{
  for(j=0;j<=78;j++)
 {

  //logic for ground
  if((i==2))
  {
  textcolor(11);
  cprintf("*");
  }
  else if((i==13))
  {
  textcolor(10);
  cprintf("*");
  }
  else if((i==14))
  {
  textcolor(7);
  cprintf("*");
  }

  //logic for object
  else if((i==12+up)||(i==12+up&&j==2+count)||(i==12+up&&j==3+count)||(i==12+up&&j==5+count)||(i==12+up&&j==6+count)||(i==12+up&&j==7+count)||(i==11+up&&j==3+count)||(i==11+up&&j==4+count)||(i==11+up&&j==5+count)||  (i==10+up&&j==1+count)||(i==10+up&&j==2+count)||(i==10+up&&j==3+count)||(i==10+up&&j==4+count)||(i==10+up&&j==5+count)||(i==10+up&&j==6+count)||(i==10+up&&j==7+count)||  (i==9+up&&j==3+count)||(i==9+up&&j==4+count)||(i==9+up&&j==5+count))
  {
  textcolor(12);
  cprintf(".");
  }

  else if((i==12&&j==50)||(i==10&&j==50))
  {
  textcolor(5);
  cprintf("*");
  }


  else
  {
  printf(" ");
  }

 }
  printf("\n");
}

 delay(300);
 clrscr();

 //jump down_release
 up=0;
 goto start;

   }

   if(ch=='s')
   {
    up++;
    goto start;
   }
  }

 }
  printf("\n");

}

}
