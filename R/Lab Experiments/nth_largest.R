vec <- sample.int(5)
v <- vec
for (i in 1:length((vec))){
  for (j in 1:length(vec)){
    if (v[i] > v[j]){
      temp = v[i]
      v[i] = v[j]
      v[j] = temp
    }
  }
}
cat("Original array: ", vec, "\n")
cat("Sorted array: ", v, "\n")
pos <- as.integer(readline("Enter n: "))
cat(pos, "largest number is ", v[pos])
