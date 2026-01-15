package main

func gcdOfStrings(str1 string, str2 string) string {

    var divider string
    for i := 0 ; i < len(str1) && i < len(str2) ; i++ {
        if (str1[i] != str2[i]){
            break
        }
        divider += string(str1[i])
    }    

    for i := 0 ; i < len(str1) ; i += len(divider) {
        if (str1[i:i+len(divider)] != divider ){
            return ""
        }
    }

    for i := 0 ; i < len(str2) ; i += len(divider) {
        if (str2[i:i+len(divider)] != divider ){
            return ""
        }
    }

    return divider
}

func main()  {
	gcdOfStrings(str1 string, str2 string)
}
