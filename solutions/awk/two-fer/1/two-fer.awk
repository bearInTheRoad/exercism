BEGIN {
    answer = "One for you, one for me."
}

{
    if (length($0) > 0){
        answer = "One for " $0 ", one for me."
    }    
}

END {
    print answer
}
