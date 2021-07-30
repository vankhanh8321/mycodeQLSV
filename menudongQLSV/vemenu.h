#pragma once
#include "mylib.h";
#include "xuli1.h";
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;
void ve_tuong();
void ve_box_qlsv();
void ve_box_mon(int mon);
void ve_box_lop(int lop);
void ve_box_sv(int sv);
void ve_box_diem(int diem);
void ve_box_thoat(int thoat);
void ve_nhap_xuat(int nhap, int xuat,string a);
void vemenu(int mon,int lop,int sv,int diem,int thoat)
{
	ve_box_qlsv();
	ve_box_mon(mon);
	ve_box_lop(lop);
	ve_box_sv(sv);
	ve_box_diem(diem);
	ve_box_thoat(thoat);
	ve_tuong();
}
void ve_tuong()
{
	for (int x = 11; x <= 94; x++)
	{
		gotoXY(x, 1);
		cout << char(196);
		gotoXY(x, 25);
		cout << char(196);
	}
	for (int y = 2; y <= 24; y++)
	{
		gotoXY(10, y);
		cout << char(179);
		gotoXY(95, y);
		cout << char(179);
	}
	gotoXY(10, 1);
	cout << char(218);
	gotoXY(95, 25);
	cout << char(217);
	gotoXY(95, 1);
	cout << char(191);
	gotoXY(10, 25);
	cout << char(192);
}
void ve_box_qlsv()
{
	for (int x = 31; x <= 69; x++)
	{
		gotoXY(x, 3);
		cout << char(196);
		gotoXY(x, 5);
		cout << char(196);
	}
	for (int y = 4; y <=4; y++)
	{
		gotoXY(30, y);
		cout << char(179);
		gotoXY(70, y);
		cout << char(179);
	}
	gotoXY(30, 3);
	cout << char(218);
	gotoXY(70, 5);
	cout << char(217);
	gotoXY(70, 3);
	cout << char(191);
	gotoXY(30, 5);
	cout << char(192);
	SetColor(12);
	gotoXY(31, 4);
	cout <<setw(33)<< "HE THONG QUAN LY SINH VIEN";
	SetColor(7);
}
void ve_box_mon(int mon)
{
	SetColor(mon);
	for (int x = 16; x <= 29; x++)
	{
		gotoXY(x, 8);
		cout << char(196);
		gotoXY(x, 10);
		cout << char(196);
	}
	for (int y = 9; y <= 9; y++)
	{
		gotoXY(15, y);
		cout << char(179);
		gotoXY(30, y);
		cout << char(179);
	}
	gotoXY(15, 8);
	cout << char(218);
	gotoXY(30, 10);
	cout << char(217);
	gotoXY(30, 8);
	cout << char(191);
	gotoXY(15, 10);
	cout << char(192);
	gotoXY(16, 9);
	cout << setw(10) << "MON HOC";
	SetColor(7);
}
void ve_nhap_xuat(int nhap, int xuat, string a)
{
	SetColor(nhap);
	for (int x = 44; x <= 57; x++)
	{
		gotoXY(x, 8);
		cout << char(196);
		gotoXY(x, 10);
		cout << char(196);
	}
	for (int y = 9; y <= 9; y++)
	{
		gotoXY(43, y);
		cout << char(179);
		gotoXY(58, y);
		cout << char(179);
	}
	gotoXY(43, 8);
	cout << char(218);
	gotoXY(58, 10);
	cout << char(217);
	gotoXY(58, 8);
	cout << char(191);
	gotoXY(43, 10);
	cout << char(192);
	gotoXY(44, 9);
	cout << setw(8) << "NHAP "<<a;
	SetColor(xuat);
	for (int x = 44; x <= 57; x++)
	{
		gotoXY(x, 13);
		cout << char(196);
		gotoXY(x, 15);
		cout << char(196);
	}
	for (int y = 14; y <= 14; y++)
	{
		gotoXY(43, y);
		cout << char(179);
		gotoXY(58, y);
		cout << char(179);
	}
	gotoXY(43, 13);
	cout << char(218);
	gotoXY(58, 15);
	cout << char(217);
	gotoXY(58, 13);
	cout << char(191);
	gotoXY(43, 15);
	cout << char(192);
	gotoXY(44, 14);
	cout << setw(8) << "XUAT "<<a;
	SetColor(7);
}
void ve_box_lop(int lop)
{
	SetColor(lop);
	for (int x = 71; x <= 84; x++)
	{
		gotoXY(x, 8);
		cout << char(196);
		gotoXY(x, 10);
		cout << char(196);
	}
	for (int y = 9; y <= 9; y++)
	{
		gotoXY(70, y);
		cout << char(179);
		gotoXY(85, y);
		cout << char(179);
	}
	gotoXY(70, 8);
	cout << char(218);
	gotoXY(85, 10);
	cout << char(217);
	gotoXY(85, 8);
	cout << char(191);
	gotoXY(70, 10);
	cout << char(192);
	gotoXY(71, 9);
	cout << setw(10) << "LOP HOC";
	SetColor(7);
}
void ve_box_sv(int sv)
{
	SetColor(sv);
	for (int x = 16; x <= 29; x++)
	{
		gotoXY(x, 13);
		cout << char(196);
		gotoXY(x, 15);
		cout << char(196);
	}
	for (int y = 14; y <= 14; y++)
	{
		gotoXY(15, y);
		cout << char(179);
		gotoXY(30, y);
		cout << char(179);
	}
	gotoXY(15, 13);
	cout << char(218);
	gotoXY(30, 15);
	cout << char(217);
	gotoXY(30, 13);
	cout << char(191);
	gotoXY(15, 15);
	cout << char(192);
	gotoXY(16, 14);
	cout << setw(11) << "SINH VIEN";
	SetColor(7);
}
void ve_box_diem(int diem)
{
	SetColor(diem);
	for (int x = 71; x <= 84; x++)
	{
		gotoXY(x, 13);
		cout << char(196);
		gotoXY(x, 15);
		cout << char(196);
	}
	for (int y = 14; y <= 14; y++)
	{
		gotoXY(70, y);
		cout << char(179);
		gotoXY(85, y);
		cout << char(179);
	}
	gotoXY(70, 13);
	cout << char(218);
	gotoXY(85, 15);
	cout << char(217);
	gotoXY(85, 13);
	cout << char(191);
	gotoXY(70, 15);
	cout << char(192);
	gotoXY(71, 14);
	cout << setw(11) << "DIEM SO";
	SetColor(7);
}
void ve_box_thoat(int thoat)
{
	SetColor(thoat);
	for (int x = 16; x <= 24; x++)
	{
		gotoXY(x, 18);
		cout << char(196);
		gotoXY(x, 20);
		cout << char(196);
	}
	for (int y = 19; y <= 19; y++)
	{
		gotoXY(15, y);
		cout << char(179);
		gotoXY(25, y);
		cout << char(179);
	}
	gotoXY(15, 18);
	cout << char(218);
	gotoXY(25, 20);
	cout << char(217);
	gotoXY(25, 18);
	cout << char(191);
	gotoXY(15, 20);
	cout << char(192);
	gotoXY(16, 19);
	cout << setw(7) << "THOAT";
	SetColor(7);
}