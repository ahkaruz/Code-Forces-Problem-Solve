<?php
$t = fgets(STDIN);
while ($t--) {
    $line = fgets(STDIN);
    $temp = explode(" ", $line);
    $line2 = fgets(STDIN);
    $h = explode(" ", $line2);
    $n = $temp[0];
    $x = $temp[1];
    $half = $n;
    $count = 0;
    sort($h);
    for ($i = 0; $i < $n; $i++) {
        if ($h[$half] - $h[$i] < $x) {
            echo "NO\n";
            break;
        }
        $half++;
    }
    if ($i == $n) {
        echo "Yes\n";
    }
}
