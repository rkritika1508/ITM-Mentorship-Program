def countandSay(number): 
	# Base cases 
    if number == 1:
        return "1"
    if number == 2:
        return "11"

	# Find n'th term by generating all terms from 3 to 
	# n-1. Every term is generated using previous term 
	prev = "11" # Initialize previous term 
	for i in range(3, number+1):  
		# In below for loop, previous character 
		# is processed in current iteration. That 
		# is why a dummy character is added to make 
		# sure that loop runs one extra iteration. 
		prev += '$'; 
		length = len(prev)

		counter = 1 # Initialize count of matching chars 
		temp_str = "" # Initialize i'th term in series 

		# Process previous term to find the next term 
        for j in range(1, length):
            if prev[j] != prev[j-1]: # If current character does't match
                temp_str += str(counter) # Append count of str[j-1] to temp
                temp_str += prev[j-1] # Append str[j-1]
                counter = 1 # Reset count 
            else: # If matches, then increment count of matching characters 
                counter += 1            
		
		prev = temp_str # Update prev 
	return prev

if __name__ == '__main__':
    number = int(input())
    print(countandSay(number))

