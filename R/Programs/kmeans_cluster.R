library("ggplot2")
library("ggfortify")

data(iris)

data <- subset(iris, select=-c(Species))

kmean <- kmeans(data, centers =  3)

print(autoplot(kmean, data, frame = T))