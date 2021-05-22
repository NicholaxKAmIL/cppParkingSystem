#pragma once
#include <vector> // #include directive

namespace MoonShine{ 
	class ParkingSystem {
		private:
			std::vector<int> slots;
			std::vector<int> timeline;
			int carId = 0;
			int price = 0;
		public:  
			ParkingSystem(); //for demo purpose.
			ParkingSystem(int big, int medium, int small,int priceIn);
	 		
	 		void Info();
			bool parkCar(int carType);
			int parkNum(int ID); 
			int parkCost(int ID); 
			
	};
} 
