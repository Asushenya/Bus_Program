	#include "stdafx.h"
#include <iostream>
#include <string>
#include "Bus.h"
#include "Mas.h"
#include <math.h>
#include <Windows.h>
using namespace std;

/*Получаение дескриптора устройства стандартного вывода*/
   HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

void Mas::ShowMas() const
		
			{	
				SetConsoleTextAttribute(hConsole, (WORD) ((1 << 5) | 7));
				cout<<"***список Всех автобусов***"<<endl;

				SetConsoleTextAttribute(hConsole, (WORD) ((1 << 1) | 0));


					cout<<"==============";
						for (int i = 0; i < masSize;i++)
						{
							cout<<"Объект # "<<i<<endl;
										mas[i].showInfo();

							cout<<"------------\n";
						}
						cout<<"============="<<endl;

						SetConsoleTextAttribute(hConsole, (WORD) ((7 << 0) | 0));
			}

void Mas::ListOfRoute(int myRoute) const
			{
				if (myRoute > 0)
					{
						SetConsoleTextAttribute(hConsole, (WORD) ((Red << Red) | 7));
						cout<<"Список атобусов по заданному маршруту:" <<endl;

						SetConsoleTextAttribute(hConsole, (WORD) ((Red << Black) | Red));
						cout<<"============";

						for (int i = 0;i<masSize;i++ )
							{
								if (mas[i].getRoute() == myRoute)
											mas[i].showInfo();

								cout<<endl;
							}
				cout<<"============"<<endl;
					}

				else cout<<"--ошибка---";
				SetConsoleTextAttribute(hConsole, (WORD) ((Black << Black) | 7));
			}

void Mas::ListOfBusWithBadAge(int Age) const
			{
				SetConsoleTextAttribute(hConsole, (WORD) ((Cyan << Cyan) | 7));
				cout<<"список Автобусов с Заданным сроком Эксплуатиции"<<endl;

				SetConsoleTextAttribute(hConsole, (WORD) ((Black  << Black) | Cyan));

				cout<<"================"<<endl;
				if (Age > 0)
					{
							for (int i = 0;i<masSize;i++ )
							{
								if (mas[i].GetBusAge() >= Age)
									mas[i].showInfo();
								cout<<endl;
							}
					}

				else cout<<"----ошибка----";
				cout<<"============"<<endl;

				SetConsoleTextAttribute(hConsole, (WORD) ((Black << Black) | 7));
			}

void Mas::ListOfBusWithBadRun(int Run) const
			{
				SetConsoleTextAttribute(hConsole, (WORD) ((Magenta << Magenta) | 1));
		
				cout<<"список автобусов у которых пробег больше заданного расстояния"<<endl;

				SetConsoleTextAttribute(hConsole, (WORD) ((Black << Black) | LightGreen));
				cout<<"================="<<endl;
				if (Run > 0 )
							{
								for (int i = 0;i<masSize;i++ )
											{
												if (mas[i].getRun() >= Run)
													mas[i].showInfo();
									cout<<endl;
											}
							}
				else cout<<"------Ошибка------"<<endl;
				cout<<"================"<<endl;
				SetConsoleTextAttribute(hConsole, (WORD) ((Black << Black) | 7));
			}
