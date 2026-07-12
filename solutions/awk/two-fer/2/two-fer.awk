BEGIN {
    answer = "One for you, one for me."
}

NF > 0 {
        answer = "One for " $0 ", one for me."
}

END {
    print answer
}
