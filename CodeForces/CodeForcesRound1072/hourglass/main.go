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
		var s, k, m int
		var up, down int
		fmt.Fscan(in, &s, &k, &m)

		up = s
		down = 0
		if s == 1 && k == 1 {
			fmt.Println(1)
			continue
		}
		for i := 1; i <= m; i++ {
			if up != 0 {
				up--
				down++
			}
			if i == k {
				temp := up
				up = down
				down = temp
				continue
			}

		}

		fmt.Println(up)
	}
}
