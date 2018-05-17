#define CTEST_MAIN
#include <stdio.h>
#include "../src/board.h"
#include "board_test.c"
#include "../thirdparty/ctest.h"
CTEST(Step_P, Correct) {
    char board[8][8]={{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '}};
    borders(board,10);
    char x0='e',y0='2',strk='-',x1='e',y1='4';
    int real=checkdate(x0,y0,x1,y1,strk)*checkstartposition(board,x0,y0,x1,y1,strk)*checkfirstposition(board,x0,y0,x1,y1,strk);
    int exp = 0;
    ASSERT_EQUAL(exp, real);
}
CTEST(Step_P, Inorrect) {
    char board[8][8]={{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '}};
    borders(board,10);
    char x0='e',y0='2',strk='-',x1='a',y1='4';
    int real=checkdate(x0,y0,x1,y1,strk)*checkstartposition(board,x0,y0,x1,y1,strk)*checkfirstposition(board,x0,y0,x1,y1,strk);
    int exp = 1;
    ASSERT_NOT_EQUAL(exp, real);
}
CTEST(Step_N, Correct) {
    char board[8][8]={{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '}};
    borders(board,11);
    char x0='b',y0='1',strk='-',x1='c',y1='3';
    int real=checkdate(x0,y0,x1,y1,strk)*checkstartposition(board,x0,y0,x1,y1,strk)*checkfirstposition(board,x0,y0,x1,y1,strk);
    int exp = 0;
    ASSERT_EQUAL(exp, real);
}
CTEST(Step_N, Inorrect) {
    char board[8][8]={{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '}};
    borders(board,11);
    char x0='b',y0='1',strk='-',x1='b',y1='3';
    int real=checkdate(x0,y0,x1,y1,strk)*checkstartposition(board,x0,y0,x1,y1,strk)*checkfirstposition(board,x0,y0,x1,y1,strk);
    int exp = 1;
    ASSERT_NOT_EQUAL(exp, real);
}
CTEST(Kill_P, Correct) {
    char board[8][8]={{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '}};
    borders(board,12);
    char x0='a',y0='2',strk='x',x1='b',y1='3';
    int real=checkdate(x0,y0,x1,y1,strk)*checkstartposition(board,x0,y0,x1,y1,strk)*checkfirstposition(board,x0,y0,x1,y1,strk);
    int exp = 0;
    ASSERT_EQUAL(exp, real);
}
CTEST(Kill_P, Inorrect) {
    char board[8][8]={{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '}};
    borders(board,12);
    char x0='a',y0='2',strk='x',x1='a',y1='3';
    int real=checkdate(x0,y0,x1,y1,strk)*checkstartposition(board,x0,y0,x1,y1,strk)*checkfirstposition(board,x0,y0,x1,y1,strk);
    int exp = 1;
    ASSERT_NOT_EQUAL(exp, real);
}
CTEST(Kill_B, Correct) {
    char board[8][8]={{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '}};
    borders(board,13);
    char x0='c',y0='1',strk='x',x1='e',y1='3';
    int real=checkdate(x0,y0,x1,y1,strk)*checkstartposition(board,x0,y0,x1,y1,strk)*checkfirstposition(board,x0,y0,x1,y1,strk);
    int exp = 0;
    ASSERT_EQUAL(exp, real);
}
CTEST(Kill_B, Inorrect) {
    char board[8][8]={{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '}};
    borders(board,13);
    char x0='c',y0='1',strk='x',x1='a',y1='3';
    int real=checkdate(x0,y0,x1,y1,strk)*checkstartposition(board,x0,y0,x1,y1,strk)*checkfirstposition(board,x0,y0,x1,y1,strk);
    int exp = 1;
    ASSERT_NOT_EQUAL(exp, real);
}
CTEST(Block_B, Correct)
{
    char board[8][8]={{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '}};
    borders(board,13);
    char x0='c',y0='1',strk='-',x1='f',y1='4';
    int real=checkdate(x0,y0,x1,y1,strk)*checkstartposition(board,x0,y0,x1,y1,strk)*checkfirstposition(board,x0,y0,x1,y1,strk);
    int exp = 0;
    ASSERT_EQUAL(exp, real);	
}
CTEST(Block_B, Inorrect)
{
    char board[8][8]={{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '}};
    borders(board,13);
    char x0='c',y0='1',strk='-',x1='a',y1='3';
    int real=checkdate(x0,y0,x1,y1,strk)*checkstartposition(board,x0,y0,x1,y1,strk)*checkfirstposition(board,x0,y0,x1,y1,strk);
    int exp = 1;
    ASSERT_NOT_EQUAL(exp, real);	
}
int main(int argc, const char** argv) {
    return ctest_main(argc, argv);
}
