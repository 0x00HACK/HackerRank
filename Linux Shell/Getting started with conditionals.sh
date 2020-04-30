read n
if [ $n = "n" ] || [ $n = "N" ]
then
echo "NO"
elif [ $n = "y" ] || [ $n = "Y" ]
then
echo "YES"
fi

OR

read input
if [ $input = "Y" ] || [ $input = "y" ]
then
echo YES
else
echo NO
fi

OR

read char; echo -e "YES\nNO\n" | grep -i $char
