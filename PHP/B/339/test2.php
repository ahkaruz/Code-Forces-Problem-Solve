<?php
$line = fgets(STDIN);
$nm = explode(" ", $line);
$n = $nm[0];
$m = $nm[1];

$line2 = fgets(STDIN);
$t = explode(" ", $line2);

$cnt = 0;
$temp = 1;

for ($i = 0; $i < $m; $i++) {
    if ($t[$i] > $temp) {
        $cnt += $t[$i] - $temp;
    } elseif ($t[$i] < $temp) {
        $cnt += $n - $temp + $t[$i];
    }
    $temp = $t[$i];
}

echo "$cnt\n";
