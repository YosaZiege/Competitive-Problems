package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	in := bufio.NewReader(os.Stdin)
	var n, m, a int
	fmt.Fscan(in, &n, &m, &a)
	
	mCoverage := ( m + a - 1 ) 
	mResult := mCoverage / a 
	nCoverage := ( n + a -1 ) 
	nResult := nCoverage / a 

	fmt.Println(mResult * nResult)
}
