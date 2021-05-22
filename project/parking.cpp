#include"parking.h"
#include<iostream>
#include<vector>

using namespace std;
using namespace MoonShine;

ParkingSystem::ParkingSystem(){
	slots.push_back(0);
	slots.push_back(2);
	slots.push_back(5);
	slots.push_back(8);
	timeline.push_back(0);
	price = 10;
} 
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
		if(process.back()==1)slotLeft.at(1)--;	//BIG CAR
		if(process.back()==2)slotLeft.at(2)--;	//Med CAR
		if(process.back()==3)slotLeft.at(3)--;	//small CAR
		carId--;
		process.pop_back();
	 }
	cout<<"All:"<<slots.at(1)<<","<<slots.at(2)<<","<<slots.at(3)<<endl;
	cout<<"Left:"<<slotLeft.at(1)<<","<<slotLeft.at(2)<<","<<slotLeft.at(3)<<endl; 
	
}

bool ParkingSystem::parkCar(int carType){
	timeline.push_back(carType);
	carId++;
	cout<<"Car ID: "<<carId<<endl; 
}

int ParkingSystem::parkNum(int ID){
	vector<int> process = timeline;
	int allCarWeHave = carId;
	
	while(allCarWeHave != ID){
		allCarWeHave--;
		process.pop_back();
	}
	int count=1;
	
	int carType=process.back();
	
	if(carType==1)cout<<"Big car ";	//BIG CAR
	if(carType==2)cout<<"Med car ";	//Med CAR
	if(carType==3)cout<<"Small car ";	//small CAR
	
	while(process.size()!=1){
		process.pop_back();
		if(process.back()==carType)count++;
		
	} 
	 
	cout<<"Number:"<<count<<" is your parking slot"<<endl;
}

int ParkingSystem::parkCost(int ID){
	
}

