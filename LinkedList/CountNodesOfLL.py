#User function Template for python3

'''

#Linked list class
class LinkedList:
    def __init__(self):
        self.head=None
        self.tail=None
        '''
class Solution:
    
    #Function to count nodes of a linked list.
    def getCount(self, head_node):
        #code here
        l=[]
        curr = head_node
        while curr != None:
            l.append(curr.next)
            curr = curr.next
        return len(l)#code here
