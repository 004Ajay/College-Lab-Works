# Given a file “auto.csv” of automobile data with the fields index, company,
# body-style, wheel-base, length, engine-type, num-of-cylinders, horsepower,
# average-mileage, and price, write R program to print total cars of all
# companies, Find the average mileage of all companies.

auto <- read.csv("auto2.csv")

companies <- unique(auto$company)

for (company in companies) {
  # Print the total cars of each company
  num_cars <- sum(auto$company == company, na.rm = T) # taking sum & removing NA values
  cat(company, ": ", num_cars, " cars\n")

  # Print the average mileage of all cars of each company
  avg_mileage <- mean(auto$average_mileage[auto$company == company], na.rm = T) # taking mean & removing NA values
  cat(company, ": ", avg_mileage, " mpg\n")
}