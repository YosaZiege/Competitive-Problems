package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	in := bufio.NewReader(os.Stdin)

	var m, n int
	fmt.Fscan(in, &m, &n)
	squares := m * n
	fmt.Printf("%d", squares/2)
}
