//problem : Accept String Name From User and print it

package main

import "fmt"

func main() {
	var name string = "" // In Go language, a string is a sequence of characters. It can contain whitespaces as well as multiple words.

	fmt.Print("Enter Your Name: ")
	fmt.Scan(&name) // fmt.Scan is used to accept a single word separated by whitespaces.

	fmt.Println("Your Name is :", name)
}