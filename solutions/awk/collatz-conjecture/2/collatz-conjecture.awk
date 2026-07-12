{
    if ($0 ~ /^[1-9][0-9]*$/) {
        temp = $0
        count = 0
        while (temp != 1) {
            if (temp % 2 == 0){
                temp = temp / 2
            }
            else {
                temp = temp * 3 + 1
            }
            count += 1
        }
        print count
    }
    else {
       print "Error: Only positive integers are allowed"
       exit 1
    }

}
