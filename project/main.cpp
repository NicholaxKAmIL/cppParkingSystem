#include"parking.h"
#include<iostream>
using namespace MoonShine;
int main(){
	ParkingSystem* PS = new ParkingSystem(3,3,3,100);
	
	PS->Info(); 
	
	PS->parkCar(1);
	PS->parkCar(1);
	PS->parkCar(2);
	PS->parkCar(2);
	PS->parkCar(3);
	
	PS->parkNum(2);
	PS->parkNum(4);
	PS->parkNum(5);
	
	PS->parkCost(5);
	std::cout<<"----------------------------------------------------------------------"<<std::endl;
	ParkingSystem* PS2 = new ParkingSystem();
	PS2->Info();
	PS2->parkCar(1);
	PS2->parkCar(1);
	PS2->parkCar(2);
	PS2->parkCar(2);
	PS2->parkCar(3);
	PS2->Info();

}
