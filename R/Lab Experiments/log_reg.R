library(MASS)
library(caret)

data(mtcars)

set.seed(42)
split <- createDataPartition(biopsy$class, times = 1,p = 0.70, list = FALSE)
test_set <- data.frame(mtcars[-split, c('hp', 'vs')])
test <- data.frame(hp = seq(min(mtcars$hp), max(mtcars$hp), len = 100))

model <- glm(vs ~ hp, data = mtcars, family = "binomial")

test$vs <- predict(model, test,type = "response")
test_preds <- predict(model, test_set, type = "response")

test_labs <- as.factor(ifelse(test_preds >= 0.5, 1, 0)) # 1 is straight engine
actual <- as.factor(test_set$vs)
cm <- confusionMatrix(actual,test_labs)

print(cm$table)
cat("Accuracy = ", cm$overall[1])
 
plot(vs ~ hp, data = mtcars, col = 'red', cex = 1.3, pch = 20)
lines(vs ~ hp, data = test, col = 'green', lwd = 2)