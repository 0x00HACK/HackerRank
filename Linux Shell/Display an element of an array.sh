arr=($(cat))
echo "${arr[3]}"

OR

i=0
while read line
do
if((i==3))
then
echo $line
fi
((i+=1))
done
