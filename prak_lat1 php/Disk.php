<?php

class Disk{

	// Attributes
	private $type;
	private $capacity;
	private $price;

	// Constructor
	public function __construct($type, $capacity, $price){
		$this->type = $type;
		$this->capacity = $capacity;
		$this->price = $price;
	}

	// Set & Get Methods
	public function setType($type){
		$this->type = $type;
	}

	public function setCapacity($capacity){
		$this->capacity = $capacity;
	}

	public function setPrice($price){
		$this->price = $price;
	}

	public function getType(){
		return $this->type;
	}

	public function getCapacity(){
		return $this->capacity;
	}

	public function getPrice(){
		return $this->price;
	}

}

?>