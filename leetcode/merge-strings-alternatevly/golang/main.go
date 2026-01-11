func mergeAlternately(word1 string, word2 string) string {
    
    var merged string
    smallest := min(len(word1) , len(word2))
    for i := 0 ; i < smallest ; i++{
       merged += string(word1[i])
       merged += string(word2[i])
    }
    var rest string
    if (len(word1) > len(word2)){
        rest = word1[smallest:len(word1)]
    }else{
        rest = word2[smallest:len(word2)]
    }
    merged = merged + rest
    return merged
     
}
