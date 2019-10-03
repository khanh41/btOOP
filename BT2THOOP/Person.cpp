#include "Person.h"

Person::Person()
{
}

Person::Person(string CMND, int tuoi, int nhomMau, bool gioiTinh, Date ngaySinh, string SDT)
{
	this->CMND = CMND;
	this->tuoi = tuoi;
	this->nhomMau = nhomMau;
	this->gioiTinh = gioiTinh;
	this->ngaySinh = ngaySinh;
	this->setDate(ngaySinh);
	this->SDT = SDT;
}

Person::Person(const Person& copy)
{
	this->CMND = copy.CMND;
	this->tuoi = copy.tuoi;
	this->nhomMau = copy.nhomMau;
	this->gioiTinh = copy.gioiTinh;
	this->ngaySinh = copy.ngaySinh;
	this->setDate(copy.getDate);
	this->SDT = copy.SDT;
}

Person::~Person()
{
}

void Person::setCMND(string CMND)
{
	this->CMND = CMND;
}

string Person::getCMND()
{
	return this->CMND;
}

void Person::setTuoi(int tuoi)
{
	this->tuoi = tuoi;
}

int Person::getTuoi()
{
	return tuoi;
}

void Person::setNhomMau(int nhomMau)
{
	this->nhomMau = nhomMau;
}

int Person::getNhomMau()
{
	return this->nhomMau;
}

void Person::setGioiTinh(bool gioiTinh)
{
	this->gioiTinh = gioiTinh;
}

bool Person::getGioiTinh()
{
	return this->gioiTinh;
}

void Person::setDate(Date ngaySinh)
{
	this->ngaySinh.ngay = ngaySinh.ngay;
	this->ngaySinh.thang = ngaySinh.thang;
	this->ngaySinh.nam = ngaySinh.nam;
}

Date Person::getDate()
{
	return this->ngaySinh;
}

void Person::setSDT(string SDT)
{
	this->SDT = SDT;
}

string Person::getSDT()
{
	return this->SDT;
}

ostream& operator<<(Person p, ostream& os)
{
		os << "CMND: " << p.getCMND()
			<< " --- Tuoi: " << p.getTuoi()
			<< " --- Nhom mau: " << p.getNhomMau()
			<< " --- Gioi tinh: " << p.getGioiTinh()
			//		<< " --- Ngay sinh: " << p.getDate()
			<< endl;
		return os;
}

istream& operator>>(Person p, istream& in) {
	cout << "Nhap theo thu tu" << endl;
	cout << "CMND - Tuoi - Nhom mau - Gioi Tinh - Ngay sinh " << endl;
}