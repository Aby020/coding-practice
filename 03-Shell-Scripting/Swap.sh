echo "Before swapping"
echo "value of a"
read a
echo "value of b"
read b

temp=$a
a=$b
b=$temp

echo "after swapping"

echo "a is" $a
echo "b is" $b


