#include <iostream>
#include <string.h>

using namespace std;

class Ram{
	//Attributes
	private:
		int capacity;
		int price;

	public:
		// Constructor
		Ram(){}
		Ram(int capacity, int price){
			this->capacity = capacity;
			this->price = price;
		}

		// set and get methods
		void setCapacity(int capacity){
			this->capacity = capacity;
		}

		void setPrice(int price){
			this->price = price;
		}

		int getCapacity(){
			return this->capacity;
		}

		int getPrice(){
			return this->price;
		}

		~Ram(){}


};