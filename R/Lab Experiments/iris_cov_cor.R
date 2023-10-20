data(iris)

sam1 <- iris$Sepal.Length
sam2 <- iris$Petal.Width

var <- round(var(sam1), 4)
cov <- round(cov(sam1, sam2), 4)
cor <- round(cor(sam1, sam2), 4)

cat("Sepal Length & Petal Width of Iris Flower\nVariance", var, "\nCovariance:", cov,"\nCorrelation:", cor)