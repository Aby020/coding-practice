echo "enter the first number"

read a

echo "enter the second number"

read b

echo -e "choose any of the arithemetic operations \n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulous\n6.Exponent"

echo "select your choce: "

read c

echo "The result is: "

case $c in
	1) echo $(( $a + $b ));;
	2) echo $(( $a - $b ));;
	3) echo $(( $a * $b ));;
	4) echo $(( $a / $b ));;
	5) echo $(( $a % $b ));;
	6) echo $(( $a ** $b ));;
esac	
