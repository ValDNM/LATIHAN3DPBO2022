#include <iostream>
#include <string.h>
#include "Processor.cpp"
#include "Ram.cpp"
#include "Disk.cpp"

using namespace std;

class Pc{
	// Attributes
	private:
		int totalPrice;
		Processor pObj;
		Disk dObj;
		Ram rObj;

	public:
		// Constructor
		Pc(){}
		Pc(Processor pObj, Disk dObj, Ram rObj){
			this->pObj = pObj;
			this->dObj = dObj;
			this->rObj = rObj;
			this->totalPrice = pObj.getPrice() + dObj.getPrice() + rObj.getPrice();
		}

		// Set & Get methods
		void setProcessor(Processor pObj){
			this->pObj = pObj;
		}

		void setDisk(Disk dObj){
			this->dObj = dObj;
		}

		void setRam(Ram rObj){
			this->rObj = rObj;
		}

		void setTotalPrice(Processor pObj, Disk dObj, Ram rObj){
			this->totalPrice = pObj.getPrice() + dObj.getPrice() + rObj.getPrice();
		}

		Processor getProcessor(){
			return this->pObj;
		}

		Disk getDisk(){
			return this->dObj;
		}

		Ram getRam(){
			return this->rObj;
		}

		int getTotalPrice(){
			return this->totalPrice;
		}

		~Pc(){}
};