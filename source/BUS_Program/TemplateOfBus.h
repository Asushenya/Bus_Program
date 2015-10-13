#pragma once 

#include "Bus.h"

HANDLE handleConsole1 = GetStdHandle(STD_OUTPUT_HANDLE);

 template<class T> class TemplateOfBus{};
 
 template<> class TemplateOfBus<Bus>
 {
 private:
     Bus objectBUS;
 public:

     TemplateOfBus()
     {

     }

     TemplateOfBus(Bus obj)
     {
         objectBUS = obj;
     }
	 void getInfo(Bus obj1)
	 {
         
        
SetConsoleTextAttribute(handleConsole1, (WORD)((1 << 1) | 9));
	cout<<"Интфорация об объекте класса "<<typeid(obj1).name()<<endl;
			obj1.showInfo();
		
            SetConsoleTextAttribute(handleConsole1, (WORD)((2 << 2) | 7));
			 }

	 Bus plus (Bus obj1, Bus obj2)
	 {
		 Bus P;
		 P = obj1+obj2;
		 return P;
	 }

     void Swap(Bus& obj1,Bus& obj2)
     {
         Bus temp;

         temp = obj1;
         obj1 = obj2;
         obj2 = temp;

     }

     friend ostream& operator << (ostream& out, TemplateOfBus obj)
     {
         obj.objectBUS.showInfo();
         return out;
     }

     bool operator == (TemplateOfBus obj)
     {
         if (this->objectBUS.getBrand() != obj.objectBUS.getBrand()) return false;
         if (this->objectBUS.GetBusAge() != obj.objectBUS.GetBusAge()) return false;
         if (this->objectBUS.getBusNumber() != obj.objectBUS.getBusNumber()) return false;
         if (this->objectBUS.getRoute() != obj.objectBUS.getRoute()) return false;
         if (this->objectBUS.getRun() != obj.objectBUS.getRun()) return false;
         if (this->objectBUS.getSurname() != obj.objectBUS.getSurname()) return false;
         if (this->objectBUS.getYear() != obj.objectBUS.getYear()) return false;
         return true;
     }


 };