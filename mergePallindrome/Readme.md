Given two strings , find all pallindromes that can be formed with the letters of each string . From these pallindromes:
select one from each set that when combined and rearranged, produces longest pallindrome possible .
if there are multiple pallindromes with that length , choose alphibatically 

Example:
s1 = "aabbc"
s2="ddefq"

All of the letters of the first string can make a pallindrome .
The choices using all letters are [abcba , bacab]
All of the letters of the second string can make a pallindrome [defqfed , dfeqefd , edfqfde , fdeqedf , fedqdef]


From the longest results for s1 and s2 merge the two that form the lowest merged pallindrom alphabetically,in this case
we choose abcba and defqfed , the alphabetically smallest merged pallindrome is abdefcfedba