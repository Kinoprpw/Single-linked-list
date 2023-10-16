#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<iomanip>
#include"string.h"
using namespace std;
#include<iostream>
using namespace std;
typedef int TYPEINFO;
struct Node {
	TYPEINFO data;
	Node* next;
	Node* pre;
};
typedef Node* Nodeptr;
struct Dlist {
	Nodeptr first;
	Nodeptr last;
};
void khoi_Tao(Dlist& list);
Nodeptr tao_Node(TYPEINFO x);
int isEmpty(Dlist list);
void them_Dau(Dlist& list, TYPEINFO x);
void them_Sau_q(Nodeptr q, TYPEINFO x);
void them_Cuoi(Dlist& l, TYPEINFO x);
void Xoa_dau(Dlist& l);
void xoa_Cuoi(Dlist& l);
void nhap_Ds(Dlist& L);
void xuat_Ds_Thuan(Dlist list);
void xuat_Ds_Nguoc(Dlist L);
int tim_Vitri_X(Dlist l, TYPEINFO x);


						// PHIEN CO GO GHI CHU HO EM TU DAY A//
//DANH SACH LIEN KET VONGF


//caau 6 
struct NoDe {
	TYPEINFO data;
	NoDe* link;
};
typedef NoDe* NoDeptr;
struct List {
	NoDeptr first;
	NoDeptr last;
};
NoDeptr tao_NoDe(TYPEINFO x);
void khoiTao(List& list);
int isEmpty(List list);
void them_Dau(List& list, TYPEINFO x);
void them_Cuoi(List& list, TYPEINFO x);
void readList(List& list);
void printList(List list);
void xoa_Dau(List& list);//cau 7a
void xoa_Cuoi(List& list);
//cau 8
NoDeptr timX(List list, int x);