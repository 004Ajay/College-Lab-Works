library(caret)
library(e1071)

data(iris)

set.seed(1)
inTrain <- createDataPartition(iris$Species, p = 0.75, list = FALSE)
train <- iris[inTrain, ]
test <- iris[-inTrain, ]

svm_model <- svm(Species ~ ., data = train, kernel = "linear")

predictions <- predict(svm_model, test)

eval_metrics <- confusionMatrix(predictions, test$Species)
print(eval_metrics$table) # showing only confusion matrix

accuracy <- eval_metrics$overall["Accuracy"]
print(paste0("Accuracy: ", round(accuracy * 100, 2), "%"))