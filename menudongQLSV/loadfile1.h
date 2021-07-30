#pragma once
#pragma once
#include "ctdl1.h";
#include "xuli1.h";
node_sv* khoitao(sinhvien a);
void nhap_ds_sv(ds_lop& ds_lop, sinhvien& a, int vt);
node_diem* khoitao(diemso a);
void nhap_ds_diem(ds_diem& dsdiem, diemso& a);
void doc_file_dsmon(ds_mon_hoc& ds)
{
	ifstream filein;
	filein.open("dsmon.txt", ios_base::in);
	while (filein.eof() != true)
	{
		getline(filein, ds.ds[ds.slmon].ma_mh, ',');
		getline(filein, ds.ds[ds.slmon].ten_mh, ',');
		filein >> ds.ds[ds.slmon].stclt;
		filein.ignore();
		filein >> ds.ds[ds.slmon].stcth;
		filein.ignore();
		ds.slmon++;
	}
	filein.close();
}
void doc_file_dslop(ds_lop& ds)
{
	ifstream filein;
	filein.open("dslop.txt", ios_base::in);
	while (filein.eof() != true)
	{
		getline(filein, ds.ds[ds.sllop].ma_lop, ',');
		getline(filein, ds.ds[ds.sllop].ten_lop, ',');
		filein >> ds.ds[ds.sllop].nam_nh;
		filein.ignore();
		ds.sllop++;
	}
	filein.close();
}
void doc_file_dssv(ds_lop& ds_lop)
{
	ifstream filein;
	filein.open("dssv.txt", ios_base::in);
	while (filein.eof() != true)
	{
		for (int i = 0; i < ds_lop.sllop; i++)
		{
			int sl;
			filein >> sl;
			filein.ignore();
			for (int j = 0; j < sl; j++)
			{
				sinhvien a;
				getline(filein, a.masv, ',');
				getline(filein, a.ho, ',');
				getline(filein, a.ten, ',');
				getline(filein, a.phai, ',');
				getline(filein, a.sdt);
				nhap_ds_sv(ds_lop, a, i);
			}
		}
		filein.close();
	}
}
void doc_file_dsdiem(ds_lop& dslop)
{
	ifstream filein;
	filein.open("dsdiem.txt", ios_base::in);
	while (filein.eof() != true)
	{
		for (int i = 0; i < dslop.sllop; i++)
		{
			for (node_sv* k = dslop.ds[i].dssv.phead; k != NULL; k = k->pnext)
			{
				int sl;
				filein >> sl;
				filein.ignore();
				for (int j = 0; j < sl; j++)
				{
					diemso a;
					getline(filein, a.ma_mh, ',');
					filein >> a.lanthi;
					filein.ignore();
					filein >> a.diem;
					nhap_ds_diem(k->data.dsdiem, a);
					filein.ignore();
				}
			}
		}
		filein.close();
	}
	
}