data(mtcars)

# Create a binary variable "mpg_high" based on median value of mpg
mtcars$mpg_high <- ifelse(mtcars$mpg >= median(mtcars$mpg), "yes", "no")

library(rpart) 
model <- rpart(mpg_high ~ ., data = mtcars) # decision tree model

library(rpart.plot)
rpart.plot(model, box.palette = "Blues")