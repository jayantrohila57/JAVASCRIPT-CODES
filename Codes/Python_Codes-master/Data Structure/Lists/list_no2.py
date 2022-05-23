standard_input='this is some text'
text = input()
text_len = len(text.split())
num_words = 0
for word in text.split():
    for char in word:
        num_words += 1
avg_len = num_words / text_len
print(avg_len)
#TODO check this code 