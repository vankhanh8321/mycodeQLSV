#pragma once
#pragma once
#include "loadfile1.h";
void nhap_1_monhoc(mon_hoc& a);
void xuat_1_monhoc(mon_hoc a);
void nhap_1_lop(lop_hoc& a);
void xuat_1_lop(lop_hoc& a);
void nhap_1_sinhvien(sinhvien& a);
//node_sv* khoitao(sinhvien a);
//void nhap_ds_sv(ds_lop& ds_lop, sinhvien& a, int vt);
void xuat_ds_sv_tronglop(ds_sv dssv);
void nhap_1_diem(diemso& a);
//node_diem* khoitao(diemso a);
//void nhap_ds_diem(ds_diem& dsdiem, diemso& a);
void xuat_ds_diem_co_mssv(ds_diem dsdiem);
int ynhay = 5;
//============ nhập xuất MÔN HỌC =============
void nhap_1_monhoc(mon_hoc& a)
{
	gotoXY(35, 20);
	cout << "Nhap ma mon hoc: "; getline(cin, a.ma_mh);
	gotoXY(35, 21);
	cout << "Nhap ten mon hoc: "; getline(cin, a.ten_mh);
	gotoXY(35, 22);
	cout << "Nhap stclt: "; cin >> a.stclt;
	gotoXY(35, 23);
	cout << "Nhap stcth: "; cin >> a.stcth;
}
void xuat_1_monhoc(mon_hoc a)
{
	gotoXY(35, ynhay); ynhay++;
	cout << "Ma mon hoc la: " << a.ma_mh << endl;
	gotoXY(35, ynhay); ynhay++;
	cout << "Ten mon hoc la: " << a.ten_mh << endl;
	gotoXY(35, ynhay); ynhay++;
	cout << "stclt la: " << a.stclt << endl;
	gotoXY(35, ynhay); ynhay++;
	cout << "stcth la: " << a.stcth << endl;
}
//============ nhập xuất LỚP ================
void nhap_1_lop(lop_hoc& a)
{
	gotoXY(35, 20);
	cout << "Nhap ma lop hoc: "; getline(cin, a.ma_lop);
	gotoXY(35, 21);
	cout << "Nhap ten lop hoc: "; getline(cin, a.ten_lop);
	gotoXY(35, 22);
	cout << "Nhap nam nhap hoc: "; cin >> a.nam_nh;
}
void xuat_1_lop(lop_hoc& a)
{
	gotoXY(35, ynhay); ynhay++;
	cout << "Ma lop hoc la: " << a.ma_lop << endl;
	gotoXY(35, ynhay); ynhay++;
	cout << "Ten lop hoc la: " << a.ten_lop << endl;
	gotoXY(35, ynhay); ynhay++;
	cout << "Nam nhap hoc la: " << a.nam_nh << endl;
}
//============ nhập xuất SINH VIÊN ==========
void nhap_1_sinhvien(sinhvien& a)
{
	gotoXY(35, 20);
	cout << "Nhap ma sinh vien: "; getline(cin, a.masv);
	gotoXY(35, 21);
	cout << "Nhap ho sinh vien: "; getline(cin, a.ho);
	gotoXY(35, 22);
	cout << "Nhap ten sinh vien: "; getline(cin, a.ten);
	gotoXY(35, 23);
	cout << "Nhap phai: "; getline(cin, a.phai);
	gotoXY(35, 24);
	cout << "Nhap sdt: "; getline(cin, a.sdt);
}
node_sv* khoitao(sinhvien a)
{
	node_sv* p = new node_sv;
	p->data.masv = a.masv;
	p->data.ho = a.ho;
	p->data.ten = a.ten;
	p->data.phai = a.phai;
	p->data.sdt = a.sdt;
	p->pnext = NULL;
	return p;
}
void nhap_ds_sv(ds_lop& ds_lop, sinhvien& a, int vt)
{
	node_sv* p = khoitao(a);
	if (ds_lop.ds[vt].dssv.phead == NULL)
	{
		ds_lop.ds[vt].dssv.phead = ds_lop.ds[vt].dssv.ptail = p;
	}
	else
	{
		ds_lop.ds[vt].dssv.ptail->pnext = p;
		ds_lop.ds[vt].dssv.ptail = p;
	}
}
void xuat_ds_sv_tronglop(ds_sv dssv)
{
	int i = 1;
	for (node_sv* h = dssv.phead; h != NULL; h = h->pnext)
	{
		gotoXY(35, ynhay); ynhay++;
		cout << "======= SINH VIEN THU " << i++ << " =======" << endl;
		gotoXY(35, ynhay); ynhay++;
		cout << "Ma sinh vien: " << h->data.masv << endl;
		gotoXY(35, ynhay); ynhay++;
		cout << "Ho sinh vien: " << h->data.ho << endl;
		gotoXY(35, ynhay); ynhay++;
		cout << "Ten sinh vien: " << h->data.ten << endl;
		gotoXY(35, ynhay); ynhay++;
		cout << "Phai: " << h->data.phai << endl;
		gotoXY(35, ynhay); ynhay++;
		cout << "sdt: " << h->data.sdt << endl;
	}
}
//============ nhập xuất ĐIỂM ==========
void nhap_1_diem(diemso& a)
{
	gotoXY(35, 20);
	cout << "Nhap ma mon hoc: "; getline(cin, a.ma_mh);
	gotoXY(35, 21);
	cout << "Nhap lan thi: "; cin >> a.lanthi;
	gotoXY(35, 22);
	cout << "Nhap so diem: "; cin >> a.diem;
}
node_diem* khoitao(diemso a)
{
	node_diem* p = new node_diem;
	p->data.ma_mh = a.ma_mh;
	p->data.lanthi = a.lanthi;
	p->data.diem = a.diem;
	p->pnext = NULL;
	return p;
}
void nhap_ds_diem(ds_diem& dsdiem, diemso& a)
{
	node_diem* p = khoitao(a);
	if (dsdiem.phead == NULL)
	{
		dsdiem.phead = dsdiem.ptail = p;
	}
	else
	{
		dsdiem.ptail->pnext = p;
		dsdiem.ptail = p;
	}

}
void xuat_ds_diem_co_mssv(ds_diem dsdiem)
{
	int i = 1;
	for (node_diem* h = dsdiem.phead; h != NULL; h = h->pnext)
	{
		gotoXY(35, ynhay); ynhay++;
		cout << "======= Diem THANH PHAN THU " << i++ << " ======= " << endl;
		gotoXY(35, ynhay); ynhay++;
		cout << "Ma mon hoc: " << h->data.ma_mh << endl;
		gotoXY(35, ynhay); ynhay++;
		cout << "Lan thi: " << h->data.lanthi << endl;
		gotoXY(35, ynhay); ynhay++;
		cout << "So diem: " << h->data.diem << endl;
	}
}