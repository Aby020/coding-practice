echo "enter size of array: "
read n

sum=0

declare -a arr

echo "Enter the array $n elements: "
for ((i=0;i<n;i++))

do

read arr[$i]

done

for ((i=0;i<n;i++)) 

do

sum=$(( sum + arr[i]))

done

avg=$(( sum/n ))

echo "Sum of array elements $sum"

echo "average of array elements $avg"
