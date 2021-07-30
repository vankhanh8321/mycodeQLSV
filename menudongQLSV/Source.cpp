#include "vemenu.h";
int main()
{
	ds_mon_hoc dsmh;
	ds_lop dslop;
	doc_file_dsmon(dsmh);
	doc_file_dslop(dslop);
	doc_file_dssv(dslop);
	doc_file_dsdiem(dslop);
	while (true)
	{
		gotoXY(97, 10);
		cout << "MUI TEN : DI CHUYEN";
		gotoXY(97, 11);
		cout << " ENTER  : LUA CHON";
		gotoXY(97, 12);
		cout << "  TAB   : TRO VE MENU";
		gotoXY(97, 13);
		cout << "  ESC   : THOAT";
		vemenu(10, 7, 7, 7, 7);
		int check = 1;//1 mon........2 lop....3 sv.....4 diem......5 thoat
		int checktam = 1, checktam2 = 0, checktam3 = 0, checktam4 = 0;
		while (true)
		{
			ShowCur(0);
			if (_kbhit())
			{
				char c = _getch();
				if (c == -32 && checktam2 == 0)
				{
					c = _getch();
					if (c == 80)//xuoongs
					{
						if (check == 1)
						{
							checktam = 3;
							vemenu(7, 7, 10, 7, 7);
						}
						else if (check == 2)
						{
							checktam = 4;
							vemenu(7, 7, 7, 10, 7);
						}
						else if (check == 3)
						{
							checktam = 5;
							vemenu(7, 7, 7, 7, 10);
						}
					}
					else if (c == 72)
					{
						if (check == 3)
						{
							checktam = 1;
							vemenu(10, 7, 7, 7, 7);
						}
						else if (check == 5)
						{
							checktam = 3;
							vemenu(7, 7, 10, 7, 7);
						}
						else if (check == 4)
						{
							checktam = 2;
							vemenu(7, 10, 7, 7, 7);
						}
					}
					else if (c == 75)
					{
						if (check == 2)
						{
							checktam = 1;
							vemenu(10, 7, 7, 7, 7);
						}
						else if (check == 4)
						{
							checktam = 3;
							vemenu(7, 7, 10, 7, 7);
						}
					}
					else if (c == 77)
					{
						if (check == 1)
						{
							checktam = 2;
							vemenu(7, 10, 7, 7, 7);
						}
						else if (check == 3)
						{
							checktam = 4;
							vemenu(7, 7, 7, 10, 7);
						}
					}
					check = checktam;
				}
				else if (c == 13 && checktam3 == 0)
				{
					if (check == 1)
					{
						checktam2 = 1;
						vemenu(10, 16, 16, 16, 16);
						ve_nhap_xuat(10, 7, "MON");
					}
					else if (check == 2)
					{
						checktam2 = 2;
						vemenu(16, 10, 16, 16, 16);
						ve_nhap_xuat(10, 7, "LOP");
					}
					else if (check == 3)
					{
						checktam2 = 3;
						vemenu(16, 16, 10, 16, 16);
						ve_nhap_xuat(10, 7, "SV");
					}
					else if (check == 4)
					{
						checktam2 = 4;
						vemenu(16, 16, 16, 10, 16);
						ve_nhap_xuat(10, 7, "DIEM");
					}
					else if (check == 5)
					{
						return 1;
					}
					checktam3 = 10;
					checktam4 = 10;
				}
				else if (c == -32 && checktam2 != 0)
				{
					if (c == -32 && checktam2 == 1)
					{
						c = _getch();
						if (c == 80)
						{
							checktam3 = 1;
							checktam4 = 1;
							vemenu(10, 16, 16, 16, 16);
							ve_nhap_xuat(7, 10, "MON");
						}
						else if (c == 72)
						{
							checktam3 = 10;
							checktam4 = 10;
							vemenu(10, 16, 16, 16, 16);
							ve_nhap_xuat(10, 7, "MON");
						}
					}
					else if (c == -32 && checktam2 == 2)
					{
						c = _getch();
						if (c == 80)
						{
							checktam3 = 2;
							checktam4 = 2;
							vemenu(16, 10, 16, 16, 16);
							ve_nhap_xuat(7, 10, "LOP");
						}
						else if (c == 72)
						{
							checktam3 = 20;
							checktam4 = 20;
							vemenu(16, 10, 16, 16, 16);
							ve_nhap_xuat(10, 7, "LOP");
						}
					}
					else if (c == -32 && checktam2 == 3)
					{
						c = _getch();
						if (c == 80)
						{
							checktam3 = 3;
							checktam4 = 3;
							vemenu(16, 16, 10, 16, 16);
							ve_nhap_xuat(7, 10, "SV");
						}
						else if (c == 72)
						{
							checktam3 = 30;
							checktam4 = 30;
							vemenu(16, 16, 10, 16, 16);
							ve_nhap_xuat(10, 7, "SV");
						}
					}
					else if (c == -32 && checktam2 == 4)
					{
						c = _getch();
						if (c == 80)
						{
							checktam3 = 4;
							checktam4 = 4;
							vemenu(16, 16, 16, 10, 16);
							ve_nhap_xuat(7, 10, "DIEM");
						}
						else if (c == 72)
						{
							checktam3 = 40;
							checktam4 = 40;
							vemenu(16, 16, 16, 10, 16);
							ve_nhap_xuat(10, 7, "DIEM");
						}
					}
				}
				else if (c == 13 && checktam3 != 0)
				{
				gotoXY(97, 10);
				cout << "                   ";
				gotoXY(97, 11);
				cout << "                  ";
				gotoXY(97, 12);
				cout << "                     ";
				gotoXY(97, 13);
				cout << "               ";
					if (checktam3 == 10 && checktam4 == 10 && checktam2 == 1)
					{
						int sl;
						gotoXY(35, 18);
						cout << "Nhap so luong mon can nhap: ";
						cin >> sl;
						for (int i = 1; i <= sl; i++)
						{
							vemenu(10, 16, 16, 16, 16);
							ve_nhap_xuat(10, 7, "MON");
							cin.ignore();
							gotoXY(24, 19);
							cout << "\t\tNhap mon hoc thu " << i << ": " << endl;
							nhap_1_monhoc(dsmh.ds[dsmh.slmon++]);
							system("cls");
						}
						system("cls");
						break;
					}
					else if (checktam3 == 1 && checktam4 == 1)
					{
						system("cls");
						for (int i = 0; i < dsmh.slmon; i++)
						{
							gotoXY(30, ynhay); ynhay++;
							cout << "\t\t======== Mon hoc thu " << i + 1 << ": =======" << endl;
							xuat_1_monhoc(dsmh.ds[i]);
							cout << endl;
						}
						system("pause");
						system("cls");
						break;
					}
					else if (checktam3 == 20 && checktam4 == 20 || checktam2 == 2 && checktam3 != 2)
					{
						int sl;
						gotoXY(35, 18);
						cout << "Nhap so luong lop can nhap: "; cin >> sl;
						for (int i = 1; i <= sl; i++)
						{
							vemenu(16, 10, 16, 16, 16);
							ve_nhap_xuat(10, 7, "LOP");
							cin.ignore();
							gotoXY(24, 19);
							cout << "\t\tNhap lop hoc thu " << i << ": " << endl;
							nhap_1_lop(dslop.ds[dslop.sllop++]);
							system("cls");
						}
						system("cls");
						break;
					}
					else if (checktam3 == 2 && checktam4 == 2)
					{
						system("cls");
						for (int i = 0; i < dslop.sllop; i++)
						{
							gotoXY(30, ynhay); ynhay++;
							cout << "\t\t======= Lop hoc thu " << i + 1 << ": =======" << endl;
							xuat_1_lop(dslop.ds[i]);
							cout << endl;
						}
						system("pause");
						system("cls");
						break;
					}
					else if (checktam3 == 30 && checktam4 == 30 || checktam2 == 3 && checktam3 != 3)
					{
						string malop;
						gotoXY(35, 18);
						cout << "Nhap ma lop can them sinhvien: "; getline(cin, malop);
						for (int i = 0; i < dslop.sllop; i++)
						{
							if (dslop.ds[i].ma_lop == malop)
							{
								int sl;
								gotoXY(35, 19);
								cout << "Nhap so luong sinh vien can nhap: "; cin >> sl;
								cin.ignore();
								for (int j = 1; j <= sl; j++)
								{
									vemenu(16, 16, 10, 16, 16);
									ve_nhap_xuat(10, 7, "SV");
									gotoXY(24, 19);
									cout << "\t\tNhap sinh vien thu " << j++ << ": " << endl;
									sinhvien a;
									nhap_1_sinhvien(a);
									nhap_ds_sv(dslop, a, i);
									system("cls");
								}
								system("cls");
								break;
							}
						}
					}
					else if (checktam3 == 3 && checktam4 == 3)
					{
						string malop;
						gotoXY(35, 18);
						cout << "Nhap ma lop can xuat sinhvien: "; getline(cin, malop);
						for (int i = 0; i < dslop.sllop; i++)
						{
							if (dslop.ds[i].ma_lop == malop)
							{
								system("cls");
								xuat_ds_sv_tronglop(dslop.ds[i].dssv);
								break;
							}
						}
						system("pause");
						system("cls");
						break;
					}
					else if (checktam3 == 40 && checktam4 == 40 || checktam2 == 4 && checktam3 != 4)
					{
						string masv;
						int m = 1;
						gotoXY(35, 18);
						cout << "nhap vao ma sv:";
						getline(cin, masv);
						for (int i = 0; i < dslop.sllop; i++)
						{
							for (node_sv* k = dslop.ds[i].dssv.phead; k != NULL; k = k->pnext)
							{
								if (k->data.masv == masv)
								{
									diemso a;
									nhap_1_diem(a);
									nhap_ds_diem(k->data.dsdiem, a);
									m = 0;
									break;
								}
							}
							if (m == 0)
							{
								break;
							}
						}
					}
					else if (checktam3 == 4 && checktam4 == 4)
					{
						string masv;
						gotoXY(35, 18);
						cout << "Nhap ma sinh vien can xuat diem: "; getline(cin, masv);
						system("cls");
						for (int i = 0; i < dslop.sllop; i++)
						{
							for (node_sv* k = dslop.ds[i].dssv.phead; k != NULL; k = k->pnext)
							{
								if (k->data.masv == masv)
								{
									xuat_ds_diem_co_mssv(k->data.dsdiem);
									break;
								}
							}
							system("pause");
							system("cls");
							break;
						}
						break;
					}
				}
				else if (c == 9)
				{
					ve_nhap_xuat(16, 16,"    ");
					break;
				}
				else if (c == 27)
				{
					return 0;
				}
			}
		}
	}
	return 0;
}