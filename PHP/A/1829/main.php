<?php
$str = "codeforces";
$t = fgets(STDIN);
while ($t--) {
    $count = 0;
    $str2 = fgets(STDIN);
    for ($i = 0; $i < 10; $i++) {
        if ($str[$i] != $str2[$i]) {
            $count++;
        }
    }
    print "$count\n";
}
