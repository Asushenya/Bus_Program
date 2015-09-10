#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
#include <string.h>
#include <time.h>
using namespace std;


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
			unsigned int getBusNumber()const;

			void setRoute( int);
			unsigned int getRoute()const;

			void setBrand(char* );
			string getBrand()const;

			void setYear( int);
			unsigned int getYear()const;

			void setRun(int );
			unsigned int getRun()const;

			unsigned int GetBusAge()const;

			
		   
	};