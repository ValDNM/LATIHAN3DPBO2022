<?php

include "Processor.php";
include "Disk.php";
include "Ram.php";

class Pc{
	// Attributes
	private $totalPrice;
	private $pObj;
	private $dObj;
	private $rObj;

	// Constructor
	public function __construct($pObj, $dObj, $rObj){
		$this->pObj = $pObj;
		$this->dObj = $dObj;
		$this->rObj = $rObj;
		$this->totalPrice = $pObj->getPrice() + $dObj->getPrice() + $rObj->getPrice();
	}

	// Set & Get Methods
	public function setTotalPrice($pObj, $dObj, $rObj){
		$this->totalPrice = $pObj->getPrice() + $dObj->getPrice() + $rObj->getPrice();
	}

	public function setProcessor($pObj){
		$this->pObj = $pObj;
	}

	public function setDisk($dObj){
		$this->dObj = $dObj;
	}

	public function setRam($rObj){
		$this->rObj = $rObj;
	}

	public function getTotalPrice(){
		return $this->totalPrice;
	}

	public function getProcessor(){
		return $this->pObj;
	}

	public function getDisk(){
		return $this->dObj;
	}

	public function getRam(){
		return $this->rObj;
	}
	
}
?>