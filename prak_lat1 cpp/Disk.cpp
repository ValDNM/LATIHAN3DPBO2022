#include <iostream>
#include <string.h>

using namespace std;

class Disk{
	//Attributes
	private:
		string type;
		int capacity;
		int price;

	public:
		//Constructor
		Disk(){}
		Disk(string type, int capacity, int price){
			this->type = type;
			this->capacity = capacity;
			this->price = price;
		}

		// Set and Get methods

		void setType(string type){
			this->type = type;
		}

		void setCapacity(int capacity){
			this->capacity = capacity;
		}

		void setPrice(int price){
			this->price = price;
		}

		string getType(){
			return this->type;
		}

		int getCapacity(){
			return this->capacity;
		}

		int getPrice(){
			return this->price;
		}

		~Disk(){}
};