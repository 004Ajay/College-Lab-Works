a <- 10
b <- 15

cat("Greatest Common Divisor of", a, "and", b, "is", "")
    
while (b != 0) {
  temp <- b
  b <- a %% b
  a <- temp
}

res <- abs(a)  
  
cat(res, "\n")