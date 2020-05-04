arr=($(cat))
echo ${arr[@]:3:5}

OR

while read line
do
arr+=($line)
done

for i in {3..7}
do
printf '%s ' "${arr[$i]}"
done
