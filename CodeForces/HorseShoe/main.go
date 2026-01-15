package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	in := bufio.NewReader(os.Stdin)
	minimum := 4
	horse_shoes_owned := make(map[int]int)
	for i := 0; i < 4; i++ {
		var color int
		fmt.Fscan(in, &color)
		horse_shoes_owned[color]++
	}

	for range horse_shoes_owned {
		minimum--
	}
	fmt.Println(minimum)
}
