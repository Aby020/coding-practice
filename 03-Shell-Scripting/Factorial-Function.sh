factorial()
{

fact=1

for ((i=2;i<=$n;i++))

do

fact=$(( fact * i ))

done

echo $fact
}

echo "Enter the factorial number: "
read n

result=$(factorial)
echo "The factorial of $n is $result"


