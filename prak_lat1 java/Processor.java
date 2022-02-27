public class Processor{

	// Attributes
	private String name;
	private int price;

	// Constructor
	public Processor(String name, int price){
		this.name = name;
		this.price = price;
	}

	// Set & Get Methods
	public void setName(String name){
		this.name = name;
	}

	public void setPrice(int price){
		this.price = price;
	}

	public String getName(){
		return this.name;
	}

	public int getPrice(){
		return this.price;
	}
}