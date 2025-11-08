package main

import (
	"bufio"
	"fmt"
	"os"
)

func Weight() {
	var initial, N int
	in := bufio.NewReader(os.Stdin)

	fmt.Fscan(in, &initial, &N)

	weights := make([]int, N+1)

	parts := make(map[int]bool, N+1)
	for i := 1; i <= N; i++ {
		fmt.Fscan(in, &weights[i])
		parts[i] = false
	}

	var q int
	fmt.Fscan(in, &q)
	firstTime := true
	for i := 1; i <= q; i++ {
		var currentPart int
		fmt.Fscan(in, &currentPart)
		if firstTime {
			firstTime = false
			parts[currentPart] = true
			initial = initial + weights[currentPart]
			fmt.Println(initial)
			continue
		}

		if parts[currentPart] {
			parts[currentPart] = false
			initial = initial - weights[currentPart]

		} else {
			parts[currentPart] = true
			initial = initial + weights[currentPart]
		}
		fmt.Println(initial)
	}
}

func main() {
	Weight()
}
