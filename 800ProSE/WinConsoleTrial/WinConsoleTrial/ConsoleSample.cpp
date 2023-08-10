//c/c++ console(控制台)编程详解
// 控制台文本窗口的控制是基于win32 api(win32 api可理解为微软给我们提供的一系列函数的集合)实现的;
//https://www.cnblogs.com/flowingwind/p/8159035.html



//例：键盘操作控制


#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
HANDLE hOut;
//清除函数
void cle(COORD ClPos)
{
    SetConsoleCursorPosition(hOut, ClPos);
    cout << "            " << endl;
}
//打印函数
void prin(COORD PrPos)
{
    SetConsoleCursorPosition(hOut, PrPos);
    cout << "hello world!" << endl;
}
//移动函数
void Move(COORD* MoPos, int key)
{
    switch (key)
    {
    case 72: MoPos->Y--; break;
    case 75: MoPos->X--; break;
    case 77: MoPos->X++; break;
    case 80: MoPos->Y++; break;
    default: break;
    }
}

int main2()
{
    cout << "用方向键移动下行输出内容" << endl;
    hOut = GetStdHandle(STD_OUTPUT_HANDLE);//取句柄
    COORD CrPos = { 0, 1 };//保存光标信息
    prin(CrPos);//打印
    //等待键按下
    while (1)
    {
        if (_kbhit())
        {
            cle(CrPos);//清除原有输出
            Move(&CrPos, _getch());
            prin(CrPos);
        }
    }
    return 0;
}