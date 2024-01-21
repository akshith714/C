# Read input from STDIN
H, M = map(int, input().split())

# Convert hours and minutes to seconds
total_seconds = (H * 60 + M) * 60

# Print the output to STDOUT
print(total_seconds)