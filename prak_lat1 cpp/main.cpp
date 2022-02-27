#include <iostream>
#include "Pc.cpp"

using namespace std;


int main(){

	// Deklarasi PC
	Pc pc;

	// Deklarasi processor
	Processor processor = Processor("Intel i5 6400", 150);

	// Deklarasi disk & pemanggilan metode set
	Disk disk;
	disk.setType("SSD");
	disk.setCapacity(512);
	disk.setPrice(60);

	// Deklarasi ram
	Ram ram = Ram(16, 100);

	// pemanggilan metode set dari PC
	pc.setProcessor(processor);
	pc.setDisk(disk);
	pc.setRam(ram);
	pc.setTotalPrice(processor, disk, ram);

	// Output
	cout << "Processor      : " << pc.getProcessor().getName() << endl;
	cout << "Processor Price: " << pc.getProcessor().getPrice() << " USD" << endl;
	cout << "----------------------------------" << endl;
	cout << "Ram            : " << pc.getRam().getCapacity() << " GB" << endl;
	cout << "Ram Price      : " << pc.getRam().getPrice() << " USD" << endl;
	cout << "----------------------------------" << endl;
	cout << "Disk           : " << pc.getDisk().getType() << endl;
	cout << "Disk Capacity  : " << pc.getDisk().getCapacity() << " GB" << endl;
	cout << "Disk Price     : " << pc.getDisk().getPrice() << " USD" << endl;
	cout << "==================================" << endl;
	cout << "Total Price    : " << pc.getTotalPrice() << " USD"<< endl;
}