package main
import (
	"fmt"
)
func main() {
   // W 1-100
   
   var weight int64
   _ , err := fmt.Scanln(&weight)

   if err != nil {
      fmt.Println("Error")
      return
   }
   if weight > 2 && weight % 2 == 0 {
      fmt.Println("YES")
   }else {
      fmt.Println("NO")      
   }
}
