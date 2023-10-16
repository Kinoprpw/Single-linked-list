#include"Header.h"
void khoi_Tao(Dlist& list) {
	list.first = NULL;
	list.last = NULL;
}
int isEmpty(Dlist list) {
	return (list.first == NULL ? 1 :
		0);
}
Nodeptr tao_Node(TYPEINFO x) {
	Nodeptr p;
	p = new Node;
	p->data = x;
	p->next = NULL;
	p->pre = NULL;
	return p;
}
void them_Dau(Dlist& list, TYPEINFO x) {
	Nodeptr p;
	p = tao_Node(x);
	if (isEmpty(list)) {
		list.first = p;
		list.last = p;
	}
	else {
		p->next = list.first;
		list.first->pre = p;
		list.first = p;
	}
}
void nhap_Ds(Dlist& list) {
	int x;
	khoi_Tao(list);
	do {
		cout << "\n Nhap x= (-99 de thoat)";
		cin >> x;
		if (x == -99)
			break;
		them_Cuoi(list, x);
	} while (1);
}
//cau 1
void xuat_Ds_Thuan(Dlist list) {
	Nodeptr p = list.first;
	while (p != NULL) {
		cout << p->data << " ";
		p = p->next;
	}
}
void xuat_Ds_Nguoc(Dlist list) {
	Nodeptr p = list.last;
	while (p != NULL) {
		cout << p->data << " ";
		p = p->pre;
	}
}
void them_Sau_q(Nodeptr q, TYPEINFO
	x)
{
	Nodeptr p;
	p = tao_Node(x);
	p->next = q->next;
	p->pre = q;
	q->next = p;
	q->next->pre = p;
}
//cau2
void them_Cuoi(Dlist& l, TYPEINFO x)
{
	Nodeptr p;
	p = tao_Node(x);
	if (isEmpty(l)) {
		l.first = p;
		l.last = p;
	}
	else {
		l.last->next = p;
		p->pre = l.last;
		l.last = p;
	}
}
//cau 3

void Xoa_dau(Dlist& l) {
	if (!isEmpty(l))
		if (l.first == l.last)
		{
			delete l.first;
			l.first = l.last = NULL;
		}
		else
		{
			Nodeptr p = l.first;
			l.first = l.first->next;
			delete p;
			l.first->pre = NULL;

		}
}

//cau 4
void xoa_Cuoi(Dlist& l)
{
	
		if (!isEmpty(l))
			if (l.first == l.last)
			{
				delete l.first;
				l.first = l.last = NULL;
			}
			else
			{
				Nodeptr p = l.last;
				l.last = l.last->pre;
				delete p;
				l.last->next = NULL;
			}
}
//cau 5
int tim_Vitri_X(Dlist l, TYPEINFO x) {
	Nodeptr p = l.first;
	int dem = 0;
	while (p != NULL) 
	{
		dem++;
		if (p->data == x)
		{
			
			return dem;
		}
		p = p->next;
	}
	return -1;
}


								// PHIEN CO GO GHI CHU HO EM TU DAY A//
// 
 //DANH SACH LIEN KET KEP VONG
 
 
 
//cau 6
NoDeptr tao_NoDe(TYPEINFO x) {
	NoDeptr p = new NoDe;
	if (p == NULL)
		return 0;
	p->link = NULL;
	p->data = x;
	return p;
}
void khoiTao(List& list) {
	list.first = list.last = NULL;
}
int isEmpty(List list) {
	if (list.first == NULL)
		return 1;
	return 0;
}
void them_Dau(List& list, TYPEINFO x) {
	NoDeptr p = tao_NoDe(x);
	if (isEmpty(list) == 1)
		list.first = list.last = p;
	else {
		p->link = list.first;
		list.first = p;
	}
	list.last->link = list.first;
}
void readList(List& list) {
	int x;
	do {
		cout << "\n Nhap x=(thoat-99)";
		cin >> x;
		if (x == -99)
			break;
		them_Dau(list, x);
		//Insert_last(list,x);
	} while (1);
}
void printList(List list) {
	if (list.first != NULL) {
		cout << "\n Cac phan tu cua DS Vong:";
		NoDeptr p = list.first;
		do {
			cout << p->data << " ";
			p = p->link;
		} while (p != list.first);
	}
	else
		cout << "\n DS rong";
}
//cau 7
void xoa_Dau(List& list) {
	if (list.first != NULL) {
		if (list.first != list.last) {
			NoDeptr p = list.first;
			list.first = list.first->link;
			list.last->link = list.first;
			delete p;
		}
		else
			list.first = NULL;
	}
}
//b
void xoa_Cuoi(List& list)
{
	if (list.first != NULL)
	{
		if (list.first != list.last)
		{
			NoDeptr q, p = list.first;
			while (p->link->link != list.first)
				p = p->link;
			q = p->link;
			p->link = list.first;
			delete q;
		}
		else
			list.first = NULL;
	}


}
//cau 8
NoDeptr timX(List list,int x)
{
	NoDeptr p = list.first;
	while (p->link != list.first)
	{
		if (p->data == x)
			return p;
		p = p->link;
	}
	return NULL;
}
