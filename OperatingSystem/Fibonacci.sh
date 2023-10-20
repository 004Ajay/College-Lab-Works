echo "Enter the number: "
read num
n1=0
n2=1
sum=0
echo $n1
echo $n2
for((i = 3; i <= $num; i++))
do
sum=$(($n1 + $n2))
echo $sum
n1=$n2
n2=$sum
done
