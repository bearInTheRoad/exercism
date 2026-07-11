BEGIN {
    FS = "[ \t-]"
}
{
    o = ""
    for (i = 1; i <= NF; i++){
        gsub("[^a-zA-Z]", "", $i)
        start =substr($i, 1, 1) 
        o = o toupper(start)
    }
    print o
}
