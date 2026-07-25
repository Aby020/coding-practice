echo "enter size of array: "
read n

declare -a arr

echo "Enter the array elements: "
for ((i=0;i<n;i++))

do

read arr[$i]

done

echo "Display array elements: : "
for ((i=0;i<n;i++))

do

echo ${arr[$i]}

done


