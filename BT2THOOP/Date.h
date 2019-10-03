#pragma once
class Date
{
public: 
	int ngay, thang, nam;
public: 
	Date();
	Date(int, int, int);
	Date(const Date& copy);
};

