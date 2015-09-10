#include "stdafx.h"
#include <iostream>
#include <string>
#include "Bus.h"
#include <math.h>
using namespace std;

enum ConsoleColor {
    Black = 0,
    Blue = 1,
    Green = 2,
    Cyan = 3,
    Red = 4,
    Magenta = 5,
    Brown = 6,
    LightGray = 7,
    DarkGray = 8,
    LightBlue = 9,
    LightGreen = 10,
    LightCyan = 11,
    LightRed = 12,
    LightMagenta = 13,
    Yellow = 14,
};

class Mas
	{
		private :

			Bus *mas;
		
			unsigned int masSize;

		public:
			Mas (Bus first,Bus second,Bus thitd,Bus fourth,Bus fifth)
				{
					mas = new Bus [5];
					mas[0] = first;
					mas[1] = second;
					mas[2] = thitd;
					mas[3] = fourth;
					mas[4] = fifth;
			
					masSize = 5;
				}

			~Mas()
			{
				delete [] mas ;
			}

			void ShowMas() const;

			void ListOfRoute(int) const;

			void ListOfBusWithBadAge(int) const;

			void ListOfBusWithBadRun(int) const;

		
	
	};