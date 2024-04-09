# Your task is to complete this function
# Function should return True/False or 1/0
def PalinArray(arr ,n):
    # Code here
     return all(str(w) == str(w)[::-1] for w in arr)


