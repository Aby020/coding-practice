fibonacci()
{
a=0

b=1

echo "fibonacci series are: "

echo $a

echo $b

for ((i=2;i<n;i++))

do

c=$((a+b))

echo $c

a=$((b))

b=$((c))

done

}

echo "Enter the fibonacci number: "
read n

fibonacci $n






