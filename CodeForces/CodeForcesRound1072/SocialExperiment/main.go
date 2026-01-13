package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	in := bufio.NewReader(os.Stdin)

	var t int
	fmt.Fscan(in, &t)
	for ; t > 0; t-- {
		var n int
		fmt.Fscan(in, &n)

		if n == 2 {
			fmt.Println(2)
			continue
		}

		if n%2 == 0 {
			fmt.Println(0)
		} else {
			fmt.Println(1)
		}
	}
}
