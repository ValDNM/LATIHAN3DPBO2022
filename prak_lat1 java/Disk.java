public class Disk{

	// Attributes
	private String type;
	private int capacity;
	private int price;

	// Constructor
	public Disk(String type, int capacity, int price){
		this.type = type;
		this.capacity = capacity;
		this.price = price;
	}

	// Set & Get methods
	public void setType(String type){
		this.type = type;
	}

	public void setCapacity(int capacity){
		this.capacity = capacity;
	}

	public void setPrice(int price){
		this.price =price;
	}

	public String getType(){
		return this.type;
	}

	public int getCapacity(){
		return this.capacity;
	}

	public int getPrice(){
		return this.price;
	}

}