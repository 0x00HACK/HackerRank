a=($(cat))
echo ${a[@]}

OR

i=0
while read line
do
array[$i]=$line
((i+=1))
done
echo ${array[@]}
