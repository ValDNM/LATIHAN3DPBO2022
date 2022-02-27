<?php

class Processor{

	// Attributes
	private $nama;
	private $price;

	// Constructor
	public function __construct($nama, $price){
		$this->nama = $nama;
		$this->price = $price;
	}

	// Set & Get Methods
	public function setNama($nama){
		$this->nama = $nama;
	}

	public function setPrice($price){
		$this->price = $price;
	}

	public function getNama(){
		return $this->nama;
	}

	public function getPrice(){
		return $this->price;
	}
}
?>