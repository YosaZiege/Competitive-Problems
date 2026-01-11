func gcdOfStrings(str1 string, str2 string) string {
    var pos1 string 
    var pos2 string 
    pos1 = str1 + str2 
    pos2 = str2 + str1 
    if (pos1 != pos2){
        return ""
    }
    a := len(str1)
    b := len(str2)
    for (b != 0){
        temp := b
        b = a % b 
        a = temp
    }
    var result string
    for i:=0;i< a;i++{
        result += string(str1[i])
    }
    return result
}


