library(dbscan)
data(mtcars)

mtcars_subset <- mtcars[, c(1,3)]

dbscan_model <- dbscan(mtcars_subset, eps=2, minPts=3)
# nums 0 & 1 rep the clusters assigned by the DBSCAN to each data point
print(dbscan_model$cluster)