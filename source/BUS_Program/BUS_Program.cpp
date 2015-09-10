// BUS_Program.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Bus.h"
#include "Mas.h"
#include <time.h>
#include <array>
#include <Windows.h>

using namespace std;


 
    HANDLE handleConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    



int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(0,"");
	Bus obj1;

	Bus obj2("Сидоров Н. А.",20,25,"Isuzu",1956,30000);
	Bus obj3("Петров П. Т.",30,35,"PAZ",2003,30000);
	Bus obj4("Иванов К. Е.",40,45,"Isuzu",2004,40000);
	Bus obj5("Семенов К. К.",50,55,"Isuzu",2005,50000);
	
		obj1.setSurname("Поликарпов");
		obj1.setBusNumber(-10);
		obj1.setRoute(-15);
		obj1.setBrand("MAZ");
		obj1.setYear(-1996);
		obj1.setRun(-10000);
	


	Mas ArrayOfObjects (obj1,obj2,obj3,obj4,obj5);
		
	int i = 1; 
	int choose;
	
	while (i)
		{
			SetConsoleTextAttribute(handleConsole, (WORD) ((1 << 5) | 9));
		
		cout<<"-----Меню:-----\n";
		SetConsoleTextAttribute(handleConsole, (WORD) ((LightGreen << Black) | Black));
			
				cout<<"1 - Вывести весь массив\n";
				cout<<"2 - По количеству лет\n";
				cout<<"3 - По пробегу\n";
				cout<<"4 - по маршруту\n";

						cin>>i;
						system("cls");
					
							switch (i)
							{
									case 1: 	ArrayOfObjects.ShowMas(); break;
						
									case 2:
										{
											cout<<"введите количество лет: "; 
											cin>>choose;
											ArrayOfObjects.ListOfBusWithBadAge(choose);break;
										}

									case 3:
										{
											cout<<"Введите количество километров: "; cin>>choose;
											ArrayOfObjects.ListOfBusWithBadRun(choose);break;
										}

									case 4:
										{
											cout<<"Введите маршрут"; cin>>choose;
											ArrayOfObjects.ListOfRoute(choose);break;
										}
							}
		}
	SetConsoleTextAttribute(handleConsole, (WORD) (( Red << Red ) | LightMagenta));
	if (i == 0) cout<<"-------------Завершение программы-----------------\n\n\n\n\n\n\n";
	

	obj1 = obj5;
	obj1.showInfo();
	return 0;
	
	ArrayOfObjects.~Mas();
}

