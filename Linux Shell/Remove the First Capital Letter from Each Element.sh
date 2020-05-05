arr=($(cat))
echo ${arr[@]/[A-Z]/.}

OR

arr=($(cat))
for i in "${arr[@]}"
do
echo -n .${i:1}" "
done

OR

readarray arr
echo ${arr[@]/[A-Z]/.}
