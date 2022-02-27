import java.util.*;


public class Main{
	public static void main(String[] args){

		// Deklarasi Komponen PC
		Processor processor = new Processor("Intel i5 6400", 150);
		Disk disk = new Disk("SSD", 512, 60);
		Ram ram = new Ram(16, 100);

		Pc pc = new Pc(processor, disk, ram);
		
		// Output
		System.out.println("Processor      : " + pc.getProcessor().getName());
		System.out.println("Processor Price: " + pc.getProcessor().getPrice() + " USD");
		System.out.println("----------------------------------");
		System.out.println("Ram            : " + pc.getRam().getCapacity() + " GB");
		System.out.println("Ram Price      : " + pc.getRam().getPrice() + " USD");
		System.out.println("----------------------------------");
		System.out.println("Disk           : " + pc.getDisk().getType());
		System.out.println("Disk Capacity  : " + pc.getDisk().getCapacity() + " GB");
		System.out.println("Disk Price     : " + pc.getDisk().getPrice() + " USD");
		System.out.println("==================================");
		System.out.println("Total Price    : " + pc.getTotalPrice() + " USD");

	}
}