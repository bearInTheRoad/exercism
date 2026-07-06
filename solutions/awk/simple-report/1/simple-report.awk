BEGIN {
    # define the field separator
    FS = ","
}

{
    # generate and print the output for each record
    print "#" $1 ", " $2 " = " (10 * $3 + $4 + 10 * $5 + $6)/2
}
