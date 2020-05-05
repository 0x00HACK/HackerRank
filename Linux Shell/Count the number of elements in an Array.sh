arr=($(cat))
echo ${#arr[@]}

OR

i=0
while read line
do
((i+=1))
done
echo $i
