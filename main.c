#include<stdio.h>
#include<stdlib.h>
#include"board.h"
#include"boardprint.h"
#include"boardread.h"
int main()
{
  int k=1;
  char a[8][8]={
  {'R','N','B','Q','K','B','N','R'},
  {'P','P','P','P','P','P','P','P'},
  {' ',' ',' ',' ',' ',' ',' ',' '},
  {' ',' ',' ',' ',' ',' ',' ',' '},
  {' ',' ',' ',' ',' ',' ',' ',' '},
  {' ',' ',' ',' ',' ',' ',' ',' '},
  {'p','p','p','p','p','p','p','p'},
  {'r','n','b','k','q','b','n','r'}
	};
  char x0,y0,x1,y1,strk; 
  while(1)
  {
  scandate(a,&(x0),&(y0),&(x1),&(y1),&(strk));
  if(queue(a,x0,y0,x1,y1,strk,k))
  	{
  	  if(strk=='-')
	  motion0(a,x0,y0,x1,y1,strk);
	  else
	  kill(a,x0,y0,x1,y1,strk);
	  printboard(a);
	  k++;
	}
  }
  return 0;
}
