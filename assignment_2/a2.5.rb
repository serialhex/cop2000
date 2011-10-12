#!/usr/bin/env ruby

# define FACTOR constant
FACTOR = 2.54

# put header
print "\nHeight Converting Program
Designed by Randolph Gibson - 1 August 2011
Coded by Justin Patera - 2011-09-13

This program will convert a person's height from meters
into feet and inches (rounded to the nearest inch) and
display the results on the screen. The height must be
entered in metric units and may contain decimal portions.
The answer will be displayed in whole feet and whole inches.\n\n"

# get information
print "Input persons height in feet: "
feet = gets.to_i
print "Input persons height in inches: "
inches = gets.to_i

inches += feet * 12

puts "Persons height in metres: #{(inches*FACTOR)/100}"