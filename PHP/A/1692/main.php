<?php
$t = fgets(STDIN);
while ($t--) {
    $line = fgets(STDIN);
    $distance = explode(" ", $line);

    $count = count($distance);
    $cnt = 0;
    for ($i = 1; $i < $count; $i++) {
        if ($distance[0] < $distance[$i]) {
            $cnt++;
        }
    }
    echo "$cnt\n";
}
