<?php
$t=fgets(STDIN);
while($t--)
{
$str = fgets(STDIN);
$len = strlen($str);
$new = "";
for ($i = 0; $i < 2; $i++) {
    $new[$i] = $str[$i];
}
for($j=3;$j<$len;$j+=2)
{
    $new[$i]=$str[$j];
    $i++;
}
print($new);
}
?>