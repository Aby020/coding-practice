reverse_number()
{
num=$1
reverse=0

while [ $num -ne 0 ];do

digit=$(( num % 10 ))

reverse=$(( reverse * 10 + digit ))

num=$(( num / 10))

done

echo $reverse

}

echo "Enter a number: "

read original

reversed=$(reverse_number $original )

echo "original number: $original"

echo "Reversed number: $reversed"
