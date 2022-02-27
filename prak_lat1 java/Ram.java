public class Ram{

	//Attributes
	private int capacity;
	private int price;

	// Constructor
	public Ram(int capacity, int price){
		this.capacity = capacity;
		this.price = price;
	}

	// Set & Get methods

	public void setCapacity(int capacity){
		this.capacity = capacity;
	}

	public void setPrice(int price){
		this.price = price;
	}

	public int getCapacity(){
		return this.capacity;
	}

	public int getPrice(){
		return this.price;
	}
	
}