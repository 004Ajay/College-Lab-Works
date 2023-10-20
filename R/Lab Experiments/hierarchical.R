mat <- matrix(c(5:50), ncol=2, byrow = T)
dis <- dist(mat, method = "euclidean")
clus <- hclust(dis)
plot(clus)