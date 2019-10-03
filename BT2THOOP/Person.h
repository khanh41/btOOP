#pragma once
#include<iostream>
#include"Date.h"
using namespace std;
class Person
{
private:
	string CMND;
	int tuoi;
	int nhomMau; // 1,2,3,4 - O,A,B,AB
	bool gioiTinh;
	Date ngaySinh;
	string SDT;
public:
	// 3 ham dung va ham huy
	Person();
	Person(string, int, int, bool, Date,string);
	Person(const Person& copy);
	~Person();

	// cac ham bo tro
	friend ostream& operator<<(Person, ostream&);
	friend istream& operator>>(Person, istream&);
	// cac  ham get va set lai gia tri private
	void setCMND(string);
	string getCMND();
	void setTuoi(int);
	int getTuoi();
	void setNhomMau(int);
	int getNhomMau();
	void setGioiTinh(bool);
	bool getGioiTinh();
	void setDate(Date);
	Date getDate();
	void setSDT(string);
	string getSDT();
};
