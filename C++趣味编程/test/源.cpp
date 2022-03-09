#include "graphics.h"
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
	initgraph(200, 200);
	setcolor(EGERGB(0X00, 0X80, 0X80));
	setfillcolor(EGERGB(0XFF, 0, 0));
	bar(100, 100, 150, 150);
	setviewport(50, 50, 130, 130, 1);
	outtextxy(0, 0, "bakdf");
	circle(120, 120, 100);
	//cout << "getwidth()" << getwidth() << "getheight()" << getheight() << endl;
	char buf[20];
	_ltoa(getwidth(), buf, 10);
	outtextxy(30, 20, buf);
	setviewport(0, 0, getwidth() + 500, getheight() + 500);
	_ltoa(getwidth(), buf, 10);
	outtextxy(60, 40, buf);
	outtextxy(0, 0, "iioowieie");
	circle(100, 100, 100);
	PIMAGE img = newimage();
	setfillcolor(EGERGB(0x0, 0x80, 0x00));
	bar(100, 100, 130, 130);
	getimage(img, 100, 100, 120, 120);
	setfillcolor(EGERGB(0x80, 0x80, 0x00),img);
	bar(0, 0, 130, 130, img);
	getch();
	closegraph();
}