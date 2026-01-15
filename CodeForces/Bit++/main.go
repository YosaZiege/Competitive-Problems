package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	in := bufio.NewReader(os.Stdin)
	var n int
	initialValue := 0
	fmt.Fscan(in, &n)
	for i := 0; i < n; i++ {
		var input string
		fmt.Fscan(in, &input)
		if input[0] == byte('+') || input[len(input)-1] == byte('+') {
			initialValue++
		} else if input[0] == byte('-') || input[len(input)-1] == byte('-') {
			initialValue--
		}
	}
	fmt.Println(initialValue)
}
