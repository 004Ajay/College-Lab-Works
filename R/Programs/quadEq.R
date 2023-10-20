# Write a program in R for finding roots of a quadratic equation

a <- as.numeric(readline("Enter value of a: "))
b <- as.numeric(readline("Enter value of b: "))
c <- as.numeric(readline("Enter value of c: "))

print(paste0("Your quadratic equation: ", a, "x^2 + ", b, "x + ", c))

discr <- (b*b) - (4*a*c)

if(discr == 0){
  root <- (-b) / (2*a)
  print(paste0("The quadratic equation has only one root i.e ", root))
}else if(discr > 0) {
  root1 <- (-b + sqrt(discr)) / (2*a)
  root2 <- (-b - sqrt(discr)) / (2*a)
  
  print(paste("The two roots are ", root1, "&", root2))
}else
  print("The quadratic equation has no real numbered roots.")

# No roots - 2, 3, 4
# 1 root - -1, 10, -25
# 2 roots - 1, 5, 6