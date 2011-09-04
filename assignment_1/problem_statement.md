# Problem Statement, Assignment 1


## Computer; set symbolic constant SFPERSY to 9

## Computer; print the following message, formatted as is:

"This is Justins awesome carpet room calculator!  [Insert Disclaimer].  [Insert  
License].  [Blah Blah Blah].  Have the length and width of the room you want to  
carpet, along with the price of the carpet you want to use available."

## Computer; take the following inputs, with prompts describing the inputs taken.

1. **Length** of the room in feet, take it as a _float_.
2. **Width** of the room in feet, take it as a _float_.
3. **Price** of carpet in square yards, take it as a _float_.

## Computer; calculate the following values:

1. **Price** of carpet in square feet, by dividing it by _SFPERSY_.
2. **Size** of the room, in square feet, by multiplying the _Length_ and the _Width_.
3. **Total** amount needed to carpet the room, by multiplying the _Size_ by the _Price_.

## Computer; output the following, formatted as is:

"The cost of carpeting a #{Length} by #{Width} room would be $#{Total.precision(2)},
and will take #{Size / SFPERSY} square yards of carpet."

