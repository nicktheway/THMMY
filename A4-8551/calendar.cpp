/*
* calendar.cpp
* Προγραμματιστικές τεχνικές, 4η εργασία.
* Υλοποίηση των συναρτήσεων της κλάσης calendar.
* Νικόλαος Κατωμέρης, 8551
* 03/11/2015
*/

#include "calendar.h"
#include <iostream>

const int calendar::days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; //Áñéèìüò çìåñþí êÜèå ìÞíá

calendar::calendar(){
	day = new int;
	month = new int;
	year = new int;
}

calendar::calendar(int d, int m, int y){
	day = new int;
	month = new int;
	year = new int;
	*day = d;
	*month = m;
	*year = y;
}

calendar::calendar(const calendar& c){
	day = new int;
	month = new int;
	year = new int;
	*this->day = *c.day;
	*this->month = *c.month;
	*this->year = *c.year;
}

void calendar::checkDate(const calendar& c){
	if (*c.month > 12){
		*c.year += 1;
		*c.month -= 12;
	}
	else if (*c.month < 1){
		*c.year -= 1;
		*c.month += 12;
	}
	if (*c.day > days[*c.month]){
		*c.month += 1;
		*c.day -= days[*c.month];
	}
	else if (*c.day < 1){
		*c.month -= 1;
		*c.day += days[*c.month];
	}
	if (*c.month > 12){
		*c.year += 1;
		*c.month -= 12;
	}
	else if (*c.month < 1){
		*c.year -= 1;
		*c.month += 12;
	}
}

calendar calendar::operator+(const calendar& c){
	calendar newDate;
	*newDate.day = *this->day + *c.day;
	*newDate.month = *this->month + *c.month;
	*newDate.year = *this->year + *c.year;

	checkDate(newDate);

	return newDate;
}

calendar calendar::operator-(const calendar& c){
	calendar newDate;
	*newDate.day = *this->day - *c.day;
	*newDate.month = *this->month - *c.month;
	*newDate.year = *this->year - *c.year;
	checkDate(newDate);
	return newDate;
}

calendar calendar::operator=(const calendar& c){
	*this->day = *c.day;
	*this->month = *c.month;
	*this->year = *c.year;
	return *this;
}

void calendar::getDate(){
	checkDate(*this);
	std::cout << *day << "/" << *month << "/" << *year << std::endl;
}

calendar::~calendar(){
	delete day;
	delete month;
	delete year;
}
