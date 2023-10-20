
authors <- data.frame(
  name = c("kapil", "sachin", "Rahul","Nikhil","Rohan"),
  nationality = c("US","Australia","US","UK","India"),
  retired = c("Yes","No","Yes","No","No"))

books <-data.frame(
  name = c("C", "C++","Java","php",".net","R"),
  title = c("Intro to C","Intro to C++",
            "Intro to java", "Intro to php",
            "Intro to .net", "Intro to R"),
  author = c("kapil", "kapil","sachin", "Rahul",
             "Nikhil","Nikhil"))

merge <- merge(authors, books, by.x = "name", by.y = "author")
merge