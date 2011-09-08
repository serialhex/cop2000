Justin Patera  
COP 2000  
Thursday Evening  
Assignment 1  

# Problem Statement; really high-level instructions for the computer

## Computer; set symbolic constant SFPERSY to 9

## Computer; print the following message, formatted as is:

"This is Justins awesome carpet room calculator!  [Insert Disclaimer].  [Insert  
License].  [Blah Blah Blah].  Have the length and width of the room you want to  
carpet, along with the price of the carpet you want to use available."

## Computer; take the following inputs, with prompts describing the inputs taken.

1. **length** of the room in feet, take it as a _float_.
2. **width** of the room in feet, take it as a _float_.
3. **price** of carpet in square yards, take it as a _float_.

## Computer; calculate the following values:

1. **price** of carpet in square feet, by dividing it by _SFPERSY_.
2. **size** of the room, in square feet, by multiplying the _Length_ and the _Width_.
3. **total** amount needed to carpet the room, by multiplying the _Size_ by the _Price_.

## Computer; output the following, formatted as is:

"The cost of carpeting a #{length} by #{width} room would be $#{total.precision(2)},
and will take #{size / SFPERSY} square yards of carpet."

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
1. **SFPERSY**, set equal to _9_  

## Variable List
1. **length** - length of the room, in feet.
2. **width** - width of the room, in feet.
3. **price** - price of the carpet, in square yards.
4. **size** - size of the room, in square feet.
5. **otal** - total cost to carpet the room.

--------------------------------------------------------------------------------

# Justins awesome carpet room calculator - pseudocode

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ { .ruby .numberLines}

	SFPERSY = 9

	print "This is Justins awesome carpet room calculator!  [Insert Disclaimer].  [Insert
	License].  [Blah Blah Blah].  Have the length and width of the room you want to
	carpet, along with the price of the carpet you want to use available.\n"

	print "\nEnter the length in feet: "
	length = gets
	print "\nEnter the width in feet: "
	width = gets
	print "\nEnter the price of the carpet (in square yards): "
	price = gets

	size = length * width
	price = price / SFPERSY
	total = size * price

	print "The cost of carpeting a #{length} by #{width} room would be $#{total.precision(2)},
	and will take #{size / SFPERSY} square yards of carpet."

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
