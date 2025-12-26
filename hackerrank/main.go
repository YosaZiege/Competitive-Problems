package main

import (
	"fmt"
	"sort"
)

func RemainderSorting(strArr []string) []string {
	var sortedArray []string
	modulos := make(map[int][]string)

	for _, word := range strArr {
		modulos[len(word)%3] = append(modulos[len(word)%3], word)
	}

	for k := range modulos {
		sort.Strings(modulos[k])
	}

	keys := make([]int, 0, len(modulos))
	for k := range modulos {
		keys = append(keys, k)
	}
	sort.Ints(keys)

	for _, k := range keys {
		sortedArray = append(sortedArray, modulos[k]...)
	}

	return sortedArray
}

func main() {
	words := []string{"Colorado", "Utah", "Wisconsin", "Oregon"}
	result := RemainderSorting(words)
	fmt.Println("Original:", words)
	fmt.Println("Sorted by len(word)%3:", result)
}

