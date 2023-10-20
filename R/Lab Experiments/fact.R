# Factorial of a number & checking if the result is a palindrome

num <- as.integer(readline("Enter a number: "))
fact <- 1

if(num >= 1){
for(i in 1:num) {
fact <- fact * i
}
print(paste0(num, "! = ", fact)) # paste0 is used to limit space b/w 'num & !'

fact_copy <- fact

# convertion to character & reversing the characters
char_split <- strsplit(as.character(fact_copy), "")[[1]]

rev_char <- rev(char_split)

rev_num <- as.numeric(paste(rev_char, collapse = ""))

if (fact_copy == rev_num){
    cat(fact_copy, "is palindrome\n")
} else {
    cat(fact_copy, "is not a palindrome\n")
}

} else if(num == 0){
print("0! = 1")
} else {
print("No factorial for negative numbers")
}



# For reversing the number we can use this arithmetic logic

# rev <- 0
# while (fact > 0) {
#   rev <- rev * 10 + fact %% 10
#   fact <- fact %/% 10
# }