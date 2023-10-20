# You can create data partition in two ways in R

# 1st method: using CARET Library

set.seed(1) # Used to get the same partition everytime for consistent output & results
index <- createDataPartition(iris$Species, p = 0.75, list = FALSE) # 70% for training & 30% for testing
train <- iris[index, ]
test <- iris[-index, ]


# 2nd method: using R logic

set.seed(1)
split <- sample(nrow(mtcars), size = 0.8 * nrow(mtcars)) # 80% for training & 20% for testing
train_data <- mtcars[split, ]
test_data <- mtcars[-split, ]