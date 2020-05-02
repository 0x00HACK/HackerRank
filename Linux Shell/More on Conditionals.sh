read a
read b
read c

if [ $a -eq $b ] || [ $b -eq $c ] || [ $a -eq $c ]
then
    if [ $((a+b)) -eq $((c*2)) ]
    then
        echo "EQUILATERAL"
    else
        echo "ISOSCELES"
        fi
else
    echo "SCALENE"
fi
