df<-data.frame(x=1:3,y=5:7,z=10:12)
print("apply:")
print(apply(X=df,MARGIN = 1,FUN =sum))

x <- as.list(1:2)
print("lapply:")
print(lapply(x, function(x)2^x))