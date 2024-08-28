<?php
$line = fgets(STDIN);
$distance = explode(" ", $line);
print_r($distance);
$sum=array_sum($distance);
print($sum);
