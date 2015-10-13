#include "stdafx.h"
#include <iostream>
#include <string>
#include "Bus.h"
#include <math.h>
#include <time.h>
using namespace std;

void Bus::showInfo()
	{
		cout<<"Фамилия: "<<driverSurname<<endl;
		cout<<"Номер автобуса: "<<busNumber<<endl;
		cout<<"Номер маршрута: "<<route<<endl;
		cout<<"Марка автобуса: "<<brand<<endl;
		cout<<"Год выпуска: "<<year<<" год"<<endl;
		cout<<"Пробег: "<<run<<" км."<<endl;
	}

void Bus::setSurname(string Surname)
	{
		if(Surname.length() > 2)
		driverSurname = Surname;
	
	}

 string Bus::getSurname() const
	{
		return driverSurname;
	}

void Bus::setBusNumber( int num)
{
	if (num<0)
		busNumber = abs(num);

	else busNumber = num;
}

 int Bus::getBusNumber() 
	{
		return busNumber;
	}

void Bus::setRoute( int Route)
	{
		if (Route < 0)
			route = abs(Route);

		else route = Route;
	}

 unsigned int Bus::getRoute() const
	{
	
		return route;
	}

 void Bus::setBrand(char Brand[10])
	{

		strcpy(brand, Brand);
	}

 string Bus::getBrand() const
	{
		return brand;
	}

 void Bus::setYear( int Year)
	{
		if (Year < 1990)
			year = abs(Year);

		else year = Year;
	}

 unsigned int Bus::getYear() const
	{
		return year;
	}

void Bus::setRun( int Run)
	{
		if (Run < 0)
			run = abs(Run);

		else run = Run;
	}

 unsigned int Bus::getRun() const
	{
		return run;
	}

 unsigned int Bus::GetBusAge() const
	{
		return 2015-year;
	}

