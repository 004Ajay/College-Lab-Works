library(caret)

df <- read.csv("height_weight.csv")

set.seed(42)  # For reproducibility
train_indices <- createDataPartition(df$weight, p=0.6, list=F)
train_data <- df[train_indices, ]
test_data <- df[-train_indices, ]

model <- lm(weight ~ height, data = train_data)

predictions <- predict(model, newdata = test_data)

print(predictions)

mse <- mean((predictions - test_data$weight)^2)
print(paste("Mean Squared Error:", mse))

plot(train_data$height, train_data$weight, 
     main = "Training Data: Height vs. Weight",
     xlab = "Height", ylab = "Weight",
     pch = 19, col = "blue")

abline(model, col = "red")

legend("topright", legend = "Linear Regression Line", col = "red", lwd = 1)