n=int(input("Enter the number of words\n"))

words=[]

for i in range(n):
    word=input(f"Enter the words {i+1} ")
    words.append(word)
    
longest_word=word[0]

for words in word:
    if len(word)>len(longest_word):
        longest_word=word
        
print(f"the longest word is {longest_word} the length is {len(longest_word)}")        
    
    