package main

import (
	"bufio"
	"fmt"
	"os"
)

func Robot() {
	var h, b int
	in := bufio.NewReader(os.Stdin)
	fmt.Fscan(in, &h, &b)

	if h > b {
		fmt.Print(h - b)
	} else {
		fmt.Print("0")
	}
}

func main() {
	Robot()
}
