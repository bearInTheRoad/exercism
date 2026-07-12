BEGIN{}
{
    if ($0 <= 0) {
       print "Error: Only positive integers are allowed"
       exit 1
    }
    else {
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

}
END {}
