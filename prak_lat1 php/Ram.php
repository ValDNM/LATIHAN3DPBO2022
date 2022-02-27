<?php
class Ram{

	// Attributes
	private $capacity;
	private $price;

	// Constructor
	public function __construct($capacity, $price){
		$this->capacity = $capacity;
		$this->price = $price;
	}

	// Set & Get Methods
	public function setCapacity($capacity){
		$this->capacity = $capacity;
	}

	public function setPrice($price){
		$this->price = $price;
	}

	public function getCapacity(){
		return $this->capacity;
	}

	public function getPrice(){
		return $this->price;
	}
}
?>