cut -c 2-7

OR

while read line;
do
echo "${line:1:6}"
done
