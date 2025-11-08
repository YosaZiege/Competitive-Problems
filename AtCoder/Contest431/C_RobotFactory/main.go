package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
)

func Factory() {
	var N, M, K int
	in := bufio.NewReader(os.Stdin)

	fmt.Fscan(in, &N, &M, &K)
	head_parts := make([]int, N)
	body_parts := make([]int, M)
	for i := 0; i < N; i++ {
		fmt.Fscan(in, &head_parts[i])
	}
	for i := 0; i < M; i++ {
		fmt.Fscan(in, &body_parts[i])
	}

	sort.Ints(head_parts)
	sort.Ints(body_parts)

	current_index_head := 0
	count := 0
	for i := 0; i < M; i++ {
		for j := current_index_head; j < N; j++ {
			if body_parts[i] >= head_parts[j] {
				count++
				current_index_head = j + 1
				break
			}
		}
	}

	if count >= K {
		fmt.Println("Yes")
	} else {
		fmt.Println("No")
	}
}

func main() {
	Factory()
}
