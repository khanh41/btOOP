#include "Date.h"

Date::Date()
{
}

Date::Date(int ngay, int thang, int nam)
{
	this->ngay = ngay;
	this->thang = thang;
	this->nam = nam;
}

Date::Date(const Date& copy)
{
	this->ngay = copy.ngay;
	this->thang = copy.thang;
	this->nam = copy.nam;
}
