#include<stdio.h>
#include<stdlib.h>
#include"board.h"
void motion0(char (*a)[8],char x0,char y0,char x1,char y1,char strk)	
{
	char zdviz=0;
	zdviz=a[-(((int)y0)-56)][((int)x0)-97];
	a[-(((int)y0)-56)][((int)x0)-97]=a[-(((int)y1)-56)][((int)x1)-97];
	a[-(((int)y1)-56)][((int)x1)-97]=zdviz;
}
int checkdate(char x0,char y0,char x1,char y1,char strk)		
{
	if(((int)x0>=97)&&((int)x0<=104)&&((int)x1>=97)&&((int)x1<=104)&&((int)y0>=49)&&((int)y0<=56)&&((int)y1>=49)&&((int)y1<=56)) return 0;
	else return 1;
	return 1;
}
int	checkstartposition(char (*a)[8],char x0,char y0,char x1,char y1,char strk)		//			//проверка хода учитывая начальную позицию
{	
	if(strk=='-')
{
	switch((int)a[-(((int)y0)-56)][((int)x0)-97])
	{
	case 112:
	if(y0=='2') {
		if(((int)x0==(int)x1)&&(((int)y0==((int)y1-1))||((int)y0==((int)y1-2)))) return 0; 	else	return 1;
	}
	else
	if(((int)x0==(int)x1)&&((int)y0==((int)y1-1)))	return 0;	else	return 1;
	case 80:
	if(y0=='7')	{
		if(((int)x0==(int)x1)&&(((int)y0==((int)y1+1))||((int)y0==((int)y1+2)))) return 0; 	else	return 1;
	}
	else
	if(((int)x0==(int)x1)&&((int)y0==((int)y1+1)))	return 0;	else	return 1;
	case 98: 
	if((((int)x1-(int)x0)==((int)y1-(int)y0))||(((int)x1-(int)x0)==((int)y0-(int)y1))||(((int)x0-(int)x1)==((int)y1-(int)y0)))
	{
	
		if(((int)x1>(int)x0)&&((int)y1>(int)y0)) { for(int i=1;i<((int)x1-(int)x0);i++) if(!(checknotfigure(a,(char)((int)x0+i),(char)((int)y0+i)))) return 1; 	return 0;} 
		else if(((int)x1<(int)x0)&&((int)y1<(int)y0)) { for(int i=1;i<((int)x0-(int)x1);i++) if(!(checknotfigure(a,(char)((int)x0-i),(char)((int)y0-i)))) return 1; 	return 0;}
		else if(((int)x1>(int)x0)&&((int)y1<(int)y0)) { for(int i=1;i<((int)x0-(int)x1);i++) if(!(checknotfigure(a,(char)((int)x0+i),(char)((int)y0-i)))) return 1; 	return 0;}
		else if(((int)x1<(int)x0)&&((int)y1>(int)y0)) { for(int i=1;i<((int)x0-(int)x1);i++) if(!(checknotfigure(a,(char)((int)x0-i),(char)((int)y0+i)))) return 1; 	return 0;}
		else {	return 0; } 
	}
	return 1;
	case 66: 
	if((((int)x1-(int)x0)==((int)y1-(int)y0))||(((int)x1-(int)x0)==((int)y0-(int)y1))||(((int)x0-(int)x1)==((int)y1-(int)y0)))
	{
	
		if(((int)x1>(int)x0)&&((int)y1>(int)y0)) { for(int i=1;i<((int)x1-(int)x0);i++) if(!(checknotfigure(a,(char)((int)x0+i),(char)((int)y0+i)))) return 1;	return 0;} 
		else if(((int)x1<(int)x0)&&((int)y1<(int)y0)) { for(int i=1;i<((int)x0-(int)x1);i++) if(!(checknotfigure(a,(char)((int)x0-i),(char)((int)y0-i)))) return 1;	return 0;}
		else if(((int)x1>(int)x0)&&((int)y1<(int)y0)) { for(int i=1;i<((int)x0-(int)x1);i++) if(!(checknotfigure(a,(char)((int)x0+i),(char)((int)y0-i)))) return 1; return 0;}
		else if(((int)x1<(int)x0)&&((int)y1>(int)y0)) { for(int i=1;i<((int)x0-(int)x1);i++) if(!(checknotfigure(a,(char)((int)x0-i),(char)((int)y0+i)))) return 1; return 0;}
		else {	return 0; }
	}
	return 1;
	case 78:
		if ((((int)x1==(int)x0+1)&&((int)y1==(int)y0+2))||(((int)x1==(int)x0+2)&&((int)y1==(int)y0+1))||
			          (((int)x1==(int)x0+2)&&((int)y1==(int)y0-1))||(((int)x1==(int)x0+1)&&((int)y1==(int)y0-2))||
				      (((int)x1==(int)x0-1)&&((int)y1==(int)y0-2))||(((int)x1==(int)x0-2)&&((int)y1==(int)y0-1))||
			 		  (((int)x1==(int)x0-2)&&((int)y1==(int)y0+1))||(((int)x1==(int)x0-1)&&((int)y1==(int)y0+2))) return 0;
		else {	return 0; }
	case 110:
		if ((((int)x1==(int)x0+1)&&((int)y1==(int)y0+2))||(((int)x1==(int)x0+2)&&((int)y1==(int)y0+1))||
			          (((int)x1==(int)x0+2)&&((int)y1==(int)y0-1))||(((int)x1==(int)x0+1)&&((int)y1==(int)y0-2))||
				      (((int)x1==(int)x0-1)&&((int)y1==(int)y0-2))||(((int)x1==(int)x0-2)&&((int)y1==(int)y0-1))||
			 		  (((int)x1==(int)x0-2)&&((int)y1==(int)y0+1))||(((int)x1==(int)x0-1)&&((int)y1==(int)y0+2))) return 0;
		else {	return 0; }
	case 82: if  (((x1!= x0)&&(y1 == y0))||((x1==x0)&&(y1!=y0)))	{ 
				if ((int)x1>(int)x0){ for (int i=(int)x0+1; i<(int)x1; i++) if (!(checknotfigure(a,(char)i,y0))) return 1; return 0;}
				if ((int)x1<(int)x0){ for (int i=(int)x0-1; i>(int)x1; i--) if (!(checknotfigure(a,(char)i,y0))) return 1; return 0;}  
				if ((int)y1>(int)y0){ for (int i=(int)y0+1; i<(int)y1; i++) if (!(checknotfigure(a,x0,(char)i))) return 1; return 0;}
				if ((int)y1<(int)y0){ for (int i=(int)y0-1; i>(int)y1; i--) if (!(checknotfigure(a,x0,(char)i))) return 1; return 0;}
			}
				return 1;
	case 114: if  (((x1!= x0)&&(y1 == y0))||((x1==x0)&&(y1!=y0)))	{
				if ((int)x1>(int)x0){ for (int i=(int)x0+1; i<(int)x1; i++) if (!(checknotfigure(a,(char)i,y0))) return 1; return 0;}
				if ((int)x1<(int)x0){ for (int i=(int)x0-1; i>(int)x1; i--) if (!(checknotfigure(a,(char)i,y0))) return 1; return 0;}  
				if ((int)y1>(int)y0){ for (int i=(int)y0+1; i<(int)y1; i++) if (!(checknotfigure(a,x0,(char)i))) return 1; return 0;}
				if ((int)y1<(int)y0){ for (int i=(int)y0-1; i>(int)y1; i--) if (!(checknotfigure(a,x0,(char)i))) return 1; return 0;}
			}
				return 1;
	case 75:	if( ((int)x1==(int)x0+1||(int)x1==(int)x0-1||(int)x1==(int)x0)&&((int)y1 == (int)y0 + 1||(int)y1 == (int)y0 - 1||(int)y1==(int)y0)&&(!((int)y1==(int)y0 && (int)x1==(int)x0))) return 0; return 1;
	case 107:	if( ((int)x1==(int)x0+1||(int)x1==(int)x0-1||(int)x1==(int)x0)&&((int)y1 == (int)y0 + 1||(int)y1 == (int)y0 - 1||(int)y1==(int)y0)&&(!((int)y1==(int)y0 && (int)x1==(int)x0))) return 0; return 1;
	case 81:
	if((((int)x1-(int)x0)==((int)y1-(int)y0))||(((int)x1-(int)x0)==((int)y0-(int)y1))||(((int)x0-(int)x1)==((int)y1-(int)y0)))
	{
	
		if(((int)x1>(int)x0)&&((int)y1>(int)y0)) { for(int i=1;i<((int)x1-(int)x0);i++) if(!(checknotfigure(a,(char)((int)x0+i),(char)((int)y0+i)))) return 1;	return 0;} 
		else if(((int)x1<(int)x0)&&((int)y1<(int)y0)) { for(int i=1;i<((int)x0-(int)x1);i++) if(!(checknotfigure(a,(char)((int)x0-i),(char)((int)y0-i)))) return 1;	return 0;}
		else if(((int)x1>(int)x0)&&((int)y1<(int)y0)) { for(int i=1;i<((int)x0-(int)x1);i++) if(!(checknotfigure(a,(char)((int)x0+i),(char)((int)y0-i)))) return 1; return 0;}
		else if(((int)x1<(int)x0)&&((int)y1>(int)y0)) { for(int i=1;i<((int)x0-(int)x1);i++) if(!(checknotfigure(a,(char)((int)x0-i),(char)((int)y0+i)))) return 1; return 0;}
		else {	return 0; }
	}
	if  (((x1!= x0)&&(y1 == y0))||((x1==x0)&&(y1!=y0)))	{ 
				if ((int)x1>(int)x0){ for (int i=(int)x0+1; i<(int)x1; i++) if (!(checknotfigure(a,(char)i,y0))) return 1; return 0;}
				if ((int)x1<(int)x0){ for (int i=(int)x0-1; i>(int)x1; i--) if (!(checknotfigure(a,(char)i,y0))) return 1; return 0;}  
				if ((int)y1>(int)y0){ for (int i=(int)y0+1; i<(int)y1; i++) if (!(checknotfigure(a,x0,(char)i))) return 1; return 0;}
				if ((int)y1<(int)y0){ for (int i=(int)y0-1; i>(int)y1; i--) if (!(checknotfigure(a,x0,(char)i))) return 1; return 0;}
			}
	return 1;
	case 113:
	if((((int)x1-(int)x0)==((int)y1-(int)y0))||(((int)x1-(int)x0)==((int)y0-(int)y1))||(((int)x0-(int)x1)==((int)y1-(int)y0)))
	{
	
		if(((int)x1>(int)x0)&&((int)y1>(int)y0)) { for(int i=1;i<((int)x1-(int)x0);i++) if(!(checknotfigure(a,(char)((int)x0+i),(char)((int)y0+i)))) return 1;	return 0;} 
		else if(((int)x1<(int)x0)&&((int)y1<(int)y0)) { for(int i=1;i<((int)x0-(int)x1);i++) if(!(checknotfigure(a,(char)((int)x0-i),(char)((int)y0-i)))) return 1;	return 0;}
		else if(((int)x1>(int)x0)&&((int)y1<(int)y0)) { for(int i=1;i<((int)x0-(int)x1);i++) if(!(checknotfigure(a,(char)((int)x0+i),(char)((int)y0-i)))) return 1; return 0;}
		else if(((int)x1<(int)x0)&&((int)y1>(int)y0)) { for(int i=1;i<((int)x0-(int)x1);i++) if(!(checknotfigure(a,(char)((int)x0-i),(char)((int)y0+i)))) return 1; return 0;}
		else {	return 0; }
	}
	if  (((x1!= x0)&&(y1 == y0))||((x1==x0)&&(y1!=y0)))	{ 
				if ((int)x1>(int)x0){ for (int i=(int)x0+1; i<(int)x1; i++) if (!(checknotfigure(a,(char)i,y0))) return 1; return 0;}
				if ((int)x1<(int)x0){ for (int i=(int)x0-1; i>(int)x1; i--) if (!(checknotfigure(a,(char)i,y0))) return 1; return 0;}  
				if ((int)y1>(int)y0){ for (int i=(int)y0+1; i<(int)y1; i++) if (!(checknotfigure(a,x0,(char)i))) return 1; return 0;}
				if ((int)y1<(int)y0){ for (int i=(int)y0-1; i>(int)y1; i--) if (!(checknotfigure(a,x0,(char)i))) return 1; return 0;}
			}
	return 1;
	default: return 1;
	}
}
//!!!!!!!!!!!!!!!!!!!!
	else
{
	switch((int)a[-(((int)y0)-56)][((int)x0)-97])
	{
	case 112:
	if((((int)x0==(int)x1-1)&&((int)y0==((int)y1-1)))||(((int)x0==(int)x1+1)&&((int)y0==((int)y1-1))))	return 0;	else	return 1;
	case 80:
	if((((int)x0==(int)x1-1)&&((int)y0==((int)y1+1)))||(((int)x0==(int)x1+1)&&((int)y0==((int)y1+1))))	return 0;	else	return 1;
	case 98: 
	if((((int)x1-(int)x0)==((int)y1-(int)y0))||(((int)x1-(int)x0)==((int)y0-(int)y1))||(((int)x0-(int)x1)==((int)y1-(int)y0)))
	{
	
		if(((int)x1>(int)x0)&&((int)y1>(int)y0)) { for(int i=1;i<((int)x1-(int)x0);i++) if(!(checknotfigure(a,(char)((int)x0+i),(char)((int)y0+i)))) return 1; 	return 0;} 
		else if(((int)x1<(int)x0)&&((int)y1<(int)y0)) { for(int i=1;i<((int)x0-(int)x1);i++) if(!(checknotfigure(a,(char)((int)x0-i),(char)((int)y0-i)))) return 1; 	return 0;}
		else if(((int)x1>(int)x0)&&((int)y1<(int)y0)) { for(int i=1;i<((int)x0-(int)x1);i++) if(!(checknotfigure(a,(char)((int)x0+i),(char)((int)y0-i)))) return 1; 	return 0;}
		else if(((int)x1<(int)x0)&&((int)y1>(int)y0)) { for(int i=1;i<((int)x0-(int)x1);i++) if(!(checknotfigure(a,(char)((int)x0-i),(char)((int)y0+i)))) return 1; 	return 0;}
		else {	return 0; }
	}
	return 1;
	case 66: 
	if((((int)x1-(int)x0)==((int)y1-(int)y0))||(((int)x1-(int)x0)==((int)y0-(int)y1))||(((int)x0-(int)x1)==((int)y1-(int)y0)))
	{
	
		if(((int)x1>(int)x0)&&((int)y1>(int)y0)) { for(int i=1;i<((int)x1-(int)x0);i++) if(!(checknotfigure(a,(char)((int)x0+i),(char)((int)y0+i)))) return 1;	return 0;} 
		else if(((int)x1<(int)x0)&&((int)y1<(int)y0)) { for(int i=1;i<((int)x0-(int)x1);i++) if(!(checknotfigure(a,(char)((int)x0-i),(char)((int)y0-i)))) return 1;	return 0;}
		else if(((int)x1>(int)x0)&&((int)y1<(int)y0)) { for(int i=1;i<((int)x0-(int)x1);i++) if(!(checknotfigure(a,(char)((int)x0+i),(char)((int)y0-i)))) return 1; return 0;}
		else if(((int)x1<(int)x0)&&((int)y1>(int)y0)) { for(int i=1;i<((int)x0-(int)x1);i++) if(!(checknotfigure(a,(char)((int)x0-i),(char)((int)y0+i)))) return 1; return 0;}
		else {	return 0; }
	}
	return 1;
	case 78:
		if ((((int)x1==(int)x0+1)&&((int)y1==(int)y0+2))||(((int)x1==(int)x0+2)&&((int)y1==(int)y0+1))||
			          (((int)x1==(int)x0+2)&&((int)y1==(int)y0-1))||(((int)x1==(int)x0+1)&&((int)y1==(int)y0-2))||
				      (((int)x1==(int)x0-1)&&((int)y1==(int)y0-2))||(((int)x1==(int)x0-2)&&((int)y1==(int)y0-1))||
			 		  (((int)x1==(int)x0-2)&&((int)y1==(int)y0+1))||(((int)x1==(int)x0-1)&&((int)y1==(int)y0+2))) return 0;
		else {	return 0; }
	case 110:
		if ((((int)x1==(int)x0+1)&&((int)y1==(int)y0+2))||(((int)x1==(int)x0+2)&&((int)y1==(int)y0+1))||
			          (((int)x1==(int)x0+2)&&((int)y1==(int)y0-1))||(((int)x1==(int)x0+1)&&((int)y1==(int)y0-2))||
				      (((int)x1==(int)x0-1)&&((int)y1==(int)y0-2))||(((int)x1==(int)x0-2)&&((int)y1==(int)y0-1))||
			 		  (((int)x1==(int)x0-2)&&((int)y1==(int)y0+1))||(((int)x1==(int)x0-1)&&((int)y1==(int)y0+2))) return 0;
		else {	return 0; }
	case 82: if  (((x1!= x0)&&(y1 == y0))||((x1==x0)&&(y1!=y0)))	{ 
				if ((int)x1>(int)x0){ for (int i=(int)x0+1; i<(int)x1; i++) if (!(checknotfigure(a,(char)i,y0))) return 1; return 0;}
				if ((int)x1<(int)x0){ for (int i=(int)x0-1; i>(int)x1; i--) if (!(checknotfigure(a,(char)i,y0))) return 1; return 0;}  
				if ((int)y1>(int)y0){ for (int i=(int)y0+1; i<(int)y1; i++) if (!(checknotfigure(a,x0,(char)i))) return 1; return 0;}
				if ((int)y1<(int)y0){ for (int i=(int)y0-1; i>(int)y1; i--) if (!(checknotfigure(a,x0,(char)i))) return 1; return 0;}
			}
				return 1;
	case 114: if  (((x1!= x0)&&(y1 == y0))||((x1==x0)&&(y1!=y0)))	{
				if ((int)x1>(int)x0){ for (int i=(int)x0+1; i<(int)x1; i++) if (!(checknotfigure(a,(char)i,y0))) return 1; return 0;}
				if ((int)x1<(int)x0){ for (int i=(int)x0-1; i>(int)x1; i--) if (!(checknotfigure(a,(char)i,y0))) return 1; return 0;}  
				if ((int)y1>(int)y0){ for (int i=(int)y0+1; i<(int)y1; i++) if (!(checknotfigure(a,x0,(char)i))) return 1; return 0;}
				if ((int)y1<(int)y0){ for (int i=(int)y0-1; i>(int)y1; i--) if (!(checknotfigure(a,x0,(char)i))) return 1; return 0;}
			}
				return 1;
	case 75:	if( ((int)x1==(int)x0+1||(int)x1==(int)x0-1||(int)x1==(int)x0)&&((int)y1 == (int)y0 + 1||(int)y1 == (int)y0 - 1||(int)y1==(int)y0)&&(!((int)y1==(int)y0 && (int)x1==(int)x0))) return 0; return 1;
	case 107:	if( ((int)x1==(int)x0+1||(int)x1==(int)x0-1||(int)x1==(int)x0)&&((int)y1 == (int)y0 + 1||(int)y1 == (int)y0 - 1||(int)y1==(int)y0)&&(!((int)y1==(int)y0 && (int)x1==(int)x0))) return 0; return 1;
	case 81:
	if((((int)x1-(int)x0)==((int)y1-(int)y0))||(((int)x1-(int)x0)==((int)y0-(int)y1))||(((int)x0-(int)x1)==((int)y1-(int)y0)))
	{
	
		if(((int)x1>(int)x0)&&((int)y1>(int)y0)) { for(int i=1;i<((int)x1-(int)x0);i++) if(!(checknotfigure(a,(char)((int)x0+i),(char)((int)y0+i)))) return 1;	return 0;} 
		else if(((int)x1<(int)x0)&&((int)y1<(int)y0)) { for(int i=1;i<((int)x0-(int)x1);i++) if(!(checknotfigure(a,(char)((int)x0-i),(char)((int)y0-i)))) return 1;	return 0;}
		else if(((int)x1>(int)x0)&&((int)y1<(int)y0)) { for(int i=1;i<((int)x0-(int)x1);i++) if(!(checknotfigure(a,(char)((int)x0+i),(char)((int)y0-i)))) return 1; return 0;}
		else if(((int)x1<(int)x0)&&((int)y1>(int)y0)) { for(int i=1;i<((int)x0-(int)x1);i++) if(!(checknotfigure(a,(char)((int)x0-i),(char)((int)y0+i)))) return 1; return 0;}
		else {	return 0; }
	}
	if  (((x1!= x0)&&(y1 == y0))||((x1==x0)&&(y1!=y0)))	{ 
				if ((int)x1>(int)x0){ for (int i=(int)x0+1; i<(int)x1; i++) if (!(checknotfigure(a,(char)i,y0))) return 1; return 0;}
				if ((int)x1<(int)x0){ for (int i=(int)x0-1; i>(int)x1; i--) if (!(checknotfigure(a,(char)i,y0))) return 1; return 0;}  
				if ((int)y1>(int)y0){ for (int i=(int)y0+1; i<(int)y1; i++) if (!(checknotfigure(a,x0,(char)i))) return 1; return 0;}
				if ((int)y1<(int)y0){ for (int i=(int)y0-1; i>(int)y1; i--) if (!(checknotfigure(a,x0,(char)i))) return 1; return 0;}
			}
	return 1;
	case 113:
	if((((int)x1-(int)x0)==((int)y1-(int)y0))||(((int)x1-(int)x0)==((int)y0-(int)y1))||(((int)x0-(int)x1)==((int)y1-(int)y0)))
	{
	
		if(((int)x1>(int)x0)&&((int)y1>(int)y0)) { for(int i=1;i<((int)x1-(int)x0);i++) if(!(checknotfigure(a,(char)((int)x0+i),(char)((int)y0+i)))) return 1;	return 0;} 
		else if(((int)x1<(int)x0)&&((int)y1<(int)y0)) { for(int i=1;i<((int)x0-(int)x1);i++) if(!(checknotfigure(a,(char)((int)x0-i),(char)((int)y0-i)))) return 1;	return 0;}
		else if(((int)x1>(int)x0)&&((int)y1<(int)y0)) { for(int i=1;i<((int)x0-(int)x1);i++) if(!(checknotfigure(a,(char)((int)x0+i),(char)((int)y0-i)))) return 1; return 0;}
		else if(((int)x1<(int)x0)&&((int)y1>(int)y0)) { for(int i=1;i<((int)x0-(int)x1);i++) if(!(checknotfigure(a,(char)((int)x0-i),(char)((int)y0+i)))) return 1; return 0;}
		else {	return 0; }
	}
	if  (((x1!= x0)&&(y1 == y0))||((x1==x0)&&(y1!=y0)))	{ 
				if ((int)x1>(int)x0){ for (int i=(int)x0+1; i<(int)x1; i++) if (!(checknotfigure(a,(char)i,y0))) return 1; return 0;}
				if ((int)x1<(int)x0){ for (int i=(int)x0-1; i>(int)x1; i--) if (!(checknotfigure(a,(char)i,y0))) return 1; return 0;}  
				if ((int)y1>(int)y0){ for (int i=(int)y0+1; i<(int)y1; i++) if (!(checknotfigure(a,x0,(char)i))) return 1; return 0;}
				if ((int)y1<(int)y0){ for (int i=(int)y0-1; i>(int)y1; i--) if (!(checknotfigure(a,x0,(char)i))) return 1; return 0;}
			}
	return 1;
	default: return 1;	
	}
}
}
void kill(char (*a)[8],char x0,char y0,char x1,char y1,char strk)		// ход x
{
	a[-(((int)y1)-56)][((int)x1)-97]=a[-(((int)y0)-56)][((int)x0)-97];
	a[-(((int)y0)-56)][((int)x0)-97]=' ';
}
int	checkfirstposition(char (*a)[8],char x0,char y0,char x1,char y1,char strk)				
{
	if(a[-(((int)y0)-56)][((int)x0)-97]!=' ')
	{
	if(strk=='-') { if(a[-(((int)y1)-56)][((int)x1)-97]==' ') return 0; else return 1;	}
	if(strk=='x') { if(a[-(((int)y1)-56)][((int)x1)-97]!=' ') return 0; else return 1;	} 
	}
	else return 1;
	return 1;
}
int queue(char (*a)[8],char x0,char y0,char x1,char y1,char strk,int k)								//проверка на очередность хода первые-маленькие
{
	if(x0==x1 && y0==y1)
	return 0;
	if(k%2)
	{
		if((int)a[-(((int)y0)-56)][((int)x0)-97]>94)
		{
			if(strk=='x'&&(((int)a[-(((int)y0)-56)][((int)x0)-97]==80)||((int)a[-(((int)y0)-56)][((int)x0)-97]==66)||((int)a[-(((int)y0)-56)][((int)x0)-97]==78)||((int)a[-(((int)y0)-56)][((int)x0)-97]==82)||((int)a[-(((int)y0)-56)][((int)x0)-97]==75)||((int)a[-(((int)y0)-56)][((int)x0)-97]==81)))
			return 1;
			else if(strk=='-') return 1; else return 0;
			return 1;
		}
		else return 0;
	}
	else
	{
		if((int)a[-(((int)y0)-56)][((int)x0)-97]<94)
		{
			if(strk=='x'&&(((int)a[-(((int)y0)-56)][((int)x0)-97]==112)||((int)a[-(((int)y0)-56)][((int)x0)-97]==98)||((int)a[-(((int)y0)-56)][((int)x0)-97]==110)||((int)a[-(((int)y0)-56)][((int)x0)-97]==114)||((int)a[-(((int)y0)-56)][((int)x0)-97]==107)||((int)a[-(((int)y0)-56)][((int)x0)-97]==113)))
			return 1;
			else if(strk=='-') return 1; else return 0;
			return 1;
		}
		else return 0;
	}
}
int checknotfigure(char (*a)[8],char x, char y) //
{
	if((int)a[-(((int)y)-56)][((int)x)-97]==' ') return 1;
	return 0;
}
