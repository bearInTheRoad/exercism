BEGIN {
    FS = ","

    list[0] = "eggs"
    list[1] = "peanuts"
    list[2] = "shellfish"
    list[3] = "strawberries"
    list[4] = "tomatoes"
    list[5] = "chocolate"
    list[6] = "pollen"
    list[7] = "cats"
}

{
    temp = $1
    while (temp >= 256) {
        temp -= 256; 
    }
    
    n = 0
    for (i = 7; i >= 0; i--){
        # print(i "   " temp)
        if(temp >= 2^i){
            a_list[n] = list[i]
            n += 1
            # print(list[i])
            if ((list[i] == $3) && ($2 == "allergic_to")) {
                print "true"
                exit 0
            }
            temp -= 2^i
        }
    }

    if ($2 == "allergic_to") {
        print "false"
    }
    else {
        output = ""

        if ($1 != 0) {
            for (j = 0; j < length(a_list); j++){
                output = a_list[j] "," output
            }
            output = substr(output, 1, length(output) - 1)
        }
        print output
    }
}
