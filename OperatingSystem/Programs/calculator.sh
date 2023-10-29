echo "Enter two numbers:"
read x
read y

echo -e "Press\n1: Addition\n2: Subtraction\n3: Multiplication\n4: Division\nchoice: "
read ch

case $ch in
  1)echo $x "+" $y "=" $((x+y));;
  2)echo $x "-" $y "=" $((x-y));;
  3)echo $x "*" $y "=" $((x*y));;
  4)echo $x "/" $y "=" $((x/y));;
  *)echo "Choice is out of range"
esac
