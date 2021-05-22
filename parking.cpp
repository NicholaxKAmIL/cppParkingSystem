#include"parking.h"
#include<iostream>
#include<vector>

using namespace std;
using namespace MoonShine;

ParkingSystem::ParkingSystem(int big, int medium, int small,int priceIn) {
	slots.push_back(0);
	slots.push_back(big);
	slots.push_back(medium);
	slots.push_back(small);
	timeline.push_back(0);
	price = priceIn;
}

	
		

void ParkingSystem::Info(){
	vector<int> process = timeline;
	vector<int> slotLeft = slots;
	
	while(carId != 0){
		if(timeline.back()==1)slotLeft.at(1)--;	//BIG CAR
		carId--;
		process.pop_back();
	 }
	
	cout<<slotLeft.at(1)<<","<<slotLeft.at(2)<<","<<slotLeft.at(3)<<endl; 
	
}

bool ParkingSystem::parkCar(int carType){
	if(carType == 1) timeline.push_back(1);
	carId++;
}

int ParkingSystem::parkNum(int ID){
	
}

int ParkingSystem::parkCost(int ID){
	
}


};
