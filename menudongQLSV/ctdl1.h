#pragma once
#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
//============== MÔN Học ==============================
typedef struct mon_hoc
{
	string ma_mh, ten_mh;
	int stclt, stcth;
}mon_hoc;

typedef struct ds_mon_hoc
{
	mon_hoc ds[100];
	int slmon = 0;
}ds_mon_hoc;
//============== ĐIỂM ================================
typedef struct diemso
{
	string ma_mh;
	int lanthi;
	float diem;
}diemso;

struct node_diem
{
	diemso data;
	node_diem* pnext;
};
typedef struct node_diem node_diem;

typedef struct ds_diem
{
	node_diem* phead = NULL;
	node_diem* ptail = NULL;
}ds_diem;
//=============== SINH VIên ===========================
typedef struct sinhvien
{
	string masv, ho, ten, phai, sdt;
	ds_diem dsdiem;
}sinhvien;

struct node_sv
{
	sinhvien data;
	node_sv* pnext;
};
typedef struct node_sv node_sv;

typedef struct ds_sv
{
	node_sv* phead = NULL;
	node_sv* ptail = NULL;
}ds_sv;
//================== LỚP học =========================
typedef struct lop_hoc
{
	string ma_lop, ten_lop;
	int nam_nh;
	ds_sv dssv;
}lop_hoc;

typedef struct ds_lop
{
	lop_hoc ds[100];
	int sllop = 0;
}ds_lop;
