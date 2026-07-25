echo "enter size of array: "
read n

declare -a arr

echo "Enter the array $n elements: "
for ((i=0;i<n;i++))

do

read arr[$i]

done

largest=${arr[0]}

for ((i=0;i<n;i++))

do

if ((arr[$i]>largest))

then

largest=${arr[i]}

fi


done

echo "largest element is $largest"


