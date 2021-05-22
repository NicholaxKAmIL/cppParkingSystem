#include"parking.h"

using namespace MoonShine;
int main(){
	ParkingSystem* PS = new ParkingSystem(3,3,3,10);
	
	PS->Info(); 
	
	PS->parkCar(1);
	PS->parkCar(1);
	PS->parkCar(2);
	PS->parkCar(2);
	PS->parkCar(3);
	
	PS->parkNum(2);
	PS->parkNum(4);
	PS->parkNum(5);
	
	PS->Info(); 

}
