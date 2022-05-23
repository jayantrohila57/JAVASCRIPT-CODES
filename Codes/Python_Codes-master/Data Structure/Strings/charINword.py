standard_input='this is some text'
text = input()
text = text.split()

num_words=0
for x in text:
    for char in x:
        num_words += 1

print(num_words)
