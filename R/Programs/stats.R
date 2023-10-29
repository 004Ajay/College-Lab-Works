data(mtcars)
data(iris)
print(t.test(mtcars$mpg, y=NULL)) # One sample

print(t.test(mpg ~ cyl, data = mtcars, subset = cyl %in% c(4, 6))) # Two sample

print(t.test(mtcars$mpg, mtcars$am, data = mtcars, paired = T)) # Paired t-test

print(aov(mpg ~ cyl, data = mtcars)) # ANOVA Test

print(shapiro.test(mtcars$wt)) # Shapiro Normality Test

print(ks.test(mtcars$wt, mtcars$disp)) # Kolmogorov-Smirnov test

print(kruskal.test(mpg ~ am, data = mtcars)) # Kruskal Test

print(wilcox.test(iris$Sepal.Length)) # Wilcoxon Test

print(fligner.test(mtcars$mpg, mtcars$am)) # Flinger Test

print(ansari.test(rnorm(20), rnorm(10, 0, 5), conf.int = T))

smokers  <- c(83, 90, 129, 70)
patients <- c(86, 93, 136, 82)
print(prop.test(smokers, patients)) # Proposition Test

print(binom.test(64, 100, 0.5)) # Binomial Test