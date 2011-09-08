# Justins awesome carpet room calculator

require '../../misc/float_prec.rb'

SFPERSY = 9

print "This is Justins awesome carpet room calculator!  [Insert Disclaimer].  [Insert
License].  [Blah Blah Blah].  Have the length and width of the room you want to
carpet, along with the price of the carpet you want to use available.\n"

print "\nEnter the length in feet: "
length = gets.to_f
print "\nEnter the width in feet: "
width = gets.to_f
print "\nEnter the price of the carpet (in square yards): "
price = gets.to_f

size = length * width
price = price / SFPERSY
total = size * price

print "The cost of carpeting a #{length} by #{width} room would be $#{total.precision(2)},
and will take #{size / SFPERSY} square yards of carpet.\n"