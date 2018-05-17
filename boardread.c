#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"board.h"
#include"boardread.h"
void scandate(char (*a)[8],char *x0,char *y0,char *x1,char *y1,char *strk)			//ввод !возможных! данных//
{
	char sr[5];
	scanf("%s",sr);
//	cin>>x0>>y0>>strk>>x1>>y1;	
	*(x0)=sr[0];
	*(y0)=sr[1];
	*(strk)=sr[2];
	*(x1)=sr[3];
	*(y1)=sr[4];
//	printf("%c%c%c%c%c \n",x0,y0,strk,x1,y1);
	while(checkdate(*(x0),*(y0),*(x1),*(y1),*(strk))||checkstartposition(a,*(x0),*(y0),*(x1),*(y1),*(strk))||checkfirstposition(a,*(x0),*(y0),*(x1),*(y1),*(strk)))
	{
	scanf("%s",sr);
//	cin>>x0>>y0>>strk>>x1>>y1;	
	*(x0)=sr[0];
	*(y0)=sr[1];
	*(strk)=sr[2];
	*(x1)=sr[3];
	*(y1)=sr[4];
//	printf("%c%c%c%c%c \n",x0,y0,strk,x1,y1);
	}
}
