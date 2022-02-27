<?php

include "Pc.php";

// Deklarasi Instances of class (Komponen PC)
$processor = new Processor("Intel i5 6400", 150);

$disk = new Disk("SSD", 512, 60);

$ram = new Ram(16, 100);



$pc = new Pc($processor, $disk, $ram);


// Output
echo "Processor      : " . $pc->getProcessor()->getNama() . "<br>";
echo "Processor Price: " . $pc->getProcessor()->getPrice() . " USD<br>";
echo "----------------------------------<br>";
echo "Ram Capacity   : " . $pc->getRam()->getCapacity() . " GB<br>";
echo "Ram Price      : " . $pc->getRam()->getPrice(). " USD<br>";
echo "----------------------------------<br>";
echo "Disk Type      : " . $pc->getDisk()->getType() . "<br>";
echo "Disk Capacity  : " . $pc->getDisk()->getCapacity() . " GB<br>";
echo "Disk Price     : " . $pc->getDisk()->getPrice() . " USD<br>";
echo "====================<br>";
echo "Total Price: " . $pc->getTotalPrice() . " USD<br>";

?>