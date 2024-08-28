<?php
// $line = fgets(STDIN);
// $nm = explode(" ", $line);
$n = 2; //$nm[0];
$m = 2; //$nm[1];
//$line2 = fgets(STDIN);
$t = [1, 2]; //explode(" ", $line2);
$cnt = 0;
$temp = 1;
for ($i = 0; $i < $m; $i++) {
    if (isset($t[$i])) {
        if ($t[0] == 1) {
            continue;
        } else if ($t[$i] > $temp) {
            $cnt += ($t[$i] - $temp);
        } else if ($t[$i] < $temp) {
            $cnt += ($n - $temp) + $t[$i];
        }
        $temp = $t[$i];
    }
}
print("$cnt\n");
