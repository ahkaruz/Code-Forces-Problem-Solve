<?php
$t = fgets(STDIN);
while ($t--) {
    $str = trim(fgets(STDIN));
    $len = strlen($str);
    $halflen = ($len - (int)($len / 2));
    $sub1 = substr($str, 0, $len / 2);
    $sub2 = substr($str, -$halflen);
    if (strcmp($sub1, $sub2) == 0)
        echo "YES\n";
    else
        echo "NO\n";
}
