# Problem Statement, Assignment 1


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

