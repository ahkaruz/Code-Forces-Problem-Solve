<?php
$line = fgets(STDIN);
$nm = explode(" ", $line);
$n = $nm[0];
$m = $nm[1];
$line2 = fgets(STDIN);
$t = explode(" ", $line2);
$cnt = 0;
$temp = 1;
for ($i = 0; $i <= $m; $i++) {
    if (isset($t[$i])) {
        if ($t[$i] > $temp) {
            $cnt += ($t[$i] - $temp);
        } else if ($t[$i] < $temp) {
            $cnt += ($n - $temp) + $t[$i];
        }
        $temp = $t[$i];
    }
}
print("$cnt\n");
