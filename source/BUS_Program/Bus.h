#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
#include <string.h>
#include <time.h>
using namespace std;

//main class
class Bus
	{
		private:
				string	driverSurname;
				unsigned int busNumber;
				unsigned int route;
				char brand[10];
				unsigned int year;
				unsigned int run;
		public:
				Bus() : driverSurname("empty"),
						busNumber(0),
						route(0),
						year(0),
						run(0)
				{
					strcpy(brand,"empty");
				};

				Bus (string Surname,unsigned int Number,unsigned int Route,
						char Brand[10], unsigned int Year,unsigned int Run)
					{
						driverSurname = Surname;
						busNumber = Number;
						route = Route;
						strcpy(brand, Brand);
						year = Year;
						run = Run;
					}

				Bus (const Bus& c)
				{
					driverSurname = c.getSurname();
					busNumber = c.busNumber;
					route = c.getRoute();
					strcpy(brand, c.brand);
					
						year = c.getYear();
						run = c.getRun();
				}

			void showInfo();

			void setSurname(string );
			string getSurname()const;

			void setBusNumber(int );
			 int getBusNumber();

			void setRoute( int);
			unsigned int getRoute()const;

			void setBrand(char* );
			string getBrand()const;

			void setYear( int);
			unsigned int getYear()const;

			void setRun(int );
			unsigned int getRun()const;
			
			unsigned int GetBusAge()const;

			Bus operator+(Bus obj1)
			{
				strcat(this->brand, obj1.brand);
				this->driverSurname.append( obj1.driverSurname);
				this->busNumber+= obj1.busNumber;
				this->route+=obj1.route;
				this->year+=obj1.run;
				this->run+=obj1.run;
				return *this;
			}

			
		   
	};