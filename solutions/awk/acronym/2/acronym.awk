BEGIN {
    FS = "[ \t-]"
}
{
    o = ""
    for (i = 1; i <= NF; i++){
        temp = $i
        gsub("[^a-zA-Z]", "", temp)
        start = substr(temp, 1, 1) 
        o = o toupper(start)
    }
    print o
}
