COP 2000 - Assignment 5 - Repetition Analysis

Before doing this exercise, you should read (at least) the Repetition Structure - Accumulation Example to familiarize yourself with the recommended problem solving approach and documentation techniques used by programing professionals when performing computer analyses involving the repetition structure and sentinel controlled loops.
The Situation

A bowling team has asked you to write a program that will determine the team's average score for all bowlers competing in an upcoming competition. This program will have to repeatedly request and store the score for an individual bowler and accumulate and count each one until the user enters a negative score. After that, the program should calculate and display the team average. The displayed team average should be rounded to the nearest whole number. The partial documentation below provides an example of the program's softcopy.

Assignment

Complete the analysis for this problem that has been started on the following pages. Do not write the C++ source code; simply complete the analysis and documentation on paper.

Constraints:

This program should produce screen output that matches the format defined in the sample softcopy screen on the following page.
Do not develop this program using separate modules - develop it as a single main function.
Write the algorithm as a flowchart. See the general web page about flowcharting and the examples of using a flowchart to describe a counting loop and an accumulation using the repetition structure.
The number of players that this program processes will be different each time that the program is run. So a test of the algorithm might involve only a few scores, or a lot. It might also involve no data, as it is possible that a user might start the program and then decide after reading its introduction to not enter any data that time. So you should consider that possibility when making your design. However, for this assignment, you need only submit documents for one desk check (one set of scores). When performing the desk check, provide data to confirm that it will work properly for at least the values shown in the sample output screen given. And remember to include a column in the Tracing Chart for each variable and each condition (inside of a diamond in the flowchart).
Hint:

This task involves a sentinel contolled loop. In this exercise, the loop test condition will not be based on a single "sentinel value", but rather a range of values (positive vs. negative). So your relational expression (written in the loop test diamond) will have to test for a greater or less than relationship rather than equality.

Submission Instructions:

Review the handout entitled Assignment Notes prior to submitting the assignment. Submit your files as one or more attachments using the assignment drop box tools listed under the Lessons tab (not the email system) in the [Online Angel Server]. Use the "Attachments" button on the drop box screen on the assignment page to submit the following items (in the order listed below):

Problem Statement: in your own words, completely defining the task to be performed so that the entire program could be developed from only the facts provided in your statement.
Variable List: a formal list documenting values that will change each time the program runs.
Algorithm: a flowchart of the final corrected plan of steps for your program to perform.
Data Tracing Chart: a table used to track the values of variables and the T/F results of conditional tests during the desk check.
Test Softcopy: a simulation of the screen's appearance during a desk check.
These items can be stored and attached as one file or as multiple files. Double check to be sure that all items are included before sending message(s). If you have trouble with this, you can send each item attached to separate messages. Be sure to properly label each item of documentation. When naming each file, start each name with "A5_".

GIVEN ANALYSIS DOCUMENTS (PARTIAL)

Sample Softcopy

The numerals on the left of the sample output below are there for the analyst's reference only and will not appear on the screen. Bracketed items indicate values entered by the user.

1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
BOWLING TEAM AVERAGE PROGRAM
============================

This program will repeatedly request and store the score of
an individual bowler and accumulate and count each one until
the user enters a negative score. After that, the program will
calculate and display the rounded team average.

Player's score (negative number when done)? [103]
Player's score (negative number when done)? [150]
Player's score (negative number when done)? [145]
Player's score (negative number when done)? [136]
Player's score (negative number when done)? [-1]

Team average: 134
PATH: Faculty.IRSC.Edu> Computer Science> Faculty> Randy Gibson> Instructional Server> COP 2000> Assignments>
Last Revised: 4 october 2011	 	 	© 2011 Randolph Gibson
www.gibsonr.com/classes/cop2000/fall/a5.html	E-mail: rgibson@irsc.edu