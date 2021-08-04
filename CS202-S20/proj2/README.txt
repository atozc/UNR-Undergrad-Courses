Project 2

Purpose:
	The purpose of the program allows the user to enter an input file containing a list of cars. Adding on, the program uses an array of structs to then read and write from the input file. The struct contains a car's make, year, model, rental price, and availability. The program displays a menu to the user, given seven choices, that can overall help the user with car rental. 

Design:
	I chose to write my functions taking in the Car structs as in argument. This allowed me to keep my main function simple. Additionally, as per project requirements, I separated the program into three source files and three header files. This was a new way of sorting code for me. As a result, I found that it was easier to debug and edit code, having the program split up in parts. Next, I chose to do two functions for the following functions: printCarsToTerminal() and readCars(). I chose to do this because it allowed me to have separate parameters when there is user-entered data. Finally, I decided to create an additional function, find_InBetween, that allowed me to create a range for integers that the user was entering. I found it to have a few issues, but it worked overall. 

Problems:
	The bigget issue I had was not having the rental CaQuery recognize the conversion between car. This resulted in the program not compiling. I had a few issues in my menu.h file trying to recognize the Car struct. I also had issues implementing all the files together. Lastly, I had issues with some of my function definitions. 

Possible Changes: 
	If I had more time, I would clean my function definitions to be more simple as well as fix posible issues with the find_InBetween function. Lastly, given the time consumption of the project, I did not have time to comment the functionality of all the functions. Given more time, I would go ahead and add those comments in. As mentioned in the problem section, I could not compile my code do to function ssues with the rentalCarQuery() function. If given more time, I could resolve this issue. 
