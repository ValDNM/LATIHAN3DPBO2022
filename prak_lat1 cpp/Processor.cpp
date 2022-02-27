#include <iostream>
#include <string.h>

using namespace std;

class Processor{
	private:
		//Attributes
		string name;
		int price;

	public:
		// Constructors
		Processor(){}
		Processor(string name, int price){
			this->name = name;
			this->price = price;
		}

		// Get & Set methods
		void setName(char name[]){
			this->name = name;
		}

		void setPrice(int price){
			this->price = price;
		}

		string getName(){
			return this->name;
		}

		int getPrice(){
			return this->price;
		}

		~Processor(){}
};