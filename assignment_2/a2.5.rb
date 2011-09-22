#!/usr/bin/env ruby

# define FACTOR constant
FACTOR = 2.54

# get information
print "Input persons height in feet: "
feet = gets.to_i
print "Input persons height in inches: "
inches = gets.to_i

inches += feet * 12

puts "Persons height in metres: #{inches*FACTOR/100}"