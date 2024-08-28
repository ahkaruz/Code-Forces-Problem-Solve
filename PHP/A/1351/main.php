<?php
$t = fgets(STDIN);
while ($t--) {
    $line = fgets(STDIN);
    $temp = explode(" ", $line);
    $a = $temp[0];
    $b = $temp[1];
    echo $a+$b."\n";
}