Justin Patera  
COP 2000  
Thursday Evening  
Assignment 1  

# Problem Statement; really high-level instructions for the computer

Program will send a message to the screen to greet user and introduce itself and ask the user for the length of the room, then store that number in storage location named L. It then asks for the width, storing that number in a location named W. Finally the program will ask for the price of the carpet in square yards, it will then divide that amount by 9, storing that in a location named P. All user inputs will be able to use two decimal places if necessary.  The program will then multiply the length by the width and store this number in location SQFT. The program will then multiply the value in SQFT by the value in P, storing this value in a location named TotalCost. The program will display a message on screen stating that the total square footage of the room, and what the cost to carpet the room would be, rounded to two decimals. The program will lastly thank the user and display the program credits. 

--------------------------------------------------------------------------------

# Sample Softcopy

This is Justins awesome carpet room calculator!  [Insert Disclaimer].  [Insert<CR>  
License].  [Blah Blah Blah].  Have the length and width of the room you want to<CR>  
carpet, along with the price of the carpet you want to use available.<CR>  
<CR>  
Enter the length in feet: [12]<CR>  
Enter the width in feet: [15]<CR>  
Enter the price of the carpet (in square yards): [2.50]<CR>  
<CR>  
The cost of carpeting a 12 by 15 room would be $50,<CR>  
and will take 20 square yards of carpet.<CR>  

--------------------------------------------------------------------------------

# Variable Lists

## Symbolic Constant List:

Identifier | Description 			| Data Type 	| Value	| Use		| Destination
SFPERSY | Square Feet per Square Yard | Int 		| 9	| Used for P	| N/A

## Variable List
1. **length** - length of the room, in feet.
2. **width** - width of the room, in feet.
3. **price** - price of the carpet, in square yards.
4. **size** - size of the room, in square feet.
5. **total** - total cost to carpet the room.

--------------------------------------------------------------------------------

# Justins awesome carpet room calculator - pseudocode

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ { .ruby .numberLines}

	START

	print "This is Justins awesome carpet room calculator!  [Insert Disclaimer].  [Insert
	License].  [Blah Blah Blah].  Have the length and width of the room you want to
	carpet, along with the price of the carpet you want to use available."

	print "Enter the length in feet: "
	length = gets
	print "Enter the width in feet: "
	width = gets
	print "Enter the price of the carpet (in square yards): "
	price = gets

	size = length * width
	price = price / 9
	total = size * price

	print "The cost of carpeting a #{length} by #{width} room would be $#{total}, and will take #{size / 9} square yards of carpet."

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

--------------------------------------------------------------------------------

# Data tracing chart

	Line Number | Variable   |   Input   | Calculated |
	---------------------------------------------------
	            | length     | 12        |
	            | width      | 15        |
	            | price      | 2.50      |
	            | size       |           | 180
	            | price      |           | 0.277777777778
	            | total      |           | 50

--------------------------------------------------------------------------------

# Test output

This is Justins awesome carpet room calculator!  [Insert Disclaimer].  [Insert  
License].  [Blah Blah Blah].  Have the length and width of the room you want to  
carpet, along with the price of the carpet you want to use available.  
  
Enter the length in feet: [12]  
Enter the width in feet: [15]  
Enter the price of the carpet (in square yards): [2.50]  
  
The cost of carpeting a 12 by 15 room would be $50,  
and will take 20 square yards of carpet.  
