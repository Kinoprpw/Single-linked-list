#include"Header.h"
void main() {
	
	Dlist list;
	int x;
	khoi_Tao(list);
	nhap_Ds(list);//cau 2
	//cau 1
	cout << "\n Xuat danh sach theo chieu thuan:";
	xuat_Ds_Thuan(list);
	cout << "\n Xuat danh sach theo chieu nguoc:";
	xuat_Ds_Nguoc(list);
	//cau 3
	Xoa_dau(list);
	cout << "\n day so sau khi xoa dau: ";
	xuat_Ds_Thuan(list);
	//cau 4
	xoa_Cuoi(list);
	cout << "\nday so sau khi xoa cuoi: ";
	xuat_Ds_Thuan(list);
	//cau 5
	cout << "\nnhap pha tu x muon tim: ";
	cin >> x;
	int viTri = tim_Vitri_X(list, x);
	if (viTri == -1)
		cout << "\n khong tim thay gia tri x trong danh sach: ";
	else
		cout << "\tim thay x tai vi tri: " << viTri;
		
	//cau 6
	


	system("color 2");
	cout << "\n------------------phan danh sach lien ket vong----------------------";
	List k;
	int y;
	khoiTao(k);
	readList(k);
	xoa_Cuoi(k);
	printList(k);
	//cau8
	cout << "\n nhap gia tri can tim: ";
	cin >> y;
	if (timX(k, 6) == NULL)
		cout << "\nkhong tim thay!";
	else
		cout << "\n tim thay roi nha!";
	cout << endl;
	system("pause");
}