public class Pc{

	// Attributes
	private int totalPrice;
	private Processor pObj;
	private Disk dObj;
	private Ram rObj;

	// Constructor
	public Pc(Processor pObj, Disk dObj, Ram rObj){
		this.pObj = pObj;
		this.dObj = dObj;
		this.rObj = rObj;
		this.totalPrice = pObj.getPrice() + dObj.getPrice() + rObj.getPrice();
	}

	// Set & Get methods

	public void setProcessor(Processor pObj){
		this.pObj = pObj;
	}

	public void setDisk(Disk dObj){
		this.dObj = dObj;
	}

	public void setRam(Ram rObj){
		this.rObj = rObj;
	}

	public void setTotalPrice(Processor pObj, Disk dObj, Ram rObj){
		this.totalPrice = pObj.getPrice() + dObj.getPrice() + rObj.getPrice();
	}

	public Processor getProcessor(){
		return this.pObj;
	}

	public Disk getDisk(){
		return this.dObj;
	}

	public Ram getRam(){
		return this.rObj;
	}

	public int getTotalPrice(){
		return this.totalPrice;
	}

}