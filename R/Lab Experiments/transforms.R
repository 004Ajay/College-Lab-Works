df<-data.frame(
  pos=c("G","F","F"),
  point=c(23,29,14),
  assist=c(7,5,9)
)
df_n=transform(df,point=point/2)
print(df_n)