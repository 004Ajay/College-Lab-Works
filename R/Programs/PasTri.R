lim <- as.integer(readline("Enter limit: "))

for (i in 1:lim){
  for (j in 1:(lim-i+1)){
    cat(" ")
  }
  num = 1
  for (j in 1:i){
    if(num != 0){
      cat(num, " ")
    }
    num = num * (i-j)/j
  }
  cat("\n")
}

# Another method:

# pascal_triangle <- function(n) {
#   triangle <- matrix(1, nrow = n + 1, ncol = n + 1)
#   for (i in 2:(n + 1)) {
#     for (j in 1:min(i, n + 1)) {
#       if (j == 1 || j == i) {
#         triangle[i, j] <- 1
#       } else {
#         triangle[i, j] <- triangle[i - 1, j - 1] + triangle[i - 1, j]
#       }
#     }
#   }
#   return(triangle)
# }

# print(pascal_triangle(5))