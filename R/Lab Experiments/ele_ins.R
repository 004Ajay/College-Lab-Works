vec <- c(1, 2, 5, 6)

position <- 3
value <- 8

# result = 1, 2, 8, 5, 6
vec <- c(vec[1:(position-1)], value, vec[position:length(vec)])

print(vec)