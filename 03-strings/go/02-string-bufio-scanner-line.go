//problem : Accept String Name From User and print it

package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {

	var name string = ""
	reader := bufio.NewScanner(os.Stdin)

	fmt.Print("Enter Your Name:\n")
	reader.Scan() //bufio reader can read the whole line input into a single variable

	name = reader.Text()

	fmt.Println("Your Name is :", name)
}
