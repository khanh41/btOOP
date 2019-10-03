#pragma once
#include"Person.h"
class List
{
public: 
	Person* person = new Person[3];
	int size=3;
public:
	void show();//hien thi
	void add();//them(dau,cuoi,batki k)
	void upLoad(string);//cap nhat doi tuong(theo so dt khach hang)
	void deLete();// xoa doi tuong(dau,cuoi,bki k)
	void linearSearch(int nhomMau);	//tim kiem doi tuong theo thuoc tinh bki - thuoc tinh nhom mau
	void shellSort(bool(*comp)(int, int));//sap xep mang dtuong theo 1 thuoc tinh nhom mau
	
	List(const List& copy); //sao chep
	
	//da nang hoa
	friend ostream& operator<<(Person p, ostream& os);
	Person& operator[](int);
	Person& operator=(const Person&);
};

