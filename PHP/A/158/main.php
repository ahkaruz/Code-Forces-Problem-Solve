<?php
$line = fgets(STDIN);
$temp = explode(" ", $line);
$n = $temp[0];
$k = $temp[1];
$line2 = fgets(STDIN);
$contestant = explode(" ", $line2);
$x = 0;
for ($i = 0; $i < $n; $i++) {
    if($contestant[$i]>=$contestant[$k-1]&&$contestant[$i]>0)
    $x++;

}
echo "{$x}\n";

