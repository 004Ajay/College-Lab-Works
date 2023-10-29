vec <- c(1:10)
n <- as.integer(readline("Enter n: "))
for (i in 1:length(vec)){
  if (i %% n == 0)
    print(vec[i])
}