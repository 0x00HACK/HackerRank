while read line; do
echo "${line:0:4}"
done

OR

cut -c 1-4
