#include <stdlib.h>
int borders(char (*board)[8],int p)
{
	switch (p)
	{
		case 10: board[6][4]='p'; break;
		case 11: board[7][1]='n'; break;
		case 12: board[6][0]='p'; board[5][1]='N'; board[5][0]='N'; break;
		case 13: board[7][2]='b'; board[5][4]='b'; break;
	/*	case 14: board[1][4]=811; break;
		case 15: board[1][4]=751; break;
		case 20: board[1][4]=801; board[2][3]=802; break;
		case 21: board[1][4]=821; board[5][4]=802; board[1][7]=802; break;
		case 22: board[1][4]=781; board[2][6]=802; board[3][5]=802; break;
		case 23: board[1][4]=661; board[4][7]=802; board[0][3]=802; break;
		case 24: board[1][4]=811; board[4][7]=802; board[0][3]=802; board[5][4]=802; board[1][7]=802; break;
		case 25: board[1][4]=751; board[2][4]=802; break; */
	}
	return 0;
}
