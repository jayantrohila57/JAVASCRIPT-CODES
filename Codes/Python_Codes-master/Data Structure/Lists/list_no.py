num = (55, 44, 33, 22)
print(max(min(num[:2]), abs(-42)))



"""Step1 => num[:2]
slice means start with first
element and end before index 2
(so index 0 and 1 giving [55,44] )
Step2 => So min(55,44) will be 44
Step3 => abs(-42) is 42,
the absolute value ignoring the
sign Step4 => now from step 2 and
3.... We have Max(44,42) Which is
44"""