<?php
echo "Enter the maximum number of elements for the array: ";
$limit = intval(fgets(STDIN));
$limitedArray = []; 
for ($i = 1; $i <= $limit; $i++) {
    echo "Enter element $i: ";
    $element = trim(fgets(STDIN));
    $limitedArray[] = $element;
}
$limitedArray[] = 46;
echo "The limited array is: ";
print_r ($limitedArray);
