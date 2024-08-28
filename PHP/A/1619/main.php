<?php
$t = fgets(STDIN);
while ($t--) {
    fscanf(STDIN, "%s", $str);
    $len = strlen($str);
    $half = $len / 2;
    $thalf = $half;
    if ($len % 2 == 0) {
        for ($i = 0; $i < $half; $i++) {
            if ($str[$i] != $str[$thalf]) {

                echo "NO\n";
                break;
            }
            $thalf++;
        }
        if ($i == $half) {
            echo "YES\n";
        }
    } else
        echo "NO\n";
}
