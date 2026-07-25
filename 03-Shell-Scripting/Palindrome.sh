echo "enter a number"

read n

rev=0

org_n=$n



while [ $n -gt 0 ]

do

rem=$(( n % 10 ))
rev=$(( rev * 10 + rem ))
n=$(( n / 10 ))

done

if [ $org_n -eq $rev ]

then

echo "$org_n is a palindrome"

else

echo "$org_n is not palindrome"

fi

